#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//选择语句
//	int input = 0;
//	printf("加入C语言学习");
//	printf("你会好好学习嘛？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("Tsinghua University is waiting for you\n");
//	else
//		printf("get out!\n");
//	return 0;
//}

//int main()
//{
//	//循环语句
//	int line = 0;
//	printf("学习C语言\n");
//	while(line<20000)
//	{ 
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好大学\n");
//	return 0;
//}
//int add(int x, int y)
//{
//		int z = x + y;
//		return z;
//}
//int main()
//{
//	//函数
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	//printf("sum=%d\n", sum);//如果我们想在此基础上又算另外两个数a、b相加，又写这么几行就会很复杂
//	sum = add(num1, num2);
//	sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

////数组：一组相同类型元素的集合
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组。这10个数字放在一个叫arr的数组里面，第一个数字1的下标为0，2的下标为1，这样的语法顺序以此类推。
//	printf("%d\n", arr[4]);//得到的结果就是5，这就是用下标的方式访问元素。
//	//输出数组所有
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	char ch[20];//20个字符
//	return 0;
//}

//操作符
//算术操作符：+ - * / %（取模（余数）运算）
//移位操作符：左移操作符<<右移操作符>>（二进制序列移动）
//位操作符&按位与 |按位或 ^按位异或（逻辑电路的知识）
//赋值操作符：赋值= += -= *= /= &= ^= |= >>= <<=
int main()
{
	//移位操作符
	int a = 1;
	int b = a << 2;//（整型1占4个字节（见前面关于length的知识），即32个bit位。这将1往左移了两位）
	//a即为00000000000000000000000000000001
//a移位之后00000000000000000000000000000100 变为了4
	printf("%d\n", b);//得到4
	//位操作符
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);
	//a=011 b=101 逻辑电路的知识，与门只有两个同为1的之后才输出1，所以最终得到的结果就是001
	// 复合操作符：a=a+10简化为 a+=10
	//单目操作符 （接下来这个程序得注意一点运行别报错了）
	//C语言中取0为假，非0为真。!为逻辑反操作，我把84-87行注释掉，运行92行就会得到1，93行就会得到逻辑相反的0。
	printf("%d\n", a);
	printf("%d\n", !a);
	return 0;
}