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
		cout << "it is panel!\n"; //<-- Информация на экран для наглядности
	}

};
class kotedj :public Zdanie
{
public:
	void info(){
		cout << "it is kotedj!\n"; //<-- Информация на экран для наглядности
	}
};
class kirpich :public Zdanie
{
public:
	void info(){
		cout << "it is kirpich!\n"; //<-- Информация на экран для наглядности
	}
};
class kirpich_monolit :public Zdanie
{
public:
	void info(){
		cout << "it is kirpich_monolit!\n"; //<-- Информация на экран для наглядности
	}
};
