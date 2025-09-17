#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int a = 10;//全局变量的作用域是整个源文件,全局变量的生命周期是整个程序运行期间
//常量：描述不变的量
//C语言中常量分为以下几种
//1.字面常量：直接写在代码中的常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量
//int main ()
//{   
//    30;//字面常量
//    3.14;//浮点型常量
//    'w';//字符常量
//    int a = 20;
//    a = 50;
//    printf("%d\n", a);
//
//    return 0;
//}
//int main()
//{
 //   30;//字面常量
 //   3.14;//浮点型常量
 //   'w';//字符常量
	//const int a = 20;//const修饰的常变量a=20,此时a有常属性，不可更改
    //在c语言中，const修饰的a本质是变量，但是不能被更改，有常量的属性
    //证明const修饰的a是变量
 //   const int n = 10;//即使const修饰n，n在这里也是变量，称为常变量
	//int arr[n] = { 0 };//arr[常量]，即使前面已有const修饰的n，n在这里也是变量，int arr程序报错
 //   
 //   printf("%d\n", a);
 //   return 0;
 //}

//#define定义的标识符常量
//#define MAX 100 //定义一个标识符常量MAX=100,此时MAX有常属性，不可更改
//#define SRT "HoshimiFolder"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", SRT);//%s表示字符串
//	//MAX=200; //error
//	return 0;
//}
//
// 枚举常量
enum Color//枚举类型
{
	//枚举常量
	Red,    //0
	Green,  //1
	Blue    //2，均为常量
};
int main()
{
	//三原色
	//Red Green Blue
	int num = 10;//整形创建num=10
	enum Color c = Red;//创建枚举变量c，枚举类型Color，枚举常量Red，创建变量本质向内存申请空间，存储值
	return 0;
  }
//性别
enum Sex
{
	MALE,
	FEMALE
};
//台灯光照强度

enum Light
{
	dark,//不亮
	littlelight,//微亮
	light,//正常亮
	lighter,//较亮
	lightest//非常亮
};
