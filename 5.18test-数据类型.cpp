#include <stdio.h>
//数据类型——字符
int main()
{
	char ch = 'A';
		printf("%c\n", ch);// %c为打印字符格式的数据  \n换行
		int age = 20;
		printf("%d\n", age);//%d打印整型十进制格式数据
//%加小写字母打印类型（少用）c：字符、d：整型十进制、f：浮点数（小数）、p：地址、x：十六进制

//查询各个数据类型的内存大小
		printf("%d\n", sizeof(char));//1
		printf("%d\n", sizeof(short));//2 
		printf("%d\n", sizeof(int));//4  对比short，其可以表示2的的16次方，而int可以表示2的32次方。
		printf("%d\n", sizeof(long)); //4/8
		printf("%d\n", sizeof(long long));//8
		printf("%d\n", sizeof(float));//4
		printf("%d\n", sizeof(double));//8
		//得到的答案都是它们的字节大小
		//字节（byte）、比特（bit）概念：
		// 又回到计算机硬件通电的知识，正负电对应1、0信号，而计算机要储存如一个1的信号就需要一个比特的空间，我们规定八个比特位为一个字节，之后的1024为换算就是我们很清楚的知识了
		
		return 0;
}