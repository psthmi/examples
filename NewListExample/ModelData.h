#ifndef MODELDATA_H
#define MODELDATA_H


#include <QAbstractListModel>

struct ButtonData
{
    QString name;
    QString url;
    int height;
    int width;
};

class ModelData : public QAbstractItemModel
{
    public:
        ModelData();

        virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const
        {
           ButtonData buttonData = data.at(index);

           if (role == 1)
           {
               return buttonData.name;
           }
           else if (role == 2)
           {
               return buttonData.url
           }
           else if (role == 3)
           {
               return buttonData.height;
           }
           else if (role == 4)
           {
               return buttonData.width;
           }

        }



        void addEntry(ButtonData newButton)
        {
            beginInsertRows(QModelIndex(), 0, 0);
            data.append(newButton);
            endInsertRows();

        }

        virtual QHash<int,QByteArray> roleNames() const
        {
            QHash<int, QByteArray> roles;
            roles[1] = "nameOfTheButton";
            roles[2] = "urlOfTheButton";
            roles[3] = "height";
            roles[4] = "width";
            return roles;
        }

    private:
        QList<ButtonData> data;
};


#endif // MODELDATA_H
