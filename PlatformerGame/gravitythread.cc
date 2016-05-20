#include "gravitythread.hh"

#include <memory>

#include <QGraphicsScene>
#include <QTimer>

GravityThread::GravityThread(QGraphicsScene *Scene)
{
    scene_ = Scene;
    gravityTimer_.reset( new QTimer );
}

void GravityThread::run()
{

    this->exec();
}
