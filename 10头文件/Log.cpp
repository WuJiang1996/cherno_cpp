//inclde��ʱ����"",��ʱ����<>?  ���������ڱ���������·�������ſ�����������������������ڰ�������ڵ�ǰ�ļ����ļ�������ʵ���ﻹ�����ر������
#include "Log.h"
#include <iostream> //iostream��һ���ļ���ֻ��û����չ��������c++��c�ı�׼��
//#include <stdlib.h> //c�е�ͷ�ļ�


//#ifndef _LOG_H
//#define _LOG_H
//
//void InitLog();
//void Log(const char* message);
//
//#endif
//
////���Կ�����������֮��ڶ��ξͻ��ɻ�ɫ������Ĵ����Ҳ���ᱻʹ��
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