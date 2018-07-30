/********************************************************************************
** Form generated from reading UI file 'Component_Library.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_LIBRARY_H
#define UI_COMPONENT_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Component_Library
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QTableWidget *all_Data_Table_Widget;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Component_Library)
    {
        if (Component_Library->objectName().isEmpty())
            Component_Library->setObjectName(QStringLiteral("Component_Library"));
        Component_Library->resize(802, 600);
        Component_Library->setMaximumSize(QSize(802, 600));
        layoutWidget = new QWidget(Component_Library);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 802, 615));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);

        all_Data_Table_Widget = new QTableWidget(layoutWidget);
        if (all_Data_Table_Widget->columnCount() < 4)
            all_Data_Table_Widget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        all_Data_Table_Widget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        all_Data_Table_Widget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        all_Data_Table_Widget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        all_Data_Table_Widget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        all_Data_Table_Widget->setObjectName(QStringLiteral("all_Data_Table_Widget"));
        all_Data_Table_Widget->setMinimumSize(QSize(800, 575));
        all_Data_Table_Widget->setMaximumSize(QSize(800, 575));
        all_Data_Table_Widget->setStyleSheet(QStringLiteral(""));
        all_Data_Table_Widget->setFrameShape(QFrame::StyledPanel);
        all_Data_Table_Widget->setFrameShadow(QFrame::Sunken);
        all_Data_Table_Widget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        all_Data_Table_Widget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        all_Data_Table_Widget->setSelectionBehavior(QAbstractItemView::SelectRows);
        all_Data_Table_Widget->setGridStyle(Qt::SolidLine);
        all_Data_Table_Widget->horizontalHeader()->setCascadingSectionResizes(true);
        all_Data_Table_Widget->horizontalHeader()->setMinimumSectionSize(45);
        all_Data_Table_Widget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        all_Data_Table_Widget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(all_Data_Table_Widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Component_Library);

        QMetaObject::connectSlotsByName(Component_Library);
    } // setupUi

    void retranslateUi(QDialog *Component_Library)
    {
        Component_Library->setWindowTitle(QApplication::translate("Component_Library", "Component_Library", Q_NULLPTR));
        addButton->setText(QApplication::translate("Component_Library", "\346\267\273\345\212\240\345\205\203\344\273\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = all_Data_Table_Widget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Component_Library", "\345\205\203\344\273\266\345\233\276\347\211\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = all_Data_Table_Widget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Component_Library", "\344\270\273\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = all_Data_Table_Widget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Component_Library", "\344\277\257\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = all_Data_Table_Widget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Component_Library", "\345\267\246\350\247\206\345\233\276\347\211\271\345\276\201\347\274\226\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Component_Library: public Ui_Component_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_LIBRARY_H
