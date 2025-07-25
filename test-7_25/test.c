//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//关键字typedef 定义类型，理解为类型重命名
//将复杂的类型定义成简单的类型
/*
typedef unsigned int uint;//将unsigned int重命名为uint
typedef struct Node//将struct重命名为Node
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
//关键字static静态
//1.修饰局部变量->静态局部变量
//(1)static 修饰局部变量的时候，局部变量出了作用域时，不会销毁
// 本质上，static 修饰局部变量的时候，改变了变量的存储位置
//2.修饰全局变量->静态全局变量
//3.修饰函数->静态函数
//栈区：局部变量
//堆区
//静态区：静态变量（程序结束时才销毁），用static修饰变量时，会将变量放入静态区，生命周期变为整个生命周期
//存储位置的改变影响了变量的生命周期
//用static修饰局部变量
/*
void test()//viod：不需要任何返回（像int 内部总有return x;)
{
	static int a = 1;//static修饰局部变量a，此时a即使出了局部作用域也不会销毁，后续循环使用到a时a就保留了下来
	//用static修饰变量后，将a放入了静态区，之后每一次循环到此处时，也不会重新创建a=1了
	a++;//此时输出2 3 4 5 6 7 8 9 10 11
	//int a = 1;//创建局部变量a=1，生命周期是当前函数内部（printf之后遇到}a就消失了
	//a++;//a+1=2，先使用a=1，再a+1=2
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}//循环10次,输出10个2
	
	return 0;
}
*/
//static 修饰全局变量,会将其外部链接属性变为内部链接属性，此时其他源文件无法调用其修饰的变量
//全局变量具有外部链接属性（用extern进行声明链接）-->可执行程序
//声明外部符号（来自源文件Add.c）
/*
extern int g_val;//用extern声明外部符号(Add.c中的int g_val=2022;）
int main()
{
	printf("%d\n", g_val);
	//printf("%d\n", HoshimiFolder);//在Add.c中，用了static修饰了HoshimiFolder,将其外部链接属性变成了内部链接属性，这里不可用
	return 0;
}
*/
//用static修饰全局变量时，变量的作用域由整个工程（其他源文件可以用extern声明后引用）缩小到当前源文件

//static 修饰函数，将局部函数变为全局函数，将全局函数变为当前源文件适用的函数
/*
extern int Add(int x, int y);//声明外部函数Add(Add.c)中的函数，其中函数具有外部链接属性
//如果Add中用了static修饰Add函数，则在此无法引用Add函数，因为Add.c中static将Add函数改为了内部链接属性
int main()
{
	int a = 10;
	int b = 20;
	
	int z = Add(a, b);
	printf("%d\n", z);
	
	return 0;
}
*/

//register-寄存器
//电脑上的存储设备：
//寄存器（集成到CPU上）(8mb)
//高速缓存(cache)(64mb)
//内存(32g)
//硬盘(1t)
//上边的速度要快，但空间小、造价高，下边的空间大，造价低
/*
int main()
{
	//寄存器变量
	register int num = 3;//建议：3存放在寄存器中

	return 0;
}
*/

//#define 定义常量和宏
//#define 定义标识符常量
/*
#define NUM 100
int main()
{
	printf("%d\n", NUM);//此时NUM是常量
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };
	
	return 0;
}
*/
//#define 定义宏
/*
#define ADD(x,y) x+y//ADD:宏名，(x,y)宏的参数 x+y宏体（标准的是要((x)+(y))
int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);//将a与b分别替换为ADD中的x与y,再进行计算（与函数有区别，但是表面上功能没有太大区别）
	printf("%d", c);
	return 0;
}
*/
//其中(x,y)宏的参数，参数是无类型的