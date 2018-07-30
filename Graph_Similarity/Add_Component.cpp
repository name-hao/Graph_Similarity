#include "stdafx.h"
#include "Add_Component.h"

Add_Component::Add_Component(QWidget *parent, Data_Manager& data_manager)
    : QDialog(parent), data_manager{data_manager}
{
    ui.setupUi(this);
    connect(ui.add_component_Button, SIGNAL(clicked()), this, SLOT(add_Component()));
    connect(ui.pick_image_Button, SIGNAL(clicked()), this, SLOT(show_Component_Image()));
    ui.component_front_LineEdit->setText(u8"F80000300000000000000300001");
    ui.component_top_LineEdit->setText(u8"T40000000000001");
    ui.component_side_LineEdit->setText(u8"S40000000000001");
}

void Add_Component::add_Component()
{
    QString component_front = ui.component_front_LineEdit->text();
    if (component_front.isEmpty())
    {
        QMessageBox::about(this, u8"提示", u8"元件主视图特征码为空，请输入");
        return;
    }
    QString component_top = ui.component_top_LineEdit->text();
    if (component_top.isEmpty())
    {
        QMessageBox::about(this, u8"提示", u8"元件俯视图特征码为空，请输入");
        return;
    }
    QString component_side = ui.component_side_LineEdit->text();
    if (component_side.isEmpty())
    {
        QMessageBox::about(this, u8"提示", u8"元件左视图特征码为空，请输入");
        return;
    }

    const QPixmap* component_pixmap = ui.component_image_Label->pixmap();
    if (!component_pixmap)
    {
        QMessageBox::about(this, u8"提示", u8"请选择元件图片");
        return;
    }

    QBuffer buffer;
    buffer.open(QIODevice::ReadWrite);
    component_pixmap->save(&buffer, "jpg");
    QByteArray component_image;
    component_image.append(buffer.data());

    bool result = data_manager.add_Component(component_image, component_front, component_top, component_side);
    qDebug() << u8"添加结果: " << result << endl;
    emit update();
    this->hide();

}
extern QPixmap ScaleImage2Label(QPixmap qImage, QLabel* qLabel);

void Add_Component::show_Component_Image()
{
    QString filename = QFileDialog::getOpenFileName(this,
        tr("Open Image"), ".", tr("Image File (*.jpg *.png *.bmp)"));
    if (filename.isEmpty())
    {
        return;
    }
    QPixmap image = QPixmap(filename);
    image.scaled(ui.component_image_Label->size(), Qt::KeepAspectRatio);
    //ui.component_image_Label->setScaledContents(false); 

    ui.component_image_Label->setPixmap(ScaleImage2Label(image, ui.component_image_Label));

    ui.component_image_Label->setAlignment(Qt::AlignCenter);
}
Add_Component::~Add_Component()
{
}
