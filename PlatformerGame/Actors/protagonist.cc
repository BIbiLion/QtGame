#include "Actors/protagonist.hh"

#include <QKeyEvent>

Protagonist::Protagonist()
{
    initArt();
}

bool Protagonist::initArt()
{
    setPixmap( QPixmap( ":/graphics/Resources/chibiProt.png" ) );
    setScale( 0.1 );

    return true;
}

void Protagonist::keyPressEvent( QKeyEvent * Event )
{
    if( Event->key() == Qt::Key_Up )
    {

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
