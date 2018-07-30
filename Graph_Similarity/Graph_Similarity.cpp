#include "stdafx.h"
#include <QModelIndex>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QImage>
#include <QPixmap>
#include <QTableWidgetItem>
#include <QIcon>
#include <QSize>
#include <vector>
#include <cstdlib>
using std::vector;
#include "Graph_Similarity.h"

Graph_Similarity::Graph_Similarity(QWidget *parent)
    : QMainWindow(parent)
{
    //�����ui��ͷ����䣬���������������ϵ�һЩ��������Եģ�
    ui.setupUi(this);
    library = new Component_Library(this, data_manager, all_components);
    
    //������5��connect�������������������ϵİ�ť�ͺ��������������ӣ�Ҳ����˵������¼�������ʱ�򣬻���ת����ӦSLOT�ں�������ִ�С�
    
    connect(ui.match_Button, SIGNAL(clicked()), this, SLOT(match_result()));
   
    connect(ui.target_image_Button, SIGNAL(clicked()), this, SLOT(show_Target_Image()));
    connect(ui.check_library_Button, SIGNAL(clicked()), this, SLOT(show_Library()));
    //������������������һ��Ŀ��Ԫ���������룬����͵������
    ui.target_front_LineEdit->setText("F40000000000001");
    ui.target_top_LineEdit->setText("T30200200200");
    ui.target_side_LineEdit->setText("S40000000000001");
    
    //��������д�����������ʼ������ģ�
    //������һ�д��룬������չʾ����Ԫ����Ϣ��
    
}

void Graph_Similarity::show_Library()
{
    library->setModal(true);
    library->show();
}

QPixmap ScaleImage2Label(QPixmap qImage, QLabel* qLabel)
{  
    QSize qImageSize = qImage.size();
    QSize qLabelSize = qLabel->size();
    if ((qLabelSize.height()>qImageSize.height()) &&
        (qLabelSize.width()>qImageSize.width())
        )
    {
        return qImage;
    }
    QPixmap qScaledImage;
    double dWidthRatio = 1.0*qImageSize.width() / qLabelSize.width();
    double dHeightRatio = 1.0*qImageSize.height() / qLabelSize.height();
    if (dWidthRatio>dHeightRatio)
    {
        qScaledImage = qImage.scaledToWidth(qLabelSize.width());
    }
    else
    {
        qScaledImage = qImage.scaledToHeight(qLabelSize.height());
    }
    return qScaledImage;
}


void Graph_Similarity::show_Target_Image()
{
    QString filename = QFileDialog::getOpenFileName(this,
        tr("Open Image"), ".", tr("Image File (*.jpg *.png *.bmp)"));
    if (filename.isEmpty())
    {
        return;
    }
    QPixmap image = QPixmap(filename);
    image.scaled(ui.target_image_Label->size(), Qt::KeepAspectRatio);
    ui.target_image_Label->setPixmap(ScaleImage2Label(image, ui.target_image_Label));
    ui.target_image_Label->setAlignment(Qt::AlignCenter);
}

double QT;//�������ƶ�ֵ
double QG;//�������ƶ�ֵ
double QD;//��������Լ��ֵ

