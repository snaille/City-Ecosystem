#ifndef USER_H
#define USER_H

#include <QString>


class User
{
public:
    User();
    User(QString name, QString passwd);
    void setName(QString name);
    QString getName();
    void setPasswd(QString passwd);
    QString getPasswd();
    void clearPasswd();

private:
    QString name;
    QString passwd;
    /*other info*/

};

#endif // USER_H
