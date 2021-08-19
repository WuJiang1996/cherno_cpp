#include<iostream>

void Log(const char* message);

//编译器为每一个cpp文件形成一个obj文件，cpp文件是翻译单元
//编译器获取源文件并输出一个obj文件（obj文件是包含集其代码的文件以及我们定义的常数数据）
//编译之前有个预处理阶段  #define #include 等
//#if  #endif  也是预处理命令

int main() {
	//std::cout << "Hello World!" << std::endl;
	Log("Hello World!");
	std::cin.get();
}