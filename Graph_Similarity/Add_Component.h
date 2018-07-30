#pragma once

#include <QDialog>
#include "ui_Add_Component.h"
#include "Data_Manager.h"
class Add_Component : public QDialog
{
    Q_OBJECT

public:
    Add_Component(QWidget *parent = Q_NULLPTR, Data_Manager& data_manager = Data_Manager());
    ~Add_Component();

private:
    Ui::Add_Component ui;
    Data_Manager& data_manager;

signals:
    void update();

private slots:
    void add_Component();
    void show_Component_Image();
};