//����ƥ���㷨
//�������ƶ�
void Topological_Similarity(QString& a, QString& b)
{
    double c1{ 0.0 }, c2{ 0.0 };
    for (int j = 2; j < 1+3*b[1].digitValue();)
    {
        if (a[j] == b[j]) 
            c1 += 1.0;
        else 
            c1 += 0.25;
        j = j + 3;
    }
    c2 = a[1].digitValue();
    QT = (c1 + c2) / 2 / a[1].digitValue();
    //qDebug() << QT << endl;
}
//�������ƶ�
void Geometric_Similarity(QString& a, QString& b)
{
    double c3{ 0.0 }, c4{ 0.0 };
    int m = 2 + 3 * a[1].digitValue();
    if (a[m] == b[m])
        c4 = 1.0;
    else
        c4 = 0.0;
    for (int j = 3; j < 1+3*a[1].digitValue();)
    {
        if (a[j] == b[j])
            c3 += 1.0;
        else
        {
            if (a[j].isDigit() && b[j].isDigit())
            {
                int x = a[j].digitValue();
                int y = b[j].digitValue();
                if ((x == 0 && y == 6) || (x == 6 && y == 0)) c3 = c3 + 0.75;
                else
                {
                    if ((x == 0 || x == 6 || x == 1 || x == 2 || x == 5) && (y == 0 || y == 6 || y == 1 || y == 2 || y == 5))
                        c3 = c3 + 0.5;
                    else
                        c3 = c3 + 0;
                }
                
            }                 
        }
        j += 3;
    }
    QG = (QT * 2 * a[1].digitValue() + c3 + c4) / (3 * a[1].digitValue() + 1);
}
//����Լ�����ƶ�
void Geometric_Constraint_Similarity(QString& a, QString& b)
{
    double c5{ 0.0 };
    for (int j = 4; j < 2+3*a[1].digitValue();)
    {
        if (a[j] == b[j])
            c5 += 1.0;
        else
        {
            if (a[j].isDigit() && b[j].isDigit())
            {
                int x = a[j].digitValue();
                int y = b[j].digitValue();
                if ((x == 2 || x == 3) && (y == 2 || y == 3))
                    c5 = c5 + 0.75;
                else
                    c5 = c5 + 0.0;
            }           
        }
        j += 3;
    }
    QD = (QG*(3 * a[1].digitValue() + 1) + c5) / (4 * a[1].digitValue() + 1);
}

// ����Ԫ����Ŀ��ͬ �����ƣ����� 0��

// ����Ԫ����Ŀ��ͬ �����ƣ�����  1

// ����ģ������           ����  2
// ��������             ������  6

// ������״ģ������      ������  10
// ������״����          ������ 14

// ����Լ������           ������ 18
// ȷ��������            ������ 22

int single_view_score(QString source_view, QString target_view)
{
    //qDebug() << u8"��һ���ַ�: " << source_view[0] << u8"���һ���ַ�" << source_view[source_view.size()-1].digitValue() << endl;
    if (source_view[1] == target_view[1])
    {
        Topological_Similarity(source_view, target_view);
        int m;
        if (QT == 0.0)
            m = 0;
        else if (QT == 1.0)
            m = 1;
        else
            m = 3;
        
        switch (m)
        {
        case 0:
            //������Ŀ��ͬ��������
            return 1;
        case 1:
        case 2:
            Geometric_Similarity(source_view, target_view);
            if (QG == 0.0)
                return 6;//��������
            else if (QG == 1.0)
            {
                Geometric_Constraint_Similarity(source_view, target_view);
                if (QD == 0.0)
                    return 14;//������״ȷ������
                else if (QD == 1.0)
                    return 22;//�ߴ�Լ��ȷ��������
                else
                    return 18;//�ߴ�Լ��ģ������                    
            }
            else
                return 10;//������״ģ������
        default:
            return 2;//����ģ������
        }
    }
    else
    {
        //����Ԫ����Ŀ��ͬ������
        return 0;
    }

}

Graph_Similarity::~Graph_Similarity()
{
    delete library;
}

int Graph_Similarity::match_algorithm(QString target_front, QString target_top, QString target_side)
{
    //������ƥ������������
    //����ƥ����=����ͼƥ���+����ͼƥ���+����ͼƥ���
    //��ƥ��������ֵ��Ӧ���±���з��أ�
    vector<double> result;
    
    for (const auto& single_component : all_components)
    {
        int single_match_result{ 0 };
        //��ʼƥ������ͼ����
        int front_result = single_view_score(single_component.front_view, target_front);
        
        //��ʼƥ�丩��ͼ����
        int top_result = single_view_score(single_component.top_view, target_top);
       
        //��ʼƥ������ͼ����
        int side_result = single_view_score(single_component.side_view, target_side);

        single_match_result += front_result;
        single_match_result += top_result;
        single_match_result += side_result;
        
        result.push_back(single_match_result);
    }
    
    auto max_element = std::max_element(result.begin(), result.end());
    ui.label_13->setText(QString(u8"����ͼ�������ƶ�: ")+QString::number(*max_element));
    int index = std::distance(result.begin(), max_element);
    return index;
}
// ����Ԫ����Ŀ��ͬ �����ƣ����� 0��

// ����Ԫ����Ŀ��ͬ �����ƣ�����  1

// ����ģ������           ����  2
// ��������             ������  6

