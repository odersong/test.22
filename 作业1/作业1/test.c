#include<stdio.h>

//实现对整形数组的冒泡排序
//int main()
//{
//	int arr[10] = { 5,1,2,3,7,45,96,51,74,25 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int c = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = c;
//			}
//		}
//	}
//	for(i=0;i<sz;i++)
//	printf("%d ", arr[i]);
//	return 0;
//}


//1. 实现函数int（） 初始化数组为0
//2. 实现printf（） 打印数组的每一个元素
//3. 实现reverse（） 函数完成数组元素的逆置

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(arr+i));//和arr[i]一样
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int i = 0;
//	int a = 0;
//	for (i=0;i<sz/2;i++)
//	{
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		arr[left++];
//		arr[right--];
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//创建两个数组，进行内容交换

//void temp(int arr1[],int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int a = 0;
//		a = *arr2;
//		*arr2 = *arr1;
//		*arr1 = a;
//		arr1++;
//		arr2++;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	temp(arr1, arr2, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//强制转换
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p+i)= 0;//每加一就跳两个字节，但是int有4个字节。
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;//在电脑里储存为44332211
//	char* p = (char*)&a;
//	*p = 0;//char类型只改一个字节，两个16进制一个字节， 只改了电脑存储的44
//	printf("%x", a);//%x是按16进制打印，  大因为从后向前读，11223300
//	return 0;
//}

//int i;//全局变量未初始化默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof()计算变量/类型所占空间大小   为无符号数。i=-1，i为整形，转换为无符号数
//		//                      原码10000000000000000000000000000001
//		//                      反码11111111111111111111111111111110
//		//            i无符号数=补码11111111111111111111111111111111；补码保存到计算机，i>4
//	printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//计算一个数二进制中一的个数
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入：\n");
//	scanf_s("%d", &a);
//	while (i<32)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//另一种算法
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入：\n");
//	scanf_s("%d", &a);
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//求两个数二进制中有几个不相同的数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入：");
//	scanf_s("%d%d", &a,&b);
//	i = a ^ b;
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//求一个数二进制的奇数和偶数
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int i = 0;
//	printf("偶数:\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i)&1);
//	}
//	return 0;
//}


//不设置临时变量交换两个整数
//void temp(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	temp(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//不使用临时变量，打印数组中的数

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}


//求100~200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//更优解
#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//判断闰年
//能被4整除，不能被100整除，400的倍数
//void panduan(int a)
//{
//	int i = 4;
//	int j = 100;
//	int k = 400;
//	if ((a % i == 0) && (a % j != 0))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		if (a % 400 == 0)
//		{
//			printf("是闰年\n");
//		}
//		else
//		{
//			printf("不是闰年\n");
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入判断的年份：\n");
//	scanf_s("%d", &a);
//	panduan(a);
//	return 0;
//}


//乘法口诀表，输入几就是几口诀表

//void biao(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	biao(a);
//	return 0;
//}


//递归方式打印整数的每一位

//void Recurrence(int a)
//{
//	if (a > 9)
//	{
//		Recurrence(a/10);
//		printf("%d  ", a % 10);
//	}
//	else
//	{
//		printf("%d ", a % 10);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入：");
//	scanf_s("%d", &a);
//	Recurrence(a);
//	return 0;
//}



//使用递归和非递归计算n的阶乘

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int p = 1;
//	printf("请输入：");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n ; i++)
//	{
//		 p = p * i;
//	}
//	printf("%d\n", p);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = n; i > 0; i--)
//	{
//		ret = ret * n;
//		n--;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//递归算法，需要if定义一个范围，不然会栈溢出
//int ret(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n * ret(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int Ret=ret(n);
//	printf("%d", Ret);
//	return 0;
//}


//strlen模拟实现

//int main()
//{
//	char arr[] = "abcdefg";
//	char* a = arr;
//	int count = 0;
//	while (*a != '\0')
//	{
//		count++;
//		printf("%c ", *a);
//		*(a++);
//	}
//	printf("\n");
//	printf("%d ", count);
//	return 0;
//}

//打印字符
//int main()
//{
//	char arr[] = "abcde";
//	char* a = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", *a);
//		*(a++);
//	}
//	return 0;
//}

//递归实现strlen

//int my_strlen(char* a)
//{
//	if (*a == '\0')
//	{
//		return 0;
//	}
//	return 1+my_strlen(a + 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int Strlen = my_strlen(arr);
//	printf("%d ", Strlen);
//	return 0;
//}


//实现字符串反向排列
//不能使用库函数

//int  my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void temp(char arr[])
//{
//	int left = 0;
//	int tep = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		tep = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tep;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	temp(arr);
//	printf("%s ", arr);
//	return 0;
//}

//使用递归实现字符串反向排列

//int  my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse(char arr[])
//{
//	int len = my_strlen(arr);
//	int tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) > 1)
//		reverse(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s ", arr);
//	return 0;
//}


//输入一个数例如1729变成1+7+2+9=19

int add(unsigned int a)
{
	//int p = a % 10;
	//if (a != 0)
	//{
	//	return (a%10)+add(a / 10);
	//}
	if (a > 9)
	{
		return (a % 10) + add(a / 10);
	}
	else
		return a;

}

int main()
{
	unsigned int a = 0;
	scanf_s("%d", &a);
	int b = add(a);
	printf("%d", b);
	return 0;
}