#include "gravitier.hh"
#include "Interface/characterif.hh"

#include <memory>

#include <QDebug>
#include <QList>
#include <QGraphicsItem>
#include <QTimer>

#include <QThread>

void physics::gravitier(QGraphicsScene *Scene)
{
    QList<QGraphicsItem*> itemList;

    // TODO:
    // this function needs a means for itself to end.
    // Some kind of a signal or a flag.

    Gravitier gravitier{ Scene };
    qDebug() << " Thread1: Gravitier initiated. " << gravitier.objectName();

    //gravitier.gravity();
    qDebug() << "Thread1: Gravitier.gravity finished. ";

    QTimer * timer = new QTimer;
    QObject::connect( timer , SIGNAL( timeout() ),
                          &gravitier,                 SLOT( makeGravity() ) );
    timer->start( 50 );
    qDebug() << "Thread1: Connected timer with gravitier. " << timer->isSingleShot();


    gravitier.makeGravity();
    //QThread::sleep( 2 );
    QThread::exec();
    for( int i = 0; i < 100; ++i )
    {
    }
    qDebug() << "Thread1: Entering loop.";
    while( true )    {    }
}

Gravitier::Gravitier(QGraphicsScene *Scene)
{
    scene_ = Scene;

    //gravityTimer_.reset( new QTimer );

    //QObject::connect( gravityTimer_.get() , SIGNAL( timeout() ),
                      //this,                 SLOT( makeGravity() ) );
}

void Gravitier::gravity()
{
    // TODO:
    // this function needs a means for itself to end.
    // Some kind of a signal or a flag.

    gravityTimer_->start( 50 );
    qDebug() << "Thread1: Should fall now.";
}

void Gravitier::makeGravity()
{
    qDebug() << "Thread1: Making gravity now.";

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
