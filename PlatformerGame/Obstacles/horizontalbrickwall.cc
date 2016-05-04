#include "Obstacles/horizontalbrickwall.hh"

HorizontalBrickwall::HorizontalBrickwall()
{
    initGraphics();
}

void HorizontalBrickwall::initGraphics()
{
    setPixmap( QPixmap(":/graphics/Resources/brickwall.jpg") );
}
