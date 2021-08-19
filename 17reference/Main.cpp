#include<iostream>

#define LOG(x) std::cout << x <<std::endl

void Increment0(int value)
{
	value++;
}

void Increment1(int* value)  //ͨ�����û���ָ�������ĸı����
{
	(*value) ++;
}

void Increment2(int& value)  //ͨ�����û���ָ�������ĸı����
{
	value++;
}
int main()
{
	int a = 5;
	int b = 8;


	//int* ref = &a; //�����&��ȡַ
	int& ref = a;  //���������ã�ע���������ú�ȡַ.�����ֳƱ���������ref����a�ı���
	ref = 2;
	ref = b;  //����������ʱ�򣬱���Ҫ������и�ֵ�� int& ref; �������Ǵ����

	//a = 8, b = 8

	LOG(a);  //2��ref����a,ֻ��a�ı���

	Increment0(a);  
	LOG(a);

	Increment1(&a);  //���ﴫ��a�ĵ�ַ
	LOG(a);

	Increment2(a);  //���ﴫ��a�ĵ�ַ
	LOG(a);

	std::cin.get();
}