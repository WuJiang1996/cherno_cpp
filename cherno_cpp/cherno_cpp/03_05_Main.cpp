#include <iostream>    
//在#之后的语句都是预处理语句，编译器先处理预处理语句，在编译之前就被处理了
//include 是要包含一个文件，会把找到文件拷贝到现在文件内，一般叫做头文件

void Log(const char* message)；  //函数声明


//每个cpp程序都要有main函数，是程序的入口，运行程序时从这里开始运行
//main函数不一定要返回值，如果不给返回值，默认返回0，这条规则只对main函数适用
//其他函数如果需要有返回值就一定要给返回值，不然会报错
int main() {
	// << 是一个函数    <<等同于.print()
	//endl该行结束，跳到下一行
	//std::cout << "Hello World!" << std::endl; 

	Log("Hello World!");
	//cin.get()等待按下enter键执行下一行程序
	std::cin.get();
}
//过程是编译链接，每个cpp文件都会被单独编译，在vs中的cpp会被编译成.obj中间文件，然后链接器会把所有编译好的中间文件链接起来形成一个exe可执行文件
//单独编译快捷键ctrl+F7
//看错误时候别看error list（只有部分报错信息），要看output（输出）窗口




