#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//山里灵活的C语言
//C语言提供了非常丰富的操作符，使得使用起来就比较灵活
//C语言操作符有以下几种

//算术操作符：+ - * / %，其中/是除法，%是取模（除法取商，模取余数）
//int main()
//{
//	int a = 7 / 2;//商3余1，输出3
//	printf("%d\n", a);
//	int b = 7 % 2;//商3余1，取模余数1
//	//除号两端都是整数得时候，执行的是整数除法，如果两端只要有一个浮点数，就执行浮点数的除法
//	//取模操作符两端必须都是整数，否则会报错，如：
//	//int b1=7.0%2.0;//error，不能对浮点数进行取模操作（表达式必须包含整形
//	//printf("%d\n", b1);//%d打印整数
//	printf("%d\n", b);
//	float c =7/2.0;//浮点数除法，输出3.5
//	printf("%f\n", c);//%f打印浮点数，%d打印整数
//	//%f打印默认打印6位小数，如果想要打印两位小数，可以使用%.2f，如：
//	float d = 9 / 2.1;
//	printf("%.2f\n", d);//%.2f中，.2表示打印两位小数
//	return 0;
//}

//移位操作符：<< >>，左移和右移（暂且不表，涉及二进制）

//位移操作符：& | ^ ~，按位与、按位或、按位异或、按位取反（暂且不表）

//赋值操作符：= += -= *= /= %=，赋值、加等于、减等于、乘等于、除等于、取模等于
//= 赋值操作符，表示将右边的值赋给左边的变量，如：
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	return 0;
//}
// += 操作符，表示将右边的值加到左边的变量上，如：
//int main()
//{
//	int a = 0;
//	a = a + 3;
//	a += 3;//等价于a = a + 3;
//	return 0;
//}
//同理，a-=3等价于a = a - 3;a*=3等价于a = a * 3;a/=3等价于a = a / 3;a%=3等价于a = a % 3;

//单目操作符-只有一个操作数的操作符
//单目操作符有以下几种：
// ！逻辑反操作
// C语言中，0表示假，非0表示真
/*int main()
{
	int flag = 0;//假
	if (!flag)//将flag取反，这里就是取1，取真
	{
		printf("哈？");
	}
	{
		printf("哈？");
	}
	return 0;
}*///输出“哈？”
//int main()
//{
//	int flag = 2;//真
//	if (!flag)//取假
//	{
//		printf("哈？");
//	}
//	return 0;
//}//不输出“哈？”

//a+b;+两边有a与b两个操作数,称为双目操作符
//- 负值：将负的取正，正的取负

//int main()
//{
//	int a = 10;
//	int b = -a; //将a的值取负，b的值为-10
//	printf("%d\n", b); //输出-10
//	return 0;
//}

//+ 正值,但是+a值不变，意义不大
//& 取地址，与指针有关（暂且不表）
//sizeof 单目操作符

//int main()
//{
//	//int a = 10;
//	//printf("%d\n", sizeof a );//a不是函数，可以不用加括号，但是函数的括号不能删去
//	//return 0;
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算整个数组的大小，单位是字节，结果是40
//	printf("%d\n", sizeof(arr[0]));//计算数组中一个元素的大小，单位是字节，结果是4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组的元素个数，结果是10
//	//计算数数组元素个数：总大小除以第一个元素的大小
//	return 0;
//}

//~ 对一个数的二进制按位取反（涉及二进制，暂且不表）
//-- 前置--，后置--

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，计算规则为先使用a的值，再++(a=a+1)
//	printf("%d\n", b);
//	printf("%d\n", a);//输出11
//	return 0;
//}

//int b=++a;//前置++，计算规则为先++(a=a+1)，再使用a的值
//同理--a则是先a=a-1,再使用a的值；a--则是先使用a的值，再a=a-1
//(类型）

