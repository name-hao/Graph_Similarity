#pragma once
#include <QByteArray>
#include <QString>
#include <QPixmap>
class Component
{
public:
    Component(int component_id, QByteArray component_image, QString front_view, QString top_view, QString side_view);
    ~Component();
    int component_id;
    QPixmap component_image;
    QString front_view;
    QString top_view;
    QString side_view;

};

