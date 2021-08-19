#pragma once      //预处理器命令，在编译之前被处理掉，作用是只包含这个头文件一次

//除了使用prama once来监督头文件之外，也可以使用下面的方法来监督，两种作用都是一样的
//下面的意思是如果_LOG_H没有被定义过，就定义_LOG_H，如果定义过了就跳过该代码段
#ifndef _LOG_H
#define _LOG_H

void InitLog();
void Log(const char* message);

#endif