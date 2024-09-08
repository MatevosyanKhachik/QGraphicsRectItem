#ifndef MYBOARD_H
#define MYBOARD_H
#include <QGraphicsRectItem>
#include <QRectF>
#include <QMouseEvent>
#include <QKeyEvent>

class MyBoard : public QObject, public QGraphicsRectItem
{
public:
    MyBoard();
public:
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    QRectF boundingRect() const override;
   // virtual void keyPressEvent(QKeyEvent* event) override;
    QRectF rect;
};

#endif // MYBOARD_H
