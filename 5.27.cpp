#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;//int储存4个字节00000000000000000000000000000000
//	int b = ~a;//b是有符号的整型。~按二进制位取反得到11111111111111111111111111111111，符号位为-1计算机系统会将其识别为某一负数的补码，若要输出这个负数，我们就要进行补码回推原码的工作
//	printf("%d\n", b);//回推原码得到10000000000000000000000000000001即这个负数为-1
//	return 0;
//}
//int main()
//{
//  int c =(int)3.14
//	int a = 10;
//	int b = a++;//后置++：先把a的值赋给b，a自己再增加1，若此处改为前置++则先把a+1变为11，b也变为11。
//	printf("a=%d b=%d\n", a, b);//a=11 b=10
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b?a:b);
//	printf("%d\n", max);
//	return 0;
//}
//typedef unsigned int unit_32;
//int main()
//{
//	unsigned int unm1 = 0;
//	unit_32 num2 = 0;//这两个变量的类型是一样的
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}