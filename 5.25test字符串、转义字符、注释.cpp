#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	//char arr1[] = "abc";//由单引号引起的字符叫字符a，多个字符放到双引号内叫字符串
//	//char arr2[] = { 'a','b','c',0};
//	//printf("%s\n",arr1);
//	//printf("%s\n", arr2);
//	////输出结果一样了。实质说明，字符串"abc"内为'a','b','c','\0'，\0的值为0，其意义为字符串的结束标志。
//	////arr2一开始没有这样的结束标志，所以在输出abc之后还有一大堆随机生成的乱码，加上了\0之后就有了结束标志，但其不会算入字符。
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen: string length
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

int main()
{
	printf("%d\n",strlen("c:\test\32\test.c"));
	printf("%s\n", "\32");
	return 0;
}