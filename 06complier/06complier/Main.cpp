#include<iostream>

void Log(const char* message);

//������Ϊÿһ��cpp�ļ��γ�һ��obj�ļ���cpp�ļ��Ƿ��뵥Ԫ
//��������ȡԴ�ļ������һ��obj�ļ���obj�ļ��ǰ������������ļ��Լ����Ƕ���ĳ������ݣ�
//����֮ǰ�и�Ԥ����׶�  #define #include ��
//#if  #endif  Ҳ��Ԥ��������

int main() {
	//std::cout << "Hello World!" << std::endl;
	Log("Hello World!");
	std::cin.get();
}