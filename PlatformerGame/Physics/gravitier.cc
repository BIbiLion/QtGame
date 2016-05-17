#include "gravitier.hh"
#include "Interface/characterif.hh"

#include <memory>

#include <QList>
#include <QGraphicsItem>
#include <QTimer>

void physics::gravitier(QGraphicsScene *Scene)
{
    QList<QGraphicsItem*> itemList;

    // TODO:
    // this function needs a means for itself to end.
    // Some kind of a signal or a flag.

    Gravitier gravitier{ Scene };

    gravitier.gravity();
}

Gravitier::Gravitier(QGraphicsScene *Scene)
{
    scene_ = Scene;

    gravityTimer_.reset( new QTimer );

}

void Gravitier::gravity()
{

    // TODO:
    // this function needs a means for itself to end.
    // Some kind of a signal or a flag.

    QObject::connect( gravityTimer_.get() , SIGNAL( timeout() ),
                      this,                 SLOT( makeGravity() ) );
    gravityTimer_->start( 50 );

}

void Gravitier::makeGravity()
{
    QList<QGraphicsItem*> itemList = scene_->items();

    for( auto item : itemList )
    {
        // Make everybody fall
        if ( CharacterIF * tmpChar = dynamic_cast<CharacterIF*>( item ) )
        {
            tmpChar->gravity();
        }
    }
}
