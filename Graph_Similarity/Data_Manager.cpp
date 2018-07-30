#include "stdafx.h"
#include "Data_Manager.h"


Data_Manager::Data_Manager()
{
    if (QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("pattern_library");
    db.setUserName("root");
    db.setPassword("123456");
    
    databeseIsOpen = db.open();
    qDebug() << u8"数据库连接状态" << databeseIsOpen;
}

Data_Manager::~Data_Manager()
{
    if (db.isOpen() || db.isValid())
    {
        db.close();
        qDebug() << u8"数据库关闭成功" << endl;
    }
}

bool Data_Manager::isOpen()
{
    return databeseIsOpen;
}

bool Data_Manager::add_Component(QByteArray& component_image, QString& front_view,
    QString& top_view, QString& side_view
)
{
    QSqlQuery add_component_query(db.database());
    add_component_query.prepare("insert into component (component_image, front_view, top_view, side_view ) values(?,?,?,?)");
    
    add_component_query.bindValue(0, component_image);
    add_component_query.bindValue(1, front_view);
    add_component_query.bindValue(2, top_view);
    add_component_query.bindValue(3, side_view);
    bool result = add_component_query.exec();
    return result;
}

QList<Component> Data_Manager::get_All_Components()
{
    QSqlQuery find_all_query(db.database());
    find_all_query.prepare("select * from component");
    find_all_query.exec();
    QList<Component> result;
    while (find_all_query.next())
    {
        int id = find_all_query.value(0).toInt();
        QByteArray image_data = find_all_query.value(1).toByteArray();
        QString front_view = find_all_query.value(2).toString();
        QString top_view = find_all_query.value(3).toString();
        QString side_view = find_all_query.value(4).toString();

        result.push_back( Component(id, image_data, front_view, top_view, side_view)) ;
    }

    return result;
}

bool  Data_Manager::delete_Component_By_Id(int component_id)
{
    QSqlQuery delete_component_query(db.database());
    delete_component_query.prepare("delete from component where component_id = ?");
    delete_component_query.bindValue(0, component_id);
    bool result = delete_component_query.exec();
    return result;
}