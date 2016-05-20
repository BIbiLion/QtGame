#ifndef GRAVITIER_HH
#define GRAVITIER_HH


#include <QSharedPointer>
#include <QObject>
#include <QGraphicsScene>
#include <QTimer>

class Gravitier : public QObject
{
    Q_OBJECT
public:
    Gravitier( QGraphicsScene * Scene );

public slots:
    void makeGravity();

private:
    QGraphicsScene * scene_;
    QSharedPointer<QTimer> gravityTimer_;
};

namespace Physpace
{
    void gravitier( QGraphicsScene * Scene );
}


#endif // GRAVITIER_HH