// ������״ģ������      ������  10
// ������״����          ������ 14

// ����Լ������           ������ 18
// ȷ��������            ������ 22
QString Graph_Similarity::type(int code)
{
    switch (code)
    {
    case 0: return QString(u8"����Ԫ�ز���ͬ,������"); break;        
    case 1:    return QString(u8"����Ԫ����Ŀ��ͬ,������"); break;
    case 2:    return QString(u8"����ģ������"); break;
    case 6:    return QString(u8"��������"); break;
    case 10:   return QString(u8"������״ģ������"); break;
    case 14:   return QString(u8"������״ȷ������"); break;
    case 18:   return QString(u8"�ߴ�Լ��ģ������"); break;
    case 22:   return QString(u8"ȷ��������"); break;
    default:
        return QString();
    }
}

QString Graph_Similarity::number(int code)
{
    switch (code)
    {
    case 0: return QString(u8"���ƶ�: ") + QString::number(0); break;
    case 1:    return QString(u8"���ƶ�: ") + QString::number(0); break;
    case 2:    return QString(u8"���ƶ�: ") + QString::number(QT, 'f', 2); break;
    case 6:    return QString(u8"���ƶ�: ") + QString::number(1); break;
    case 10:   return QString(u8"���ƶ�: ") + QString::number(QG, 'f', 2); break;
    case 14:   return QString(u8"���ƶ�: ") + QString::number(1); break;
    case 18:   return QString(u8"���ƶ�: ") + QString::number(QD, 'f', 2); break;
    case 22:   return QString(u8"���ƶ�: ") + QString::number(1); break;
    default:
        return QString();
    }
}

void Graph_Similarity::result_type(int index)
{
    //����ͼ���
    int front_result = single_view_score(all_components.at(index).front_view, ui.target_front_LineEdit->text());
    /*qDebug() << front_result << endl;
    qDebug() << QT << endl << QG << endl << QD << endl;*/
    ui.front_view_type->setText(this->type(front_result));
    ui.label_10->setText(this->number(front_result));

    //��ʼƥ�丩��ͼ����
    int top_result = single_view_score(all_components.at(index).top_view, ui.target_top_LineEdit->text());
    /*qDebug() << top_result << endl;
    qDebug() << QT << endl << QG << endl << QD << endl;*/
    ui.top_view_type->setText(this->type(top_result));
    ui.label_11->setText(this->number(top_result));
    //��ʼƥ������ͼ����
    int side_result = single_view_score(all_components.at(index).side_view, ui.target_side_LineEdit->text());
   /* qDebug() << side_result << endl;
    qDebug() << QT << endl << QG << endl << QD << endl;*/
    
    ui.side_view_type->setText(this->type(side_result));
    ui.label_12->setText(this->number(side_result));
}

void Graph_Similarity::match_result()
{
    ui.match_Result_Label->clear();
    
    QString target_front = ui.target_front_LineEdit->text();
    if (target_front.isEmpty())
    {
        QMessageBox::about(this, u8"��ʾ", u8"Ŀ������ͼ������Ϊ�գ�������");
        return;
    }
    QString target_top = ui.target_top_LineEdit->text();
    if (target_top.isEmpty())
    {
        QMessageBox::about(this, u8"��ʾ", u8"Ŀ�긩��ͼ������Ϊ�գ�������");
        return;
    }
    QString target_side = ui.target_side_LineEdit->text();
    if (target_side.isEmpty())
    {
        QMessageBox::about(this, u8"��ʾ", u8"Ŀ������ͼ������Ϊ�գ�������");
        return;
    }
    
    int index = match_algorithm(target_front, target_top, target_side);
    if (index != -1)
    {       
        ui.match_Result_Label->setPixmap(all_components.at(index).component_image);
        ui.label_4->setText(QString(u8"����ͼ��������:")+all_components.at(index).front_view);
        ui.label_5->setText(QString(u8"����ͼ��������:") + all_components.at(index).top_view);
        ui.label_6->setText(QString(u8"����ͼ��������:") + all_components.at(index).side_view);
        this->result_type(index);
    }
    else
    {
        QMessageBox::about(this, u8"��ʾ", u8"ģʽ�����Ҳ�������ƥ���ģʽԪ��");
        return;
    }
}