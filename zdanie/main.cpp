#include <iostream>
#include <string>
#include "factory.h"

int main(){
	panelFactory panel;         //Переменные для каждого подтипа
	kotedjFactory kotedj;
	kirpichFactory kirpich;
	kirpich_monolitFactory kirpich_monolit;


	Factory *ptr1 = &panel;  //Указатели на объекты нужных типов
	Factory *ptr2 = &kotedj;
	Factory *ptr3 = &kirpich;
	Factory *ptr4 = &kirpich_monolit;

	///////////////////////////
	Zdanie *ObjectNature1 = foo(ptr1); //Создали человечка
	Zdanie *ObjectNature2 = foo(ptr2); //Создали животное
	Zdanie *ObjectNature3 = foo(ptr3); //Создали животное
	Zdanie *ObjectNature4 = foo(ptr4); //Создали животное

	ObjectNature1->info(); //Вывели информацию. См выше, в методы info дописан вывод на экран.
	ObjectNature2->info();
	ObjectNature3->info();
	ObjectNature4->info();

	delete ObjectNature1; delete ObjectNature2; //Почистили память
	delete ObjectNature3; delete ObjectNature4;

}