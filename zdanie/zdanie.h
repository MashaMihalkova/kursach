#include <iostream>
#include <string>
using namespace std;
class Zdanie
{
public:
	virtual void info() = 0;
	virtual ~Zdanie(){}

};

class panel :public Zdanie
{
public:
	void info(){
		cout << "it is panel!\n"; //<-- ���������� �� ����� ��� �����������
	}

};
class kotedj :public Zdanie
{
public:
	void info(){
		cout << "it is kotedj!\n"; //<-- ���������� �� ����� ��� �����������
	}
};
class kirpich :public Zdanie
{
public:
	void info(){
		cout << "it is kirpich!\n"; //<-- ���������� �� ����� ��� �����������
	}
};
class kirpich_monolit :public Zdanie
{
public:
	void info(){
		cout << "it is kirpich_monolit!\n"; //<-- ���������� �� ����� ��� �����������
	}
};
