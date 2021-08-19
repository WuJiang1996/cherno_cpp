//inclde有时候用"",有时候用<>?  尖括号用于编译器包含路径，引号可以用于所有情况。引号用于包含相对于当前文件的文件。（其实这里还不是特别清楚）
#include "Log.h"
#include <iostream> //iostream是一个文件，只是没有扩展名，区别c++与c的标准库
//#include <stdlib.h> //c中的头文件


//#ifndef _LOG_H
//#define _LOG_H
//
//void InitLog();
//void Log(const char* message);
//
//#endif
//
////可以看到，复制了之后第二次就会变成灰色，里面的代码段也不会被使用
//#ifndef _LOG_H
//#define _LOG_H
//
//void InitLog();
//void Log(const char* message);
//
//#endif

void Log(const char* message) {
	std::cout << message << std::endl;
}

void InitLog()
{
	Log("Iinitializing Log");
}