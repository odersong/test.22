#include<stdio.h>

//ʵ�ֶ����������ð������
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


//1. ʵ�ֺ���int���� ��ʼ������Ϊ0
//2. ʵ��printf���� ��ӡ�����ÿһ��Ԫ��
//3. ʵ��reverse���� �����������Ԫ�ص�����

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
//		printf("%d ", *(arr+i));//��arr[i]һ��
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


//�����������飬�������ݽ���

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
//	short* p = (short*)arr;//ǿ��ת��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p+i)= 0;//ÿ��һ���������ֽڣ�����int��4���ֽڡ�
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;//�ڵ����ﴢ��Ϊ44332211
//	char* p = (char*)&a;
//	*p = 0;//char����ֻ��һ���ֽڣ�����16����һ���ֽڣ� ֻ���˵��Դ洢��44
//	printf("%x", a);//%x�ǰ�16���ƴ�ӡ��  ����Ϊ�Ӻ���ǰ����11223300
//	return 0;
//}

//int i;//ȫ�ֱ���δ��ʼ��Ĭ��Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof()�������/������ռ�ռ��С   Ϊ�޷�������i=-1��iΪ���Σ�ת��Ϊ�޷�����
//		//                      ԭ��10000000000000000000000000000001
//		//                      ����11111111111111111111111111111110
//		//            i�޷�����=����11111111111111111111111111111111�����뱣�浽�������i>4
//	printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//����һ������������һ�ĸ���
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("�����룺\n");
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
//��һ���㷨
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	printf("�����룺\n");
//	scanf_s("%d", &a);
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//�����������������м�������ͬ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	printf("�����룺");
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


//��һ���������Ƶ�������ż��
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int i = 0;
//	printf("ż��:\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("����:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i)&1);
//	}
//	return 0;
//}


//��������ʱ����������������
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


//��ʹ����ʱ��������ӡ�����е���

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


//��100~200֮�������
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
//���Ž�
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


//�ж�����
//�ܱ�4���������ܱ�100������400�ı���
//void panduan(int a)
//{
//	int i = 4;
//	int j = 100;
//	int k = 400;
//	if ((a % i == 0) && (a % j != 0))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		if (a % 400 == 0)
//		{
//			printf("������\n");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	printf("�������жϵ���ݣ�\n");
//	scanf_s("%d", &a);
//	panduan(a);
//	return 0;
//}


//�˷��ھ������뼸���Ǽ��ھ���

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


//�ݹ鷽ʽ��ӡ������ÿһλ

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
//	printf("�����룺");
//	scanf_s("%d", &a);
//	Recurrence(a);
//	return 0;
//}



//ʹ�õݹ�ͷǵݹ����n�Ľ׳�

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int p = 1;
//	printf("�����룺");
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

//�ݹ��㷨����Ҫif����һ����Χ����Ȼ��ջ���
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


//strlenģ��ʵ��

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

//��ӡ�ַ�
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

//�ݹ�ʵ��strlen

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


//ʵ���ַ�����������
//����ʹ�ÿ⺯��

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

//ʹ�õݹ�ʵ���ַ�����������

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


//����һ��������1729���1+7+2+9=19

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