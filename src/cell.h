#ifndef CELL_H
#define CELL_H

#include <QtSvg/QGraphicsSvgItem>

class Cell : public QGraphicsSvgItem
{
    Q_OBJECT
public:
    explicit Cell(QGraphicsItem *parent = 0);

    QRectF boundingRect () const;
    void paint ( QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0 );
    int type () const;

signals:

public slots:

};

#endif // CELL_H
