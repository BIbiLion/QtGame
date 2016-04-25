#include "Widgets/playscreen.hh"
#include "ui_playscreen.h"

#include <QGraphicsScene>
#include <QGraphicsView>
//#include <QtGlobal>

PlayScreen::PlayScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayScreen)
{
    ui->setupUi(this);

    // Let's initialize the graphics.
    initGraphics();

    // Show the game in the widget.
    ui->layout->addWidget( view_.get() );
}

PlayScreen::~PlayScreen()
{
    delete ui;
}

bool PlayScreen::initGraphics()
{
    this->setWindowIcon( QIcon( ":/graphics/Resources/grumpy.png" ) );
    this->setWindowTitle( "Platformer game" );

    scene_.reset( new QGraphicsScene );
    view_.reset( new QGraphicsView( scene_.get() ) );

    scene_->setSceneRect( 50, 50, 800, 600 );

    view_->setSceneRect( scene_->sceneRect() );


    return true;
}
