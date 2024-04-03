#include "mytablemodel.h"

MyTableModel::MyTableModel(QObject *parent)
    : QSqlTableModel{parent}
{

}

QString MyTableModel::getmnemonics_id()
{return mnemonics_id;}

QString MyTableModel::getmnemonic()
{return mnemonic;}

QString MyTableModel::getunit()
{return unit;}

QString MyTableModel::getdescription()
{return description;}

QString MyTableModel::gettypedevice_id()
{return typedevice_id;}

QString MyTableModel::getparent_mnemonic_id()
{return parent_mnemonic_id;}

void MyTableModel::setmnemonics_id(QString t)
{ mnemonics_id=t;}

void MyTableModel::setmnemonic(QString t)
{ mnemonic=t;}

void MyTableModel::setunit(QString t)
{ unit=t;}

void MyTableModel::setdescription(QString t)
{ description=t;}

void MyTableModel::settypedevice_id(QString t)
{ typedevice_id=t;}

void MyTableModel::setparent_mnemonic_id(QString t)
{ parent_mnemonic_id=t;}


