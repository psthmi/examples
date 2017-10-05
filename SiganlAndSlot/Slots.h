#ifndef Slots_H
#define Slots_H

#include <QObject>
#include <iostream>


class Slots : public QObject
{
    Q_OBJECT
public:
    explicit Slots(QObject *parent = nullptr);

public slots:
    void onHeightChanged(int value)
    {
        std::cout << "Printing change of Value from Signal class as " << value << std::endl;
    }
};

#endif // Slots_H
