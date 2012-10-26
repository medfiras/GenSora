#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QString>
#include <iostream>
#include "user.h"

class DataBase
{
public:
	DataBase(QString = " ");	
	void setQuery(const QString);
	void exec();
	int exec(int);
	QString exec(std::string);

private:
	QSqlDatabase db;
	QString request;


};
#endif
