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
    QString getmnemonics_id();

    QString getmnemonic();

    QString getunit();

    QString getdescription();

    QString gettypedevice_id();

    QString getparent_mnemonic_id();

    void setmnemonics_id(QString t);

    void setmnemonic(QString t);

    void setunit(QString t);

    void setdescription(QString t);

    void settypedevice_id(QString t);

    void setparent_mnemonic_id(QString t);
    QProperty <QString> mnemonics_id{""};
    QProperty <QString> mnemonic{""};
    QProperty <QString> unit{""};
    QProperty <QString> description{""};
    QProperty <QString> typedevice_id{""};
    QProperty <QString> parent_mnemonic_id{""};
signals:
    void mnemonics_idChanged(QString t);
    void mnemonicChanged(QString t);
    void unitChanged(QString t);
    void descriptionChanged(QString t);
    void typedevice_idChanged(QString t);
    void parent_mnemonic_idChanged(QString t);

};

#endif // MYTABLEMODEL_H
