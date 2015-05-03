#include "user.h"

User::User()
{
    this->name = "";
    this->passwd = "";
}

User::User(QString name, QString passwd)
{
    this->name = name;
    this->passwd = passwd;
}
void User::setName(QString name)
{
    this->name = name;
}
QString User::getName()
{
    return name;
}
void User::setPasswd(QString passwd)
{
    this->passwd = passwd;
}
QString User::getPasswd()
{
    return passwd;
}
void User::clearPasswd()
{
    passwd.clear();
}
