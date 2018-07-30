/********************************************************************************
** Form generated from reading UI file 'Add_Component.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COMPONENT_H
#define UI_ADD_COMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Component
{
public:
    QLabel *label;
    QPushButton *add_component_Button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *component_image_Label;
    QPushButton *pick_image_Button;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *component_front_LineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *component_top_LineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *component_side_LineEdit;

    void setupUi(QDialog *Add_Component)
    {
        if (Add_Component->objectName().isEmpty())
            Add_Component->setObjectName(QStringLiteral("Add_Component"));
        Add_Component->resize(600, 250);
        Add_Component->setMaximumSize(QSize(600, 250));
        label = new QLabel(Add_Component);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 341, 20));
        label->setStyleSheet(QStringLiteral("font-size:16pt;"));
        add_component_Button = new QPushButton(Add_Component);
        add_component_Button->setObjectName(QStringLiteral("add_component_Button"));
        add_component_Button->setGeometry(QRect(160, 210, 311, 23));
        widget = new QWidget(Add_Component);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 60, 511, 142));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(50);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 10, -1, -1);
        component_image_Label = new QLabel(widget);
        component_image_Label->setObjectName(QStringLiteral("component_image_Label"));
        component_image_Label->setMinimumSize(QSize(100, 100));
        component_image_Label->setMaximumSize(QSize(100, 100));
        component_image_Label->setStyleSheet(QStringLiteral("border:1px solid;"));

        verticalLayout->addWidget(component_image_Label);

        pick_image_Button = new QPushButton(widget);
        pick_image_Button->setObjectName(QStringLiteral("pick_image_Button"));
        pick_image_Button->setMinimumSize(QSize(0, 0));
        pick_image_Button->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(pick_image_Button);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(32);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 5, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(140, 20));
        label_2->setStyleSheet(QStringLiteral("font-size:14pt;"));

        horizontalLayout->addWidget(label_2);

        component_front_LineEdit = new QLineEdit(widget);
        component_front_LineEdit->setObjectName(QStringLiteral("component_front_LineEdit"));
        component_front_LineEdit->setMaximumSize(QSize(220, 16777215));
        component_front_LineEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(component_front_LineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(140, 20));
        label_3->setStyleSheet(QStringLiteral("font-size:14pt;"));

        horizontalLayout_2->addWidget(label_3);

        component_top_LineEdit = new QLineEdit(widget);
        component_top_LineEdit->setObjectName(QStringLiteral("component_top_LineEdit"));
        component_top_LineEdit->setMaximumSize(QSize(220, 16777215));
        component_top_LineEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(component_top_LineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(140, 20));
        label_4->setStyleSheet(QStringLiteral("font-size:14pt;"));

        horizontalLayout_3->addWidget(label_4);

        component_side_LineEdit = new QLineEdit(widget);
        component_side_LineEdit->setObjectName(QStringLiteral("component_side_LineEdit"));
        component_side_LineEdit->setMaximumSize(QSize(220, 16777215));
        component_side_LineEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(component_side_LineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(Add_Component);

        QMetaObject::connectSlotsByName(Add_Component);
    } // setupUi

    void retranslateUi(QDialog *Add_Component)
    {
        Add_Component->setWindowTitle(QApplication::translate("Add_Component", "Add_Component", Q_NULLPTR));
        label->setText(QApplication::translate("Add_Component", "\350\276\223\345\205\245\351\234\200\346\267\273\345\212\240\347\232\204\345\205\203\344\273\266\345\233\276\347\211\207\345\217\212\345\205\266\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        add_component_Button->setText(QApplication::translate("Add_Component", "\346\267\273\345\212\240\345\205\203\344\273\266\344\277\241\346\201\257\345\210\260\346\250\241\345\274\217\345\272\223", Q_NULLPTR));
        component_image_Label->setText(QString());
        pick_image_Button->setText(QApplication::translate("Add_Component", "\351\200\211\345\217\226\345\205\203\344\273\266\345\233\276\347\211\207", Q_NULLPTR));
        label_2->setText(QApplication::translate("Add_Component", "\344\270\273\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        component_front_LineEdit->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("Add_Component", "\344\277\257\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        component_top_LineEdit->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("Add_Component", "\344\276\247\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        component_side_LineEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class Add_Component: public Ui_Add_Component {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COMPONENT_H
