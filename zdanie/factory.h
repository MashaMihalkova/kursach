
#include <iostream>
#include <string>
#include "zdanie.h"
class Factory
{
public:
	virtual Zdanie* Create() = 0; //Чистая виртуальная функция показывает, что в производстве будет метод Create
	virtual ~Factory(){}  //Виртуальный деструктор

};

class panelFactory :public Factory
{
public:
	Zdanie* Create(){
		return new panel; //<-- Создаём объект типа "Человек"
	}
};
class kotedjFactory :public Factory
{

public:
	Zdanie* Create(){
		return new kotedj; //<-- Создаём объект типа "Человек"
	}

};
class kirpichFactory :public Factory
{

public:
	Zdanie* Create(){
		return new kirpich; //<-- Создаём объект типа "Человек"
	}
};
class kirpich_monolitFactory :public Factory
{

public:
	Zdanie* Create(){
		return new kirpich_monolit; //<-- Создаём объект типа "Человек"
	}
};
Zdanie* foo(Factory *value){
	return value->Create();
}
