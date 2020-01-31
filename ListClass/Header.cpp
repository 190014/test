#include"Header.h"
#include <iostream>

//�f�[�^�̏�����
void MyClass::Initialize() {
	for (int i = 0; i < Cnt; i++) {
		Num[i] = i * 2 + 1;
		if (i == Cnt - 1) {
			Next[i] = NULL;
		}
		else {
			Next[i] = &(Num[i + 1]);
		}
	}
}

//�f�[�^�̒ǉ� m�͒ǉ��������f�[�^
void MyClass::AddDeta(int m) {
	Num[Cnt] = m;
	for (int i = 0; i < Cnt; i++) {
		if (Num[i] == m - 1) {
			Next[i] = &(Num[Cnt]);
			Next[Cnt] = &(Num[i + 1]);
			Cnt++;
			break;
		}
	}
}

void MyClass::DeleteAddress(int n) {
	for (int i = 0; i < Cnt; i++) {
		if (*Next[i] == n) {
			for (int j = 0; j < Cnt; j++) {
				if (Num[j] == n) {
					Next[i] = Next[j];
					Next[j] = NULL;			//���̃A�h���X��NULL�ɕύX�B�i�m�F�p�j
					}
					break;
				}
			}
			break;
		}
	}

void MyClass::OutputAddress() {
	for (int i = 0; i < Cnt; i++) {
		std::cout << Num[i] << "\t" << &Num[i] << "\t" << Next[i] << std::endl;
	}
}