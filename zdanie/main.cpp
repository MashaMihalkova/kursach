#include <iostream>
#include <string>
#include "factory.h"

int main(){
	panelFactory panel;         //���������� ��� ������� �������
	kotedjFactory kotedj;
	kirpichFactory kirpich;
	kirpich_monolitFactory kirpich_monolit;


	Factory *ptr1 = &panel;  //��������� �� ������� ������ �����
	Factory *ptr2 = &kotedj;
	Factory *ptr3 = &kirpich;
	Factory *ptr4 = &kirpich_monolit;

	///////////////////////////
	Zdanie *ObjectNature1 = foo(ptr1); //������� ���������
	Zdanie *ObjectNature2 = foo(ptr2); //������� ��������
	Zdanie *ObjectNature3 = foo(ptr3); //������� ��������
	Zdanie *ObjectNature4 = foo(ptr4); //������� ��������

	ObjectNature1->info(); //������ ����������. �� ����, � ������ info ������� ����� �� �����.
	ObjectNature2->info();
	ObjectNature3->info();
	ObjectNature4->info();

	delete ObjectNature1; delete ObjectNature2; //��������� ������
	delete ObjectNature3; delete ObjectNature4;

}