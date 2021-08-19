#include <iostream>  //预处理（在编译之前就已经被执行了，编译器会先处理）#include , (#if,#endif), #define, #prama once

//vs快捷键：ctrl+F7只编译， F5编译运行

int main()
{
	//0.如何工作
	//源文件->编译器->二进制（库文件或者可以执行文件）
	//cpp文件都会被编译，但是头文件不会

	//08.变量（存储在内存，堆和栈）
	//不同数据类型之间的区别是创建变量时分配的内存大小
	////(unsigned) char, short, int, long, long long 1, 2, 4, 4, 8   //unsigned 无符号，只能为正 
	////float, double  4, 8  浮点型
	////bool 1位
	////sizeof  查看变量所占位数
	//float i = 5.5f;    //如果想要是float类型，一般在后面加一个f或F，不然就算给的float也会默认为double
	//int variable = 8;
	//std::cout << variable << std::endl;

	//09.函数：代码块，被设计来执行特定的任务functions，一般来说函数名用驼峰命名法
	//函数类型如果不是void，那就必须要有返回值，特例：main函数中可以不写return,其实编译器默认会是reuturn 0；
	//函数作用是为了避免重复粘贴复制代码，如果某一段代码经常要被重复调用，可以考虑写一个函数方便调用。当然，函数越多，会让代码运行越慢。
	//函数调用的数据存储在堆栈中，每次调用编译器会生成call指令，如果调用次数太多，代码运行更慢。
	//函数声明一般在头文件，定义在cpp文件中。

	//10.头文件
	//头文件用于声明某些函数，以便于include到cpp文件    #include
	//#pragma once    #是预处理命令，会在编译器之前完成，作用是防止头文件重复包含

	//11.在vs中调试代码debug，目的是找到代码中的bug，一般是断点，读取内存
	//断点：程序调试器将中断的点，然后可以看内存中发生了什么

	//12.c++中的条件和分支（if语句）
	//for (int i = 0; i < 5; i++)
	//{
	//	if (i > 2)
	//		continue; //跳出本次循环进行下一次循环
	//	std::cout << "hello world！" << std::endl;
	//	std::cout << i << std::endl;
	//}

	//13.Visual Studio的最佳设置
	//设置文件输出目录和中间文件目录
	//输出：$(SolutionDir)\bin\$(Platform)\$(Configuration)\
	//中间：$(SolutionDir)\bin\intermediates\$(Platform)\$(Configuration)\

	//14.C++循环（for 、while）
	//用于写代码时，需要多次执行相同的操作的时候
	/*for (int i = 0; i < 5; i++) {
		Log("Hello World");
	}

	Log("===================");

	int i = 0;
	while (i < 5)
	{
		Log("Hello World");
		i++;
	}
	Log("===================");
	do
	{
	
	}while(i < 5)
	*/
	//while和do while区别就是循环体是否会先执行一次

	//15.C++控制流语句
	//continue只能用于循环，跳过本次循环进入下一次循环
	//break主要用于循环，也可以用于switch，跳出循环
	//return用于跳出函数返回一个结果,可以用在代码中的任何地方

	//continue
	//for (int i = 0; i < 5; i++)
	//{
	//	if (i > 2)
	//		continue; //跳出本次循环进行下一次循环
	//		//break;
	//		//return 0;  
	//	std::cout << "hello world！" << std::endl;
	//	std::cout << i << std::endl;
	//}

	//16.C++指针
	//指针是一个保存内存地址的整数，是一个地址,是一个保存内存地址的变量

	//17.C++引用
	//引用是指针的伪装，引用必须是引用已经存在的变量，引用本身并不是新的变量，并不占用内存
	//没有真正的存储空间（和引用的对象是一起的）

	//18.C++类
	//类是把数据和功能组合在一起的一种方法

	//19.C++类与结构体对比
	//class   struct
	//唯一区别：类成员默认为private，struct成员默认为public
	//struct存在于c++原因是希望与c保持向后兼容性，c没有class，有struct 
	//一般不要在struct中使用继承，struct一般用于简单的数据声明和处理

	//20.如何写一个C++类
	//Log类error,warning,imformations

	//21.C++中的静态（static）
	//在类或者结构体之外的static，意味着你声明的static符号，链接将只是在内部，只对当前的cpp文件有效（可见）
	//在类或者结构体内部的static变量，意味着该变量将与类的所有实例共享内存，类中的静态方法也是这样子

	//22C++类和结构体中的静态（static）
	//类中的静态变量，意味着这个变量只有一个实例
	//类中的静态方法可以直接被调用，不需要通过类的实例，在静态方法内部，不能写引用到类实例的代码

	//23C++中的局部静态
	//变量生存期指的是变量实际存在的时间（一直到程序结束），作用域指的是我们可以访问变量的范围（在函数范围内可以访问）
	//函数作用域的static和类作用域的static没有太大区别
	
	//24C++枚举enum
	//命名值得方法，当你想用整数来表示某些状态或者某些数值时，非常有用


	std::cin.get();

}