//int main()
//{
//	int a = 3.14;//3.14 字面浮点数，编译器默认理解为double类型
//	double c = 3.14;
//	printf("%.2f\n", c);//输出3.14
//	printf("%f\n", c);//输出3.140000
//	int b = (int)3.14;//强制将3.14转为为整形（舍去小数，保留整数）
//	printf("%d\n", a);//为什么输出的是3
//	printf("%f\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//关系操作符
//>
/*int main()
{
	int a = 10;
	if (a = 3)//3赋给a，为真，执行if程序
	{
		printf("hoshimifolder");
	}
	if (a == 3)//a不等于3，==判断相等，=为赋值
	{
		printf("hoshimifolder");//不打印hoshimifolder
	}
	return 0;
}
*/
//逻辑操作符
//&& 逻辑与（并且）
//|| 逻辑或（或者）
/*
int main()
{
	//&& 逻辑与-并且
	//|| 逻辑或-或者

	int a = 10;
	int b = 20;
	scanf("%d %d", &a, &b);
	if (a && b)//a为真且b为真（a或者b中至少有一个0则不执行if程序）
	{
		printf("哈？\n");
	}
	if (a || b)//只要一个为真就执行if语句
	{
		printf("HoshimiFolder");
	}
	return 0;
}
*/
//条件操作符
//exp1?exp2:exp3 三目操作符：有三个操作数,其中exp1,exp2,exp3分别为3个表达式
//意思：exp1为真则exp2算数，exp3不算数；exp1为假则exp2不算数，exp3算数
/*int main()
{
	int a;
	int b;
	
	scanf("%d %d", &a,&b);//用scanf函数
	
	int r = (a > b ? a : b);//a>b则取a，否则取b,其中啊a>b为第一个表达式，a为第二个表达式，b为第三个表达式
	printf("%d",r);//取大小的代码
	
	return 0;
}
*/
//逗号表达式：由逗号隔开的表达式
//逗号表达式的特点是从左向右依次计算，整个表达式的结果是最后一个表达式的结果
/*
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + 3, c - 3);//先计算c=a-2=8,再计算a=b+3=23，最后计算c-3=5,这是最后的表达式，则d=c-3=5
	//其中前面的计算会影响后面的计算
	return 0;
}
*/
//[] 下标引用操作符
/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	arr[3]=20;//[]是下标引用操作符，arr和3就是[]的操作数
	//arr[3]=20是指将数组arr中的索引3对应的元素"4"赋值为20
	printf("%d\n", arr[3]);//打印的就是20了
	int n = 5;//n为变量
	arr[n] = 100;//创建数组的时候，n代表大小，不代表数量，在这里可以引用变量n
	//访问元素的时候，下标可以用变量；但是创建数组的时候，就得用常量了
	int arr1[5] = { 1,2,3,4,5 };//这里可以用5，但是不能用n，即使是n=5
	printf("%d\n", arr[n]);
	return 0;
}
*/
//函数调用操作符
/*
int Add(int x, int y)
{ return x + y; }
int main()
{
	int sum = Add(2, 3);//()就是函数调用操作符，Add,2,3都是()的操作数
	printf("%d", sum);//输出5
	return 0;
}
*/
//. 与->暂且不表

//常见关键字
// 关键字-C语言本身内置的，关键字不是自己创建出来的，也不能自己创建
//aut0-自动，所有的局部变量都是自动变量，没啥存在感
/*
int main()
{
	auto int a = 10;//自动变量
	int b = 11;//auto会自动省略

	return 0;
}
*/
//  for
//  while
//  do while
//  break-跳出循环，在for循环、while循环、do while循环、break循环中使用
//  continue-与break连用，用于循环
//case-打断switch循环
//switch
//default-用在switch与case中
//    char
//    short
//    int
//    long
//    long long
//    float
//    double
//const-修饰变量，赋予常属性（不可被改编）
//    do
//enum-枚举
//struct-结构体
//union-联合体（共用体）
//    extern-声明外部符号的
//goto-
//    if
//    else
//register-寄存器
//static-静态的
//    return-函数返回值(return z)
//signed-有符号的
//unsigned-无符号的
//sizeof-计算大小
//typedef-类型重命名
//    void-无（空），用在函数的返回类型、函数参数
//volatile

//变量的命名
//1.有意义
//int age;
//float salary;
//2.名字必须是字母、数字、下划线组成，不能有特殊字符，同时不能以数字开头
//int HoshimiFolder;
//int _486;
//3.变量名不能是关键字