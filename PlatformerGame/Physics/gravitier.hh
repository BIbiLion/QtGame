#ifndef GRAVITIER_HH
#define GRAVITIER_HH

#include <memory>

#include <QObject>
#include <QGraphicsScene>
#include <QTimer>

class Gravitier : public QObject
{
    Q_OBJECT
public:
    Gravitier( QGraphicsScene * Scene );
    void gravity();

public slots:
    void makeGravity();

private:
    QGraphicsScene * scene_;
    std::shared_ptr<QTimer> gravityTimer_;
};

namespace physics
{
    void gravitier( QGraphicsScene * Scene );
}


#endif // GRAVITIER_HH
