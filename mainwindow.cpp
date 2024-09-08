#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <myboard.h>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,view(new QGraphicsView)
    ,scene(new QGraphicsScene(this))
    ,board(new MyBoard)
{
    ui->setupUi(this);
    view->setScene(scene);
    scene->addItem(board);
    setCentralWidget(view);
    board->setFlag(QGraphicsItem::ItemIsFocusable);
    board->setFocus();
}

MainWindow::~MainWindow()
{
    delete view;
    delete scene;
    delete board;
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{

}


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    setCursor(QCursor(Qt::ClosedHandCursor));

}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
   setCursor(QCursor(Qt::ArrowCursor));

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    board->mapToScene(event->pos());
}

