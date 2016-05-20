#include "Actors/protagonist.hh"
#include "Interface/characterif.hh"

#include <QGraphicsScene>
#include <QKeyEvent>
#include <QObject>
#include <QDebug>

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
    speed_x_ = 0;
    speed_y_ = 0;

    footCollision_.setPosAndWidth( pos(), boundingRect(), scene() );

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
    qDebug() << Points;
}

unsigned int Protagonist::getHitpoints() const
{
    return 0;
}

void Protagonist::gravity()
{
    //qDebug() << "Protagonist::gravity()";
    if( speed_y_ < 10 )
        speed_y_ += 2;
}

void Protagonist::move()
{
    setX( x() + speed_x_ );
    if( y() < scene()->height() -20 )
        setY( y() + speed_y_ );
}

void Protagonist::keyPressEvent( QKeyEvent * Event )
{
    if( Event->key() == Qt::Key_Up )
    {
        speed_y_ = -20;
    }
    else if( Event->key() == Qt::Key_Down )
    {

    }
    else if( Event->key() == Qt::Key_Left )
    {
        if ( speed_x_ > -10)
            speed_x_ -= 2;
    }
    else if( Event->key() == Qt::Key_Right )
    {
        if ( speed_x_ < 10)
            speed_x_ += 2;
    }
}
