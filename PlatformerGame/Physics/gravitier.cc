#include "gravitier.hh"
#include "Interface/characterif.hh"

#include <QList>
#include <QGraphicsItem>


void physics::gravitier(QGraphicsScene *Scene)
{
    QList<QGraphicsItem*> itemList;
    while( true )
    {
        itemList = Scene->items();

        for( auto item : itemList )
        {
            if ( CharacterIF * tmpChar = dynamic_cast<CharacterIF*>( item ) )
            {

            }
        }
    }
}
