#include "datastorage.h"

datastorage::datastorage() {}
QString const datastorage::getmnemonicsId()
{return mnemonicsId;}

QString const datastorage::getmnemonic()
{return mnemonic;}

QString const datastorage::getunit()
{return unit;}

QString const datastorage::getdescription()
{return description;}

QString const datastorage::gettypedeviceId()
{return typedeviceId;}

QString const datastorage::getparentMnemonicId()
{return parentMnemonicId;}

void datastorage::setmnemonicsId(const QString&  t)
{ mnemonicsId=t;}

void datastorage::setmnemonic(const QString&  t)
{ mnemonic=t;}

void datastorage::setunit(const QString&  t)
{ unit=t;}

void datastorage::setdescription(const QString&  t)
{ description=t;}

void datastorage::settypedeviceId(const QString&  t)
{ typedeviceId=t;}

void datastorage::setparentMnemonicId(const QString&  t)
{ parentMnemonicId=t;}
