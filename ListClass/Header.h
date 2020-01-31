#pragma once

class MyClass
{
public:
	void Initialize(/*int n*/);//初期化
	void AddDeta(/*int n,*/int m);//データの追加
	void DeleteAddress(int n);
	void OutputAddress(/*int n*/);
private:
	int Num[100];//データ
	int *Next[100];//次のアドレス
	int Cnt = 6;	//要素数
};