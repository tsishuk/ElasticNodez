#ifndef MAINVIEW_H
#define MAINVIEW_H
#include <QtWidgets>
#include <QGraphicsView>

class MainView : public QGraphicsView
{
public:
    MainView(QWidget* parent = nullptr);
};

#endif // MAINVIEW_H
