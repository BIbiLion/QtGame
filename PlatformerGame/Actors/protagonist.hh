#ifndef PROTAGONIST_HH
#define PROTAGONIST_HH

#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Protagonist : public QGraphicsPixmapItem
{
public:
    Protagonist();

    bool initArt();

    void keyPressEvent(QKeyEvent *Event);

private:

};

#endif // PROTAGONIST_HH
