//#define _CRT_SECURE_NO_WARNINGS// ȡ��scanf��printf�İ�ȫ����
//
//#include <stdio.h>
//int main()
//{
//	printf("Hello, World!\n");
//	printf("%d\n", 400);
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//  sizeof(char)=8bit
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(short));
//	return 0;
//}
//�������λ
//bit-����λ
//byte-�ֽڣ�1byte=8bit
//kb=ǧ�ֽ�,1kb=1024byte
//mb=���ֽ�,1mb=1024kb
//gb=ǧ���ֽ�,1gb=1024mb
//tb=̫�ֽ�,1tb=1024gb
//pb=���ֽ�,1pb=1024tb
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	printf("age=%d, price=%.2f\n", age, price);
//    return 0;
//
//}
//int b = 20;//bΪȫ�ֱ�����int b=20��{}�ⲿ
//int a = 100;//����ȫ�ֱ���a=100
//
//int main()
//{
//	int a = 10;
//	//{}�ڲ�����ı���Ϊ�ֲ�����
//	//int a = 100;(���ﲻ�ܶ�a�ظ�����)
//	printf("a=%d\n", a);
//
//	return 0;
//}
//ȫ�ֱ�����ֲ�����������ͬ������ʹ�þֲ�������������������ʹ��{}�ڲ�int a=10;
//��ò�Ҫ��ȫ�ֱ�����ֲ�����д��һ����

//дһ�����룬�������������ĺ�
//int main()
//{
//	int num1 = 0;//��ʼ��num1
//	int num2 = 0;//��ʼ��mun2
//	
//	//������������
//	scanf("%d %d", &num1, &num2);//scanf��һ�����뺯������Ҫ֪�������ĵ��ڴ��ַ���ܶ����޸�
//	//%d %dΪ�������Σ���ʾҪ������һ��ʮ��������
//	//&num1,&num2�У�numΪ������&num���ǶԱ���ȡ���ڴ��ַ
//	
//	//���
//	int sum = num1 + num2;//int sum:����sum
//	//������
//	printf("%d\n", sum);
//
//	return 0;
//}
//������������,��Դ�ļ���һ������#define _CRT_SECURE_NO_WARNINGS����ȡ��scanf��printf�İ�ȫ����
//scanf-s������VS�������Լ��ṩ�ĺ������Ǳ�׼C�ṩ�ĺ�����ֻ��VS��������ʶ����������������ʶ������ͨ���ԵĻ���������ʹ��scanf����
//Ĭ�ϴ���#define _CRT_SECURE_NO_WARNINGS:��VS��װ·���°�װnewc++file.cpp
//��VS�����д����µ�.C����.cpp�ļ���ʱ�򣬶��ǿ���newc++file.cpp����ļ�

//������������������ֵĿ�ʹ�÷�Χ
// 1���ֲ�����
// �ֲ��������������Ǳ������ڵľֲ���Χ
// 2��ȫ�ֱ���
//��������������
//�ֲ����������������ǴӶ��忪ʼ��{}����
//int main()
//{
//	{
//		int a = 10;//�ֲ�����a��������ʼ
//		printf("a=%d\n", a);
//	}//�������������ֲ�����a���������ڽ���
//	return 0;
//}
////ȫ�ֱ��������������ǴӶ��忪ʼ���������
////���ⲿ����int a=100;
//int b = 100;//����ȫ�ֱ���b=100
//��add.c�ж�����ȫ�ֱ���a=10�����ﲻ���ظ�����ȫ�ֱ���a=100

//int a = 10;//ȫ�ֱ�����������������Դ�ļ�,ȫ�ֱ����������������������������ڼ�
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();//����test����
//	int a = 100; 
//	{
//		int a = 10;//a���ڵľֲ���Χ�������{}�ڲ���{}�ⲿ�־��Ǳ���a��������
//			printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//ȱ��ȫ�ֱ���a��Ҫ���������ⲿ�ķ���
//extern int a; //����ȫ�ֱ���a�����ⲿ,aȡ������Դ�ļ���add.c)
////ȫ�ֱ��������������������̣�Դ�ļ���
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();//����test����
//	int a = 100;
//	{
//		int a = 10;//a���ڵľֲ���Χ�������{}�ڲ���{}�ⲿ�־��Ǳ���a��������
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}