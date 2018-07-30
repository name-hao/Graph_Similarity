#pragma once

#include <QDialog>
#include "ui_Component_Library.h"
#include "Data_Manager.h"
#include "Add_Component.h"
class Component_Library : public QDialog
{
    Q_OBJECT

public:
    Component_Library(QWidget *parent = Q_NULLPTR, Data_Manager& datam_manager = Data_Manager(), QList<Component>& all_components = QList<Component>());
    ~Component_Library();
   
private:
    Ui::Component_Library ui;
    int item_selected{ -1 };
    QList<Component>& all_components;
    Data_Manager& data_manager;
    Add_Component* add_component_dialog;

private slots:
    void show_Menu(QPoint);
    void remove_Menu_Item();
    void add_component();
    void show_all_components();
};
