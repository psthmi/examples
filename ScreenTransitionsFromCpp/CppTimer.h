#ifndef CPPTIMER_H
#define CPPTIMER_H

#include <QObject>
#include <QQuickItem>

class CppTimer : public QObject
{
    Q_OBJECT
public:
    explicit CppTimer(QObject *parent = nullptr);
    void setFirstScreenRootItem(QQuickItem* item);

signals:

public slots:
    void onTimerExpired();

private:
    QQuickItem* mFirstScreenRootItem;
};

#endif // CPPTIMER_H
