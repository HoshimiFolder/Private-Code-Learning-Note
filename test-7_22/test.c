//#define _CRT_SECURE_NO_WARNINGS// 取消scanf和printf的安全警告
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
//计算机单位
//bit-比特位
//byte-字节，1byte=8bit
//kb=千字节,1kb=1024byte
//mb=兆字节,1mb=1024kb
//gb=千兆字节,1gb=1024mb
//tb=太字节,1tb=1024gb
//pb=拍字节,1pb=1024tb
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	printf("age=%d, price=%.2f\n", age, price);
//    return 0;
//
//}
//int b = 20;//b为全局变量，int b=20在{}外部
//int a = 100;//定义全局变量a=100
//
//int main()
//{
//	int a = 10;
//	//{}内部定义的变量为局部变量
//	//int a = 100;(这里不能对a重复定义)
//	printf("a=%d\n", a);
//
//	return 0;
//}
//全局变量与局部变量可以相同，优先使用局部变量，上述代码优先使用{}内部int a=10;
//最好不要将全局变量与局部变量写成一样的

//写一个代码，计算两个整数的和
//int main()
//{
//	int num1 = 0;//初始化num1
//	int num2 = 0;//初始化mun2
//	
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);//scanf是一个输入函数，需要知道变量的的内存地址才能对其修改
//	//%d %d为两个整形，表示要求输入一个十进制整数
//	//&num1,&num2中，num为变量，&num则是对变量取其内存地址
//	
//	//求和
//	int sum = num1 + num2;//int sum:创建sum
//	//输出结果
//	printf("%d\n", sum);
//
//	return 0;
//}
//上述代码会出错,在源文件第一行输入#define _CRT_SECURE_NO_WARNINGS用来取消scanf与printf的安全警告
//scanf-s函数是VS编译器自己提供的函数，非标准C提供的函数，只有VS编译器认识，其他编译器不认识，运用通用性的环境，尽量使用scanf函数
//默认处理#define _CRT_SECURE_NO_WARNINGS:在VS安装路径下安装newc++file.cpp
//在VS工程中创建新的.C或者.cpp文件的时候，都是拷贝newc++file.cpp这个文件

//变量的作用域：这个名字的可使用范围
// 1、局部变量
// 局部变量的作用域是变量所在的局部范围
// 2、全局变量
//变量的生命周期
//局部变量的生命周期是从定义开始到{}结束
//int main()
//{
//	{
//		int a = 10;//局部变量a的作用域开始
//		printf("a=%d\n", a);
//	}//作用域结束，则局部变量a的生命周期结束
//	return 0;
//}
////全局变量的生命周期是从定义开始到程序结束
////如外部定义int a=100;
//int b = 100;//创建全局变量b=100
//在add.c中定义了全局变量a=10，这里不能重复定义全局变量a=100

//int a = 10;//全局变量的作用域是整个源文件,全局变量的生命周期是整个程序运行期间
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();//调用test函数
//	int a = 100; 
//	{
//		int a = 10;//a所在的局部范围是这里的{}内部，{}这部分就是变量a的作用域
//			printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//缺少全局变量a，要声明来自外部的符号
//extern int a; //声明全局变量a来自外部,a取自其他源文件（add.c)
////全局变量的作用域是整个工程（源文件）
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();//调用test函数
//	int a = 100;
//	{
//		int a = 10;//a所在的局部范围是这里的{}内部，{}这部分就是变量a的作用域
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}