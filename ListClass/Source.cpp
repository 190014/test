#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	
	//int Cnt = 6;	//�v�f��
	MyClass List;	//�N���X�̐錾�H
	List.Initialize();//�����l�̌Ăяo��
	List.OutputAddress();//�o��

	cout << endl;

	List.AddDeta(4);//�����͒ǉ��������f�[�^ 4��ǉ�
	List.OutputAddress();//���݂̗v�f���������o��

	cout << endl;

	List.AddDeta(10);//�����͒ǉ��������f�[�^ 10��ǉ�
	List.OutputAddress();//���݂̗v�f���������o��

	cout << endl;

	List.DeleteAddress(7);
	List.OutputAddress();

	return 0;
}