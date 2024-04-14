#ifndef EVENTS_H
#define EVENTS_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QWidget>
#include <QMimeData>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>

class Events
{
public:
    Events();
};

class Custom_View : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Custom_View(QWidget *parent);
    void loadImage(const QString &filename); // Добавляем новую функцию для загрузки изображения
protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);

private:
    QGraphicsScene *scene;
};

#endif // EVENTS_H
