#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "user.h"
#include <QList>

class DBManager
{
public:
    DBManager();
    static int login(User *user);//登录
    static bool updateInfo(User *user);//修改用户信息
    static bool addUser(User *user);
    static bool deleteUser(User *user);
    //static QList getAllUsers();
};

#endif // DBMANAGER_H
