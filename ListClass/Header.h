#pragma once

class MyClass
{
public:
	void Initialize(/*int n*/);//������
	void AddDeta(/*int n,*/int m);//�f�[�^�̒ǉ�
	void DeleteAddress(int n);
	void OutputAddress(/*int n*/);
private:
	int Num[100];//�f�[�^
	int *Next[100];//���̃A�h���X
	int Cnt = 6;	//�v�f��
};