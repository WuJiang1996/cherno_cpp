//链接的目的是找到每个函数和符号在哪里，并把他们连接起来
//编译阶段每个文件被编译成一个目标文件，它们之间没有关联，所以需要链接
//一个完整的项目是必须要有main函数的，也就是整个程序的入口点，如果不提供，直接build，会报一个LINK错误
//程序入口点不一定非要是main函数，在链接器里面可以设置具体的entey point函数