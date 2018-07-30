#pragma once
#include <QtWidgets/QMainWindow>
#include <QPoint>
#include <QList>
#include "ui_Graph_Similarity.h"
#include "Component.h"
#include "Data_Manager.h"
#include "Component_Library.h"
class Graph_Similarity : public QMainWindow
{
    Q_OBJECT

public:
    Graph_Similarity(QWidget *parent = Q_NULLPTR);
    ~Graph_Similarity();

private:
    Ui::Graph_SimilarityClass ui;
    Component_Library* library;
    QList<Component> all_components;
    Data_Manager data_manager;
    
protected:
    
    int match_algorithm(QString target_front, QString target_top, QString target_side);
    void result_type(int index);
    QString type(int code);
    QString number(int code);

private slots:
    
    void show_Library();
    void show_Target_Image();
    void match_result();
};
