#include "Physics/floorcontactbox.hh"

#include <QRectF>

void FloorContactBox::setPosAndWidth(const QPointF &ParentPos, const QRectF &Rect)
{
    setRect( ParentPos.x() + 1, ParentPos.y() + Rect.height() ,
             Rect.width() - 2 , 1 );
}

void FloorContactBox::move(const int &XSpeed, const int &YSpeed)
{
    setX( x() + XSpeed );
    setY( y() + YSpeed );
}
