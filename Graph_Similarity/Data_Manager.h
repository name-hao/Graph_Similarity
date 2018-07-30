#pragma once
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QByteArray>
#include <QList>
#include "Component.h"
class Data_Manager
{
public:
    Data_Manager();
    bool isOpen();
    bool add_Component(QByteArray& component_image, QString& front_view,
        QString& top_view, QString& side_view
    );
    bool delete_Component_By_Id(int component_id);
    QList<Component> get_All_Components();

    ~Data_Manager();

private:
    QSqlDatabase db;
    bool databeseIsOpen, isPersonalKey;
};

