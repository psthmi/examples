#ifndef SIGNAL_H
#define SIGNAL_H

#include <QObject>
#include <iostream>


class Signals : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int height READ getHeight WRITE setHeight NOTIFY heightChanged)
public:
    explicit Signals(QObject *parent = nullptr);

    int getHeight()
    {
        return m_height;
    }

    void setHeight(int value)
    {
        std::cout << "Emitting Signal from First Object" << std::endl;
        m_height = value;
        emit heightChanged(value);
    }

signals:
    void heightChanged(int value);

private:
    int m_height;
};

#endif // SIGNAL_H
