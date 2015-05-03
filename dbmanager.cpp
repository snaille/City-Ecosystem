#include "dbmanager.h"
//定义一些杖举或宏，用于返回状态
//某些操作需检查权限，检查功能放在哪需考虑
DBManager::DBManager()
{
}
//登录@@@@@@@@@@待实现
int DBManager::login(User *user)
{
    return 0;
}
//修改@@@@@@@@@@待实现
bool DBManager::updateInfo(User *user)
{
    return true;
}
//添加@@@@@@@@@@待实现
bool DBManager::addUser(User *user)
{
    return true;
}
//删除@@@@@@@@@@待实现
bool DBManager::deleteUser(User *user)
{
    return true;
}
