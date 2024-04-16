#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <QString>
class datastorage
{
public:
    datastorage();
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

#endif // DATASTORAGE_H
