#ifndef FLOORCONTACTBOX_HH
#define FLOORCONTACTBOX_HH

#include <QRectF>
#include <QGraphicsRectItem>
#include <QPointF>
#include <QObject>

class FloorContactBox : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:

    ///
    /// \brief FloorContactBox
    /// Default constructor.
    /// Serves no purpose besides
    /// initialization.
    ///
    FloorContactBox( ){}
    ~FloorContactBox( ){}

    ///
    /// \brief setPosAndWidth
    /// \param ParentPos
    /// \param Rect
    /// \param Scene
    ///
    void setPosAndWidth(const QPointF & ParentPos, const QRectF &Rect  , QGraphicsScene *Scene);

    ///
    /// \brief move
    /// Moves the box along with its parent
    ///
    /// \param XSpeed
    /// Parent's speed on the x-axis.
    ///
    /// \param YSpeed
    /// Parent's speed on the y-axis.
    ///
    void move( const int & XSpeed, const int & YSpeed );

    void sendCollisionSignal();

signals:
    void collided();

private:

};

#endif // FLOORCONTACTBOX_HH
