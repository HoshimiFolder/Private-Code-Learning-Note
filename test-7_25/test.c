//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//�ؼ���typedef �������ͣ����Ϊ����������
//�����ӵ����Ͷ���ɼ򵥵�����
/*
typedef unsigned int uint;//��unsigned int������Ϊuint
typedef struct Node//��struct������ΪNode
{
	int data;
	struct Node* next;
};
int main()
{
	unsigned int num = 0;
	uint num2 = 1;//uint=unsigned int
	return 0;
}
*/
//�ؼ���static��̬
//1.���ξֲ�����->��̬�ֲ�����
//(1)static ���ξֲ�������ʱ�򣬾ֲ���������������ʱ����������
// �����ϣ�static ���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ��
//2.����ȫ�ֱ���->��̬ȫ�ֱ���
//3.���κ���->��̬����
//ջ�����ֲ�����
//����
//��̬������̬�������������ʱ�����٣�����static���α���ʱ���Ὣ�������뾲̬�����������ڱ�Ϊ������������
//�洢λ�õĸı�Ӱ���˱�������������
//��static���ξֲ�����
/*
void test()//viod������Ҫ�κη��أ���int �ڲ�����return x;)
{
	static int a = 1;//static���ξֲ�����a����ʱa��ʹ���˾ֲ�������Ҳ�������٣�����ѭ��ʹ�õ�aʱa�ͱ���������
	//��static���α����󣬽�a�����˾�̬����֮��ÿһ��ѭ�����˴�ʱ��Ҳ�������´���a=1��
	a++;//��ʱ���2 3 4 5 6 7 8 9 10 11
	//int a = 1;//�����ֲ�����a=1�����������ǵ�ǰ�����ڲ���printf֮������}a����ʧ��
	//a++;//a+1=2����ʹ��a=1����a+1=2
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}//ѭ��10��,���10��2
	
	return 0;
}
*/
//static ����ȫ�ֱ���,�Ὣ���ⲿ�������Ա�Ϊ�ڲ��������ԣ���ʱ����Դ�ļ��޷����������εı���
//ȫ�ֱ��������ⲿ�������ԣ���extern�����������ӣ�-->��ִ�г���
//�����ⲿ���ţ�����Դ�ļ�Add.c��
/*
extern int g_val;//��extern�����ⲿ����(Add.c�е�int g_val=2022;��
int main()
{
	printf("%d\n", g_val);
	//printf("%d\n", HoshimiFolder);//��Add.c�У�����static������HoshimiFolder,�����ⲿ�������Ա�����ڲ��������ԣ����ﲻ����
	return 0;
}
*/
//��static����ȫ�ֱ���ʱ�����������������������̣�����Դ�ļ�������extern���������ã���С����ǰԴ�ļ�

//static ���κ��������ֲ�������Ϊȫ�ֺ�������ȫ�ֺ�����Ϊ��ǰԴ�ļ����õĺ���
/*
extern int Add(int x, int y);//�����ⲿ����Add(Add.c)�еĺ��������к��������ⲿ��������
//���Add������static����Add���������ڴ��޷�����Add��������ΪAdd.c��static��Add������Ϊ���ڲ���������
int main()
{
	int a = 10;
	int b = 20;
	
	int z = Add(a, b);
	printf("%d\n", z);
	
	return 0;
}
*/

//register-�Ĵ���
//�����ϵĴ洢�豸��
//�Ĵ��������ɵ�CPU�ϣ�(8mb)
//���ٻ���(cache)(64mb)
//�ڴ�(32g)
//Ӳ��(1t)
//�ϱߵ��ٶ�Ҫ�죬���ռ�С����۸ߣ��±ߵĿռ����۵�
/*
int main()
{
	//�Ĵ�������
	register int num = 3;//���飺3����ڼĴ�����

	return 0;
}
*/

//#define ���峣���ͺ�
//#define �����ʶ������
/*
#define NUM 100
int main()
{
	printf("%d\n", NUM);//��ʱNUM�ǳ���
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };
	
	return 0;
}
*/
//#define �����
/*
#define ADD(x,y) x+y//ADD:������(x,y)��Ĳ��� x+y���壨��׼����Ҫ((x)+(y))
int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);//��a��b�ֱ��滻ΪADD�е�x��y,�ٽ��м��㣨�뺯�������𣬵��Ǳ����Ϲ���û��̫������
	printf("%d", c);
	return 0;
}
*/
//����(x,y)��Ĳ����������������͵