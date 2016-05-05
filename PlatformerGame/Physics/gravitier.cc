#include "gravitier.hh"
#include "Interface/characterif.hh"

#include <QList>
#include <QGraphicsItem>

Gravitier::Gravitier(QGraphicsScene *Scene, QObject *parent)
{
    scene_ = Scene;
}

void Gravitier::gravity()
{
    QList<QGraphicsItem*> list{ scene_->items() };

    for ( auto element : list )
    {
        if( CharacterIF * tmp = dynamic_cast<CharacterIF*>(element) )
        {
            // TODO: Here goes the call to the gravity function of each graphicsobject
            //tmp->gravity();
        }
    }
}
