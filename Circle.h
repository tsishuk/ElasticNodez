#ifndef CIRCLE_H
#define CIRCLE_H
#include <QtWidgets>

class MainView;

class Circle : public QGraphicsItem
{
public:
    Circle(MainView* mainView);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
   void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
   void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

private:
    MainView* mv;
};

#endif // CIRCLE_H
