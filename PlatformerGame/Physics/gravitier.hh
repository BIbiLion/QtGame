#ifndef GRAVITIER_HH
#define GRAVITIER_HH

#include <QObject>
#include <QGraphicsScene>

class Gravitier : public QObject
{
    Q_OBJECT
public:
    explicit Gravitier( QGraphicsScene * Scene, QObject *parent = 0);

signals:

public slots:
    void gravity();

private:
    QGraphicsScene * scene_;
};

#endif // GRAVITIER_HH
