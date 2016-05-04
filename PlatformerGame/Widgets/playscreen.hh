#ifndef PLAYSCREEN_HH
#define PLAYSCREEN_HH

#include "Actors/protagonist.hh"

#include <memory>
#include <vector>
#include <QWidget>
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

    // Initialization methods.
    bool initGraphics();
    bool initHero();
    bool initStage();

private:
    Ui::PlayScreen *ui;

    std::shared_ptr<QGraphicsScene> scene_;
    std::shared_ptr<QGraphicsView> view_;

    std::shared_ptr<Protagonist> hero_;

    std::vector<void(*)()> gravity;
};

#endif // PLAYSCREEN_HH
