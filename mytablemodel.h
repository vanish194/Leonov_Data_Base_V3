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
    QString const getmnemonicsId();

    QString const getmnemonic();

    QString const getunit();

    QString const getdescription();

    QString const gettypedeviceId();

    QString const getparentMnemonicId();

    void setmnemonicsId(const QString& t);

    void setmnemonic(const QString&  t);

    void setunit(const QString&  t);

    void setdescription(const QString&  t);

    void settypedeviceId(const QString&  t);

    void setparentMnemonicId(const QString&  t);
    QString mnemonicsId{""};
    QString mnemonic{""};
    QString unit{""};
    QString description{""};
    QString typedeviceId{""};
    QString parentMnemonicId{""};
};

#endif // MYTABLEMODEL_H
