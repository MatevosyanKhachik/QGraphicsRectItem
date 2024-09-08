#include "myboard.h"
#include <QPainter>
#include <QDebug>
#include <QCursor>
#include <mainwindow.h>

MyBoard::MyBoard()
    :rect(10,10,60,20)
{

}

void MyBoard::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(Qt::black));
    painter->drawRoundedRect(rect, 10, 10);
}

QRectF MyBoard::boundingRect() const
{
    return rect;
}
/*
void MyBoard::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left)
        this->moveBy(-16,0);
    else if(event->key() == Qt::Key_Right)
        this->moveBy(16,0);
}

*/
