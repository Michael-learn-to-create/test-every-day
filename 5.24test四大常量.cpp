#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define max 10
//ö�ٳ���-enum
enum Sex
{
	Male,
	Female
};
int main()
{
	int num = 4;//�ڴ�����ǰ�����const֮���Ϊconst���εĳ������ͻᱨ��
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);

	const int n = 10;
	//int arr[n] = { 0 };
	//#define����ı�ʶ������
	int arr[max] = { 10 };
	//ö�ٳ��� Ӧ�ã� enum Sex s = Female ��ʱ����sΪFemale
	printf("%d\n", Male);//0
	printf("%d\n", Female);//1
	return 0;
}