#ifndef PROTAGONIST_HH
#define PROTAGONIST_HH

#include "Interface/characterif.hh"

#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Protagonist : public QGraphicsPixmapItem, public CharacterIF
{
public:
    Protagonist();
    virtual ~Protagonist();

    bool initArt();

    // CharacterIF functions:
    virtual void accelerateX();
    virtual void accelerateY();
    void setHitpoints( int Points );
    unsigned int getHitpoints();
    virtual void gravity();

    void keyPressEvent(QKeyEvent *Event);

private:

};

#endif // PROTAGONIST_HH
