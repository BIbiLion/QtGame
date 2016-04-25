#include "Actors/protagonist.hh"

Protagonist::Protagonist()
{

}

bool Protagonist::initArt()
{
    setPixmap( QPixmap( ":/graphics/Resources/chibiProt.png" ) );

    return true;
}
