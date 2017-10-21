#ifndef CPPBUTTON_H
#define CPPBUTTON_H


#include <QObject>
#include <QVariant>
#include <QQuickItem>


class CppButton : public QObject
{
    Q_OBJECT
public:
    explicit CppButton(QObject *parent = nullptr);
    void setFirstScreen(QQuickItem* rootItem);

signals:

public slots:
    void onPressed();
    void onReleased();
    void onEntered();
    void onExited();
    void onButtonStateChanged(QVariant value);

private:
    QQuickItem* mFirstScreenRootItem;
};

#endif // CPPBUTTON_H
