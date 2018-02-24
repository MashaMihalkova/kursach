
#include <iostream>
#include <string>
#include "zdanie.h"
class Factory
{
public:
	virtual Zdanie* Create() = 0; //������ ����������� ������� ����������, ��� � ������������ ����� ����� Create
	virtual ~Factory(){}  //����������� ����������

};

class panelFactory :public Factory
{
public:
	Zdanie* Create(){
		return new panel; //<-- ������ ������ ���� "�������"
	}
};
class kotedjFactory :public Factory
{

public:
	Zdanie* Create(){
		return new kotedj; //<-- ������ ������ ���� "�������"
	}

};
class kirpichFactory :public Factory
{

public:
	Zdanie* Create(){
		return new kirpich; //<-- ������ ������ ���� "�������"
	}
};
class kirpich_monolitFactory :public Factory
{

public:
	Zdanie* Create(){
		return new kirpich_monolit; //<-- ������ ������ ���� "�������"
	}
};
Zdanie* foo(Factory *value){
	return value->Create();
}
