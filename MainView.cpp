#include "MainView.h"
#include "Circle.h"

MainView::MainView(QWidget* parent):
    QGraphicsView(parent)
{
    QGraphicsScene* scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(-200, -200, 400, 400);
    setScene(scene);
    // A lot of options ???
    setMinimumSize(400, 400);
    setWindowTitle("Elastic Nodezzz");


    Circle* c1 = new Circle(this);
    Circle* c2 = new Circle(this);
    scene->addItem(c1);
    scene->addItem(c2);
    c1->setPos(0, 0);
    c2->setPos(0, 50);
}
