#include<iostream>


//int main()
//{
//	int** a2d = new int*[5];
//	for (int i = 0; i < 5; i++)
//		a2d[i] = new int[5];
//
//	for (int x = 0; x < 5; x++)
//	{
//		for (int y = 0; y < 5; y++)
//		{
//			a2d[x][y] = 2;
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//		delete[] a2d[i];
//	delete[] a2d;
//
//	//这种其实也是二维数组，并且赋值比上面那种方法要快很多
//	int* array = new int[5 * 5];
//	for (int y = 0; y < 5; y++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			array[x + y * 5] = 2;
//		}
//	}
//
//	std::cin.get();
//}
