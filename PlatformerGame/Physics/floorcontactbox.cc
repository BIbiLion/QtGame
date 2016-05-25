#include "Physics/floorcontactbox.hh"

#include <QDebug>
#include <QRectF>
#include <QList>
#include <QGraphicsScene>

void FloorContactBox::setPosAndWidth(const QPointF &ParentPos, const QRectF &Rect,
                                     QGraphicsScene * Scene)
{
    if (Scene)
        Scene->addItem( this );
    //qDebug() << "FloorContact Set to character.";
    setRect( ParentPos.x() + 1, ParentPos.y() + Rect.height() ,
             Rect.width() - 2 , 1 );
}

void FloorContactBox::move(const int &XSpeed, const int &YSpeed)
{
    setX( x() + XSpeed );
    setY( y() + YSpeed );
}

void FloorContactBox::sendCollisionSignal()
{
    emit collided();
}
