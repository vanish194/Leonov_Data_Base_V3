#include "mytablemodel.h"

MyTableModel::MyTableModel(QObject *parent)
    : QSqlTableModel{parent}
{

}

QString MyTableModel::getmnemonicsId()
{return mnemonicsId;}

QString MyTableModel::getmnemonic()
{return mnemonic;}

QString MyTableModel::getunit()
{return unit;}

QString MyTableModel::getdescription()
{return description;}

QString MyTableModel::gettypedeviceId()
{return typedeviceId;}

QString MyTableModel::getparentMnemonicId()
{return parentMnemonicId;}

void MyTableModel::setmnemonicsId(QString t)
{ mnemonicsId=t;}

void MyTableModel::setmnemonic(QString t)
{ mnemonic=t;}

void MyTableModel::setunit(QString t)
{ unit=t;}

void MyTableModel::setdescription(QString t)
{ description=t;}

void MyTableModel::settypedeviceId(QString t)
{ typedeviceId=t;}

void MyTableModel::setparentMnemonicId(QString t)
{ parentMnemonicId=t;}


