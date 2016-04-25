#ifndef PLAYSCREEN_HH
#define PLAYSCREEN_HH

#include <QWidget>
#include <memory>
#include <QGraphicsScene>
#include <QGraphicsView>

namespace Ui {
class PlayScreen;
}

class PlayScreen : public QWidget
{
    Q_OBJECT

public:
    explicit PlayScreen(QWidget *parent = 0);
    ~PlayScreen();

    bool initGraphics();

private:
    Ui::PlayScreen *ui;

    std::shared_ptr<QGraphicsScene> scene_;
    std::shared_ptr<QGraphicsView> view_;
};

#endif // PLAYSCREEN_HH
