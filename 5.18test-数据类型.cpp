#include <stdio.h>
//�������͡����ַ�
int main()
{
	char ch = 'A';
		printf("%c\n", ch);// %cΪ��ӡ�ַ���ʽ������  \n����
		int age = 20;
		printf("%d\n", age);//%d��ӡ����ʮ���Ƹ�ʽ����
//%��Сд��ĸ��ӡ���ͣ����ã�c���ַ���d������ʮ���ơ�f����������С������p����ַ��x��ʮ������

//��ѯ�����������͵��ڴ��С
		printf("%d\n", sizeof(char));//1
		printf("%d\n", sizeof(short));//2 
		printf("%d\n", sizeof(int));//4  �Ա�short������Ա�ʾ2�ĵ�16�η�����int���Ա�ʾ2��32�η���
		printf("%d\n", sizeof(long)); //4/8
		printf("%d\n", sizeof(long long));//8
		printf("%d\n", sizeof(float));//4
		printf("%d\n", sizeof(double));//8
		//�õ��Ĵ𰸶������ǵ��ֽڴ�С
		//�ֽڣ�byte�������أ�bit�����
		// �ֻص������Ӳ��ͨ���֪ʶ���������Ӧ1��0�źţ��������Ҫ������һ��1���źž���Ҫһ�����صĿռ䣬���ǹ涨�˸�����λΪһ���ֽڣ�֮���1024Ϊ����������Ǻ������֪ʶ��
		
		return 0;
}