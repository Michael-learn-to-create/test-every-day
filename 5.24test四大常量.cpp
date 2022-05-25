#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define max 10
//枚举常量-enum
enum Sex
{
	Male,
	Female
};
int main()
{
	int num = 4;//在此行最前面加上const之后变为const修饰的常变量就会报错。
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);

	const int n = 10;
	//int arr[n] = { 0 };
	//#define定义的标识符常量
	int arr[max] = { 10 };
	//枚举常量 应用： enum Sex s = Female 此时定义s为Female
	printf("%d\n", Male);//0
	printf("%d\n", Female);//1
	return 0;
}