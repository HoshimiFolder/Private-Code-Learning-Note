#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int a = 10;//ȫ�ֱ�����������������Դ�ļ�,ȫ�ֱ����������������������������ڼ�
//�����������������
//C�����г�����Ϊ���¼���
//1.���泣����ֱ��д�ڴ����еĳ���
//2.const���εĳ�����
//3.#define����ı�ʶ������
//4.ö�ٳ���
//int main ()
//{   
//    30;//���泣��
//    3.14;//�����ͳ���
//    'w';//�ַ�����
//    int a = 20;
//    a = 50;
//    printf("%d\n", a);
//
//    return 0;
//}
//int main()
//{
 //   30;//���泣��
 //   3.14;//�����ͳ���
 //   'w';//�ַ�����
	//const int a = 20;//const���εĳ�����a=20,��ʱa�г����ԣ����ɸ���
    //��c�����У�const���ε�a�����Ǳ��������ǲ��ܱ����ģ��г���������
    //֤��const���ε�a�Ǳ���
 //   const int n = 10;//��ʹconst����n��n������Ҳ�Ǳ�������Ϊ������
	//int arr[n] = { 0 };//arr[����]����ʹǰ������const���ε�n��n������Ҳ�Ǳ�����int arr���򱨴�
 //   
 //   printf("%d\n", a);
 //   return 0;
 //}

//#define����ı�ʶ������
//#define MAX 100 //����һ����ʶ������MAX=100,��ʱMAX�г����ԣ����ɸ���
//#define SRT "HoshimiFolder"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", SRT);//%s��ʾ�ַ���
//	//MAX=200; //error
//	return 0;
//}
//
// ö�ٳ���
enum Color//ö������
{
	//ö�ٳ���
	Red,    //0
	Green,  //1
	Blue    //2����Ϊ����
};
int main()
{
	//��ԭɫ
	//Red Green Blue
	int num = 10;//���δ���num=10
	enum Color c = Red;//����ö�ٱ���c��ö������Color��ö�ٳ���Red�����������������ڴ�����ռ䣬�洢ֵ
	return 0;
  }
//�Ա�
enum Sex
{
	MALE,
	FEMALE
};
//̨�ƹ���ǿ��

enum Light
{
	dark,//����
	littlelight,//΢��
	light,//������
	lighter,//����
	lightest//�ǳ���
};
