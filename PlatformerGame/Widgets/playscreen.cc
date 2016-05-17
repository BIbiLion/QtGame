#include "Widgets/playscreen.hh"
#include "ui_playscreen.h"

#include "Actors/protagonist.hh"
#include "Obstacles/horizontalbrickwall.hh"
#include "Obstacles/verticalbrickwall.hh"
#include "Physics/gravitier.hh"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <qtconcurrentrun.h>

PlayScreen::PlayScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayScreen)
{

    ui->setupUi(this);

    // Let's initialize the graphics.
    initGraphics();

    // Now set the stage ;)
    initStage();

    // Here we initialize the hero.
    initHero();

    // Show the game in the widget.
    ui->layout->addWidget( view_.get() );

    QFuture<void> physics = QtConcurrent::run( physics::gravitier, scene_.get() );
}

PlayScreen::~PlayScreen()
{
    delete ui;
}

bool
PlayScreen::initGraphics()
{
    // Window initialization.
    this->setWindowIcon( QIcon( ":/graphics/Resources/grumpy.png" ) );
    this->setWindowTitle( "Platformer game" );
    this->move( 20, 20 );

    scene_.reset( new QGraphicsScene );
    view_.reset( new QGraphicsView( scene_.get() ) );

    // Scene initialization.
    scene_->setSceneRect( 50, 50, 800, 600 );
    scene_->setBackgroundBrush( { {0,200,255} } );

    // View initialization.
    //view_->setSceneRect( scene_->sceneRect() );
    view_->setMinimumHeight( scene_->height() + 10 );
    view_->setMinimumWidth( scene_->width() + 10 );


    return true;
}

bool
PlayScreen::initHero()
{
    hero_.reset( new Protagonist );
    //hero_->setPos( 100, 100 );
    hero_->setPos( 100, scene_->height() / 2 );

    hero_->setFlag( QGraphicsItem::ItemIsFocusable );
    hero_->setFocus();

    scene_->addItem( hero_.get() );

    return true;
}

bool
PlayScreen::initStage()
{
    HorizontalBrickwall * floor = new HorizontalBrickwall;
    floor->setPos( 50, scene_->height() - 100 );
    scene_->addItem( floor );

    VerticalBrickwall * wall = new VerticalBrickwall;
    wall->setPos( 400, scene_->height() - 50 );
    scene_->addItem( wall );

    return true;
}
