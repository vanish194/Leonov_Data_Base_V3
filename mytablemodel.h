#ifndef MYTABLEMODEL_H
#define MYTABLEMODEL_H

#include <QAbstractTableModel>
#include <QObject>
#include <QSqlTableModel>
#include <QProperty>
#include <QSqlRelationalTableModel>

class MyTableModel :public QSqlRelationalTableModel
{
    Q_OBJECT

public:


    explicit MyTableModel(QObject *parent = nullptr);
    //Row data

};

#endif // MYTABLEMODEL_H
