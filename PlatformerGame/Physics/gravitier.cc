#include "gravitier.hh"
#include "Interface/characterif.hh"

#include <QList>
#include <QGraphicsItem>


void physics::gravitier(QGraphicsScene *Scene)
{
    QList<QGraphicsItem*> itemList;

    // TODO:
    // this function needs a means for itself to end.
    // Some kind of a signal or a flag.

    while( true )
    {
        itemList = Scene->items();

        for( auto item : itemList )
        {
            // Make everybody fall
            if ( CharacterIF * tmpChar = dynamic_cast<CharacterIF*>( item ) )
            {
                tmpChar->gravity();
            }
        }
    }
}
