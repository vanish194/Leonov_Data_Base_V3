#include "mytablemodel.h"

MyTableModel::MyTableModel(QObject *parent)
    : QSqlTableModel{parent}
{

}

QString const MyTableModel::getmnemonicsId()
{return mnemonicsId;}

QString const MyTableModel::getmnemonic()
{return mnemonic;}

QString const MyTableModel::getunit()
{return unit;}

QString const MyTableModel::getdescription()
{return description;}

QString const MyTableModel::gettypedeviceId()
{return typedeviceId;}

QString const MyTableModel::getparentMnemonicId()
{return parentMnemonicId;}

void MyTableModel::setmnemonicsId(const QString&  t)
{ mnemonicsId=t;}

void MyTableModel::setmnemonic(const QString&  t)
{ mnemonic=t;}

void MyTableModel::setunit(const QString&  t)
{ unit=t;}

void MyTableModel::setdescription(const QString&  t)
{ description=t;}

void MyTableModel::settypedeviceId(const QString&  t)
{ typedeviceId=t;}

void MyTableModel::setparentMnemonicId(const QString&  t)
{ parentMnemonicId=t;}


