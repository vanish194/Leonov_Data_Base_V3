#ifndef MYTABLEMODEL_H
#define MYTABLEMODEL_H

#include <QAbstractTableModel>
#include <QObject>
#include <QSqlTableModel>
#include <QProperty>

class MyTableModel :public QSqlTableModel
{
    Q_OBJECT

public:


    explicit MyTableModel(QObject *parent = nullptr);
    //Row data

};

#endif // MYTABLEMODEL_H
