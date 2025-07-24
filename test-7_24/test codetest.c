//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//C语言数据类型
//char short int long long long float double
//自定义的数据类型
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
//	printf("BC6-小飞机");
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
//在线OJ
//1.IO型：所有代码由自己完成和实现输入、计算、输出
//2.接口型：只需要完成一个函数，假设其他需要的数据都是准备好的
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
//	int r = (-8 + 22) * a - 10 + c / 2;//C语言中，乘法是*，除法是/，加法是+，减法是-。
//	printf("%d\n", r);
//	return 0;
//}
//字符串的结束标志是\0，
//0-数字0
//'0'-字符0-ASCII码是48
//'\0'-字符-ASCII码是0
//EOF-end of file-文件结束符(文件结束标志），值是-1

//int main()
//{
//	int arr[10];//10个元素
//	int arr2[] = { 10 };//arr2数组有1个元素（默认只有一个元素10）
//	return 0;
//}
 
//int main()
//{
//	//char arr[] = { 'b','i','t' };//[b i t][????????]，strlen求的是随机值(因为没有'\0'结束符)
//	//char arr[8] = { 'b','i','t' };//不完全初始化，剩余部分默认初始化为'0'
//	char arr[4] = { 'b','i','t'};
//	printf("%d\n", strlen(arr));//随机值
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n为常变量
//	int arr[n] = { 0 };//n得是常量
//	return 0;
//}
//C99标准之前，数组大小都是用常量或者常量表达式来指定
//int arr2[10];//ok
//int arr3[4 + 6];//[常量表达式】，ok
////C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的
//int m = 100;
//int arr4[m];
//但是int m = 100;
//int arr4[m] = { 0 };//error，不能初始化
//VS对C99标准的支持不完全，变长数组在VS中不支持

//int main()
//{
//	char arr[14] = "HoshimiFolder";
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//if函数
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

//MAX函数
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
//	printf("请输入文本");
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