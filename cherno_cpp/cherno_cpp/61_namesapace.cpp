#include<iostream>
#include<string>
#include<algorithm>

//namespace������Ҫ�Ǳ���������ͻ

//��ò�Ҫ���ļ���ͷʹ��namespace ������ͷ�ļ���ʹ��

namespace apple {
	namespace function {
		void print(const std::string& text)
		{
			std::cout << text << std::endl;
		}
	}
	void print_again() {}
}

namespace orange {
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}


//int main()
//{
//	//��namespace���÷�Χ������main������
//	//using apple::print;
//	using namespace apple;
//	using namespace function;
//
//	namespace a = apple::function;
//	//aֻ���ڸ�������Χ��ʹ�ã������޷�ʹ��
//	apple::function::print("hello");
//	apple::print_again();
//
//	std::cin.get();
//}