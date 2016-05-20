#ifndef GRAVITYTHREAD_HH
#define GRAVITYTHREAD_HH

#include <memory>

#include <QThread>
#include <QGraphicsScene>
#include <QTimer>

class GravityThread : public QThread
{
public:
    GravityThread( QGraphicsScene * Scene );
    void run();
private:
    QGraphicsScene * scene_;
    std::shared_ptr<QTimer> gravityTimer_;
};

#endif // GRAVITYTHREAD_HH
