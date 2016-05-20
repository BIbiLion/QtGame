#include "Actors/protagonist.hh"
#include "Interface/characterif.hh"

#include <QGraphicsScene>
#include <QKeyEvent>
#include <QObject>

Protagonist::Protagonist()
{
    init();
}

Protagonist::~Protagonist()
{

}

bool
Protagonist::init()
{
    initArt();
    initPhysics();
    return true;
}

bool Protagonist::initArt()
{
    setPixmap( QPixmap( ":/graphics/Resources/chibiProt.png" ) );
    setScale( 0.1 );

    return true;
}

bool Protagonist::initGravity()
{
    gravityTimer = new QTimer;

    QObject::connect( gravityTimer, SIGNAL( timeout() ),
                      this, SLOT( gravitySlot() ) );
    gravityTimer->start(50);

    return true;
}

bool Protagonist::initPhysics()
{
    footCollision_.setPosAndWidth( pos(), boundingRect() );

    return true;
}

void Protagonist::accelerateX()
{

}

void Protagonist::accelerateY()
{

}

void Protagonist::setHitpoints(int Points)
{

}

unsigned int Protagonist::getHitpoints() const
{
    return 0;
}

void Protagonist::gravity()
{

    if( y() < scene()->height() - 40 )
        setY( y() + 2 );
}

void Protagonist::keyPressEvent( QKeyEvent * Event )
{
    if( Event->key() == Qt::Key_Up )
    {
        setY( 20 );
    }
    else if( Event->key() == Qt::Key_Down )
    {

    }
    else if( Event->key() == Qt::Key_Left )
    {
        setX( x() - 5 );
    }
    else if( Event->key() == Qt::Key_Right )
    {
        setX( x() + 5 );
    }
}

void Protagonist::gravitySlot()
{
    gravity();
}
