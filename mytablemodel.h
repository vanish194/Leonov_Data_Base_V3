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
    QString getmnemonicsId();

    QString getmnemonic();

    QString getunit();

    QString getdescription();

    QString gettypedeviceId();

    QString getparentMnemonicId();

    void setmnemonicsId(QString t);

    void setmnemonic(QString t);

    void setunit(QString t);

    void setdescription(QString t);

    void settypedeviceId(QString t);

    void setparentMnemonicId(QString t);
    QProperty <QString> mnemonicsId{""};
    QProperty <QString> mnemonic{""};
    QProperty <QString> unit{""};
    QProperty <QString> description{""};
    QProperty <QString> typedeviceId{""};
    QProperty <QString> parentMnemonicId{""};
signals:
    void mnemonicsIdChanged(QString t);
    void mnemonicChanged(QString t);
    void unitChanged(QString t);
    void descriptionChanged(QString t);
    void typedeviceIdChanged(QString t);
    void parentMnemonicIdChanged(QString t);

};

#endif // MYTABLEMODEL_H
