#ifndef FLOORCONTACTBOX_HH
#define FLOORCONTACTBOX_HH

#include <QRectF>
#include <QGraphicsRectItem>
#include <QPointF>

class FloorContactBox : public QGraphicsRectItem
{
public:

    ///
    /// \brief FloorContactBox
    /// Default constructor.
    /// Serves no purpose besides
    /// initialization.
    ///
    FloorContactBox( ){}

    ///
    /// \brief FloorContactBox
    /// Copy constructor.
    ///
    /// \param Other
    /// The instance from which this one is copied.
    ///
    FloorContactBox( const FloorContactBox & Other );

    ///
    /// \brief FloorContactBox
    /// Creates a collisionbox at the feet/bottom of the parent item.
    ///
    /// \param ParentPos
    /// The position of the parent item.
    ///
    FloorContactBox(const QPointF & ParentPos, const QRectF &Rect );

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

private:

};

#endif // FLOORCONTACTBOX_HH
