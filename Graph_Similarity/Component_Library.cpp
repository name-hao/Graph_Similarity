#include "stdafx.h"
#include "Component_Library.h"

Component_Library::Component_Library(QWidget *parent, Data_Manager& data_manager, QList<Component>& all_components)
    : QDialog(parent), data_manager{ data_manager }, all_components{all_components}
{
    ui.setupUi(this);
    add_component_dialog = new Add_Component(this, data_manager);
    connect(add_component_dialog, SIGNAL(update()), this, SLOT(show_all_components()));
    ui.all_Data_Table_Widget->clearContents();
    ui.all_Data_Table_Widget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui.all_Data_Table_Widget->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选择行为，以行为单位
    ui.all_Data_Table_Widget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui.all_Data_Table_Widget->setContextMenuPolicy(Qt::CustomContextMenu);
    ui.all_Data_Table_Widget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui.all_Data_Table_Widget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    connect(ui.all_Data_Table_Widget, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(show_Menu(QPoint)));
    connect(ui.addButton, SIGNAL(clicked()), this, SLOT(add_component()));
    show_all_components();
}

void Component_Library::add_component()
{
    add_component_dialog->setModal(true);
    add_component_dialog->show();
}

void Component_Library::show_Menu(const QPoint pos)
{
    QMenu *menu = new QMenu(ui.all_Data_Table_Widget);
    QAction *pnew = new QAction(u8"删除", ui.all_Data_Table_Widget);
    connect(pnew, SIGNAL(triggered()), this, SLOT(remove_Menu_Item()));
    menu->addAction(pnew);
    menu->move(cursor().pos());
    menu->show();
    int x = pos.x();
    int y = pos.y();
    QModelIndex index = ui.all_Data_Table_Widget->indexAt(QPoint(x, y));
    this->item_selected = index.row();
}

void Component_Library::remove_Menu_Item()
{
    qDebug() << u8"选中的行数: " << item_selected << endl;
    int id = all_components.at(item_selected).component_id;
    qDebug() << u8"选中的元件id: " << id << endl;
    if (data_manager.delete_Component_By_Id(id))
    {
        all_components.removeAt(item_selected);
        ui.all_Data_Table_Widget->removeRow(this->item_selected);

    }
}
void Component_Library::show_all_components()
{
    all_components = data_manager.get_All_Components();
    ui.all_Data_Table_Widget->clearContents();
    ui.all_Data_Table_Widget->setRowCount(all_components.length());
    ui.all_Data_Table_Widget->setIconSize(QSize(80, 80));

    for (int i = 0; i < all_components.length(); i++)
    {
        //label用来显示图片
        QLabel *label = new QLabel();
        label->setPixmap(all_components.at(i).component_image);
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

        ui.all_Data_Table_Widget->setCellWidget(i, 0, label);

        //使用来显示主视图的，下面同理
        ui.all_Data_Table_Widget->setItem(i, 1, new QTableWidgetItem(all_components.at(i).front_view));
        ui.all_Data_Table_Widget->item(i, 1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

        ui.all_Data_Table_Widget->setItem(i, 2, new QTableWidgetItem(all_components.at(i).top_view));
        ui.all_Data_Table_Widget->item(i, 2)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

        ui.all_Data_Table_Widget->setItem(i, 3, new QTableWidgetItem(all_components.at(i).side_view));
        ui.all_Data_Table_Widget->item(i, 3)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
}

Component_Library::~Component_Library()
{
    delete add_component_dialog;
}
