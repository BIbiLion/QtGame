#include "Physics/floorcontactbox.hh"

#include <QRectF>

FloorContactBox::FloorContactBox(const FloorContactBox &Other):
{
    setX( Other.x() );
    setY( Other.y() );
}

FloorContactBox::FloorContactBox(const QPointF &ParentPos, const QRectF &Rect)
{
    setPos( ParentPos );
    setY( y() + Rect.height() );
}

void FloorContactBox::move(const int &XSpeed, const int &YSpeed)
{
    setX( x() + XSpeed );
    setY( y() + YSpeed );
}
