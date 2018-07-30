#include "stdafx.h"
#include "Component.h"


Component::Component(int component_id, QByteArray component_image, QString front_view, QString top_view, QString side_view)
    :component_id{ component_id },front_view {front_view}, top_view{top_view},side_view{side_view}
{
    this->component_image.loadFromData(component_image);
}


Component::~Component()
{
}
