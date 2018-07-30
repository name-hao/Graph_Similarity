/********************************************************************************
** Form generated from reading UI file 'Graph_Similarity.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_SIMILARITY_H
#define UI_GRAPH_SIMILARITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graph_SimilarityClass
{
public:
    QWidget *centralWidget;
    QPushButton *check_library_Button;
    QFrame *frame;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *target_image_Label;
    QPushButton *target_image_Button;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *target_front_LineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *target_top_LineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *target_side_LineEdit;
    QPushButton *match_Button;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_15;
    QLabel *match_Result_Label;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *front_view_type;
    QLabel *top_view_type;
    QLabel *side_view_type;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *Graph_SimilarityClass)
    {
        if (Graph_SimilarityClass->objectName().isEmpty())
            Graph_SimilarityClass->setObjectName(QStringLiteral("Graph_SimilarityClass"));
        Graph_SimilarityClass->resize(735, 629);
        Graph_SimilarityClass->setMinimumSize(QSize(735, 500));
        Graph_SimilarityClass->setMaximumSize(QSize(735, 700));
        centralWidget = new QWidget(Graph_SimilarityClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(600, 500));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        check_library_Button = new QPushButton(centralWidget);
        check_library_Button->setObjectName(QStringLiteral("check_library_Button"));
        check_library_Button->setGeometry(QRect(10, 5, 75, 23));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(90, 33, 580, 190));
        frame->setStyleSheet(QStringLiteral("border:1px solid;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(90, 280, 580, 331));
        frame_2->setStyleSheet(QStringLiteral("border:1px solid;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 40, 564, 562));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("margin-bottom:10px;font-size:15pt;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_14);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 15);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 3, -1, -1);
        target_image_Label = new QLabel(layoutWidget);
        target_image_Label->setObjectName(QStringLiteral("target_image_Label"));
        target_image_Label->setMinimumSize(QSize(100, 100));
        target_image_Label->setMaximumSize(QSize(100, 100));
        target_image_Label->setStyleSheet(QStringLiteral("border:1px solid;"));

        verticalLayout_3->addWidget(target_image_Label);

        target_image_Button = new QPushButton(layoutWidget);
        target_image_Button->setObjectName(QStringLiteral("target_image_Button"));
        target_image_Button->setMinimumSize(QSize(100, 20));
        target_image_Button->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(target_image_Button);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(31);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font-size:14pt;"));

        horizontalLayout_2->addWidget(label);

        target_front_LineEdit = new QLineEdit(layoutWidget);
        target_front_LineEdit->setObjectName(QStringLiteral("target_front_LineEdit"));
        target_front_LineEdit->setMinimumSize(QSize(290, 0));
        target_front_LineEdit->setMaximumSize(QSize(290, 16777215));

        horizontalLayout_2->addWidget(target_front_LineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-size:14pt;"));

        horizontalLayout_3->addWidget(label_2);

        target_top_LineEdit = new QLineEdit(layoutWidget);
        target_top_LineEdit->setObjectName(QStringLiteral("target_top_LineEdit"));
        target_top_LineEdit->setMinimumSize(QSize(290, 0));
        target_top_LineEdit->setMaximumSize(QSize(290, 16777215));

        horizontalLayout_3->addWidget(target_top_LineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font-size:14pt;"));

        horizontalLayout_4->addWidget(label_3);

        target_side_LineEdit = new QLineEdit(layoutWidget);
        target_side_LineEdit->setObjectName(QStringLiteral("target_side_LineEdit"));
        target_side_LineEdit->setMinimumSize(QSize(290, 0));
        target_side_LineEdit->setMaximumSize(QSize(290, 16777215));

        horizontalLayout_4->addWidget(target_side_LineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_7->addLayout(horizontalLayout_5);

        match_Button = new QPushButton(layoutWidget);
        match_Button->setObjectName(QStringLiteral("match_Button"));
        match_Button->setMinimumSize(QSize(0, 38));
        match_Button->setMaximumSize(QSize(16777215, 16777215));
        match_Button->setLayoutDirection(Qt::LeftToRight);
        match_Button->setStyleSheet(QStringLiteral("margin-top:5px;margin-bottom:5px;font-size:13pt;margin-left:150px;margin-right:150px;"));

        verticalLayout_7->addWidget(match_Button);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 15, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(100, 16777215));
        label_15->setStyleSheet(QStringLiteral("font-size:12pt;"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_15);

        match_Result_Label = new QLabel(layoutWidget);
        match_Result_Label->setObjectName(QStringLiteral("match_Result_Label"));
        match_Result_Label->setMinimumSize(QSize(100, 100));
        match_Result_Label->setMaximumSize(QSize(100, 100));
        match_Result_Label->setStyleSheet(QStringLiteral("border:1px solid;"));
        match_Result_Label->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(match_Result_Label);


        horizontalLayout_6->addLayout(verticalLayout_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(350, 0));
        label_4->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(16777215, 40));
        label_6->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(120, 30, -1, 15);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_2->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        front_view_type = new QLabel(layoutWidget);
        front_view_type->setObjectName(QStringLiteral("front_view_type"));
        front_view_type->setMinimumSize(QSize(180, 0));
        front_view_type->setMaximumSize(QSize(180, 16777215));
        front_view_type->setStyleSheet(QStringLiteral("font-size:13pt;"));

        verticalLayout_5->addWidget(front_view_type);

        top_view_type = new QLabel(layoutWidget);
        top_view_type->setObjectName(QStringLiteral("top_view_type"));
        top_view_type->setStyleSheet(QStringLiteral("font-size:13pt;"));

        verticalLayout_5->addWidget(top_view_type);

        side_view_type = new QLabel(layoutWidget);
        side_view_type->setObjectName(QStringLiteral("side_view_type"));
        side_view_type->setStyleSheet(QStringLiteral("font-size:13pt;"));

        verticalLayout_5->addWidget(side_view_type);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_6->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_6->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font-size:14pt;"));

        verticalLayout_6->addWidget(label_12);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font-size:14pt;margin-left:115px;"));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(label_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        Graph_SimilarityClass->setCentralWidget(centralWidget);
        frame->raise();
        frame_2->raise();
        layoutWidget->raise();
        check_library_Button->raise();

        retranslateUi(Graph_SimilarityClass);

        QMetaObject::connectSlotsByName(Graph_SimilarityClass);
    } // setupUi

    void retranslateUi(QMainWindow *Graph_SimilarityClass)
    {
        Graph_SimilarityClass->setWindowTitle(QApplication::translate("Graph_SimilarityClass", "Graph_Similarity", Q_NULLPTR));
        check_library_Button->setText(QApplication::translate("Graph_SimilarityClass", "\346\237\245\347\234\213\346\250\241\345\274\217\345\272\223", Q_NULLPTR));
        label_14->setText(QApplication::translate("Graph_SimilarityClass", "\350\276\223\345\205\245\351\234\200\345\214\271\351\205\215\345\205\203\344\273\266\347\232\204\347\274\226\347\240\201\345\217\212\345\233\276\347\211\207", Q_NULLPTR));
        target_image_Label->setText(QString());
        target_image_Button->setText(QApplication::translate("Graph_SimilarityClass", "\351\200\211\345\217\226\345\233\276\347\211\207", Q_NULLPTR));
        label->setText(QApplication::translate("Graph_SimilarityClass", "\344\270\273\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        target_front_LineEdit->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("Graph_SimilarityClass", "\344\277\257\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        target_top_LineEdit->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("Graph_SimilarityClass", "\344\276\247\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        target_side_LineEdit->setPlaceholderText(QString());
        match_Button->setText(QApplication::translate("Graph_SimilarityClass", "\345\274\200\345\247\213\345\214\271\351\205\215", Q_NULLPTR));
        label_15->setText(QApplication::translate("Graph_SimilarityClass", "\345\214\271\351\205\215\347\273\223\346\236\234:", Q_NULLPTR));
        match_Result_Label->setText(QString());
        label_4->setText(QApplication::translate("Graph_SimilarityClass", "\344\270\273\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Graph_SimilarityClass", "\344\277\257\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Graph_SimilarityClass", "\344\276\247\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Graph_SimilarityClass", "\344\270\273\350\247\206\345\233\276\347\233\270\344\274\274\347\261\273\345\236\213:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Graph_SimilarityClass", "\344\277\257\350\247\206\345\233\276\347\233\270\344\274\274\347\261\273\345\236\213:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Graph_SimilarityClass", "\344\277\257\350\247\206\345\233\276\347\233\270\344\274\274\347\261\273\345\236\213:", Q_NULLPTR));
        front_view_type->setText(QString());
        top_view_type->setText(QString());
        side_view_type->setText(QString());
        label_10->setText(QApplication::translate("Graph_SimilarityClass", "\347\233\270\344\274\274\345\272\246:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Graph_SimilarityClass", "\347\233\270\344\274\274\345\272\246:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Graph_SimilarityClass", "\347\233\270\344\274\274\345\272\246:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Graph_SimilarityClass", "\344\270\211\350\247\206\345\233\276\346\234\200\347\273\210\347\233\270\344\274\274\345\272\246:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Graph_SimilarityClass: public Ui_Graph_SimilarityClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_SIMILARITY_H
