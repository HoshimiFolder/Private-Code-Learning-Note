//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//C������������
//char short int long long long float double
//�Զ������������
//struct...
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	printf("BC6-С�ɻ�");
//	return 0;
//}
//int main()
//{
	//printf("     **     \n");
	//printf("     **     \n");
	//printf("************\n");
	//printf("************\n");
	//printf("    *  *    \n");
	//printf("    *  *    \n");
//	printf("     **     \n     **     \n************\n************\n    *  *    \n    *  *    \n");
//	return 0;
//}
//����OJ
//1.IO�ͣ����д������Լ���ɺ�ʵ�����롢���㡢���
//2.�ӿ��ͣ�ֻ��Ҫ���һ������������������Ҫ�����ݶ���׼���õ�
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
//int main()
//{
//	printf("I lost my phone");
//	return 0;
//}
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;//C�����У��˷���*��������/���ӷ���+��������-��
//	printf("%d\n", r);
//	return 0;
//}
//�ַ����Ľ�����־��\0��
//0-����0
//'0'-�ַ�0-ASCII����48
//'\0'-�ַ�-ASCII����0
//EOF-end of file-�ļ�������(�ļ�������־����ֵ��-1

//int main()
//{
//	int arr[10];//10��Ԫ��
//	int arr2[] = { 10 };//arr2������1��Ԫ�أ�Ĭ��ֻ��һ��Ԫ��10��
//	return 0;
//}
 
//int main()
//{
//	//char arr[] = { 'b','i','t' };//[b i t][????????]��strlen��������ֵ(��Ϊû��'\0'������)
//	//char arr[8] = { 'b','i','t' };//����ȫ��ʼ����ʣ�ಿ��Ĭ�ϳ�ʼ��Ϊ'0'
//	char arr[4] = { 'b','i','t'};
//	printf("%d\n", strlen(arr));//���ֵ
//	return 0;
//}

//int main()
//{
//	const int n = 10;//nΪ������
//	int arr[n] = { 0 };//n���ǳ���
//	return 0;
//}
//C99��׼֮ǰ�������С�����ó������߳������ʽ��ָ��
//int arr2[10];//ok
//int arr3[4 + 6];//[�������ʽ����ok
////C99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�С�Ǳ�������������ָ����ʽ�������ǲ��ܳ�ʼ����
//int m = 100;
//int arr4[m];
//����int m = 100;
//int arr4[m] = { 0 };//error�����ܳ�ʼ��
//VS��C99��׼��֧�ֲ���ȫ���䳤������VS�в�֧��

//int main()
//{
//	char arr[14] = "HoshimiFolder";
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//if����
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		printf("%d", b);
//	}
//	return 0;
//}

//MAX����
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//    else
//	    return y;
// }
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	int c = Max(a, b);
//	printf("%d", c);
//	return 0;

//int main()
//{
//	int x;
//	int y;
//	printf("�������ı�");
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x < 0)
//		y = 1;
//	else if(x==0)
//		y = 0;
//	printf("%d\n", y);
//	return 0;
//}