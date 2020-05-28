#include <QtWidgets>
#include "Circle.h"
#include "MainView.h"

Circle::Circle(MainView* mainView)
    :mv(mainView)
{
    setFlag(QGraphicsItem::ItemIsMovable);
    setZValue(-1);
}


QRectF Circle::boundingRect() const
{
    return QRectF(-20, -20, 40, 40);
}



void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::darkCyan);
    painter->drawEllipse(-19, -19, 38, 38);
}



void Circle::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    QGraphicsItem::mousePressEvent(event);
}



void Circle::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(Qt::ArrowCursor);
    QGraphicsItem::mouseReleaseEvent(event);
}
