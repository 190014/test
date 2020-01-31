#include"Header.h"
#include <iostream>

//データの初期化
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

//データの追加 mは追加したいデータ
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
					Next[j] = NULL;			//次のアドレスをNULLに変更。（確認用）
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