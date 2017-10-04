#ifndef RECTANGLEPROPERTIES_H
#define RECTANGLEPROPERTIES_H

#include <QObject>
#include <iostream>


using namespace  std;


class RectangleProperties : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int height READ getHeight WRITE setHeight NOTIFY heightChanged)
    Q_PROPERTY(int width MEMBER m_width NOTIFY widthChanged)
public:
    explicit RectangleProperties(QObject* = nullptr)
    {
        m_height = 40;
        m_width = 40;
    }

public slots:
    int getHeight()
    {return m_height;}
    void setHeight(int value){m_height = value; emit heightChanged(value); }
    int getWidth()
    {return m_width;}
    void setWidth(int value){{m_width = value; emit widthChanged(value);}}

signals:
    void heightChanged(int height);
    void widthChanged(int width);

private:
    int m_height;
    int m_width;
};

#endif // RECTANGLEPROPERTIES_H
