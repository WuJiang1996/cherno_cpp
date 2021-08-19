#include<iostream>
#include<string>
#include<algorithm>

//namespace作用主要是避免命名冲突

//最好不要在文件开头使用namespace 或者在头文件中使用

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
//	//把namespace作用范围限制在main函数中
//	//using apple::print;
//	using namespace apple;
//	using namespace function;
//
//	namespace a = apple::function;
//	//a只能在该作用域范围内使用，超过无法使用
//	apple::function::print("hello");
//	apple::print_again();
//
//	std::cin.get();
//}