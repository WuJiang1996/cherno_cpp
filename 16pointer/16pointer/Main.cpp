#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	//ʹ��new�ڶ��ϴ����ڴ�
	char* buffer = new char[8]; //����һ��8λ���ַ��������ѵ�ַ���ظ�buffer,bufferָ���ַ�����Ŀ�ͷ
	memset(buffer,0, 8);   //��ָ�����ڴ���������

	char** ptr = &buffer; //ָ���ָ��
	delete[] buffer;

	//����Ĵ�������ջ���洴���ڴ�
	//int var = 8;
	////void* ptr = &var; //��Ҫ������ָ�뱣���ֻ�ǵ�ַ���ѣ���ָ����ʲô�����޹�
	//int* ptr = &var;
	//*ptr = 10;   //��������ָ�룬����ֱ���޸�ԭ�ڴ����ݡ�
	//LOG(var);
	////double* ptr = (double*)&var;
	////void* ptr = nullptr; //�����ͣ��ڴ��ַ��0����ָ�룬���ܶ�����д���κζ���
	std::cin.get();
}