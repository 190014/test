#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	
	//int Cnt = 6;	//要素数
	MyClass List;	//クラスの宣言？
	List.Initialize();//初期値の呼び出し
	List.OutputAddress();//出力

	cout << endl;

	List.AddDeta(4);//引数は追加したいデータ 4を追加
	List.OutputAddress();//現在の要素数分だけ出す

	cout << endl;

	List.AddDeta(10);//引数は追加したいデータ 10を追加
	List.OutputAddress();//現在の要素数分だけ出す

	cout << endl;

	List.DeleteAddress(7);
	List.OutputAddress();

	return 0;
}