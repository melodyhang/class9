#include<stdio.h>
#include<stdlib.h>
#define N 5

int main()
{
	/*数组与指针*/


	/*
	//数组名就是数组的首地址
	int i;	//循环变量
	double score[5] = { 3,2,1,3,4 };
	double* ptr_score = &score;
	printf("double类型数组的地址占%d个字节\n", sizeof(ptr_score));
	//使用指针访问数组元素
	printf("数组的首地址：%p\t数组的首元素的地址：%p\n",score,&score[0]);
	for (i = 0; i < 5; i++)
	{
		//printf("%.2lf\n", ptr_score[i]);
		printf("%.2lf\n", *ptr_score + i);
	}
	*/

	/*
	int array[] = { 15,20,25,30,35 };
	int i;
	int temp;	//临时变量
	int* ptr_array = array;
	//复制完毕后，就可以使用指针访问数组
	for (i = 0; i < 5; i++)
	{
		//printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, ptr_array[i], &array[i]);
		printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *(ptr_array+i), &array[i]);
		//下面的方法每次循环都会移动指针的指向，要注意重置
		//printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *ptr_array++, &array[i]);
	}
	//实现数组的逆序，原理就是数组的首位元素进行交换


	for (i = 0; i < N / 2; i++)
	{
		//第i个值和第N-i个元素交换
		temp = array[i];
		array[i] = array[N - 1 - i];
		array[N - i - 1] = temp;
	}



	//指针交换的思路
	//ptr1	ptr2
	int* ptr_array_start = array;		//指向数组首元素的指针
	int* ptr_array_end = &array[N-1];	//指向数组末元素的指针
	//int* ptr_array_end = array + N - 1;	//上面的等价写法
	while (ptr_array_start != ptr_array_end)
	{
		//首尾交换，指针分别进行更新
		temp = *ptr_array_start;
		*ptr_array_start = *ptr_array_end;
		*ptr_array_end = temp;
		//首元素指针要向后移动
		ptr_array_start++;
		//末元素指针要向前移动
		ptr_array_end--;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\t", array[i]);
	}
	*/


	//数组名就是数组的首地址（数组首元素的地址）
	//二维数组的理解：1-是由n个1维数组所组成
	int i;
	int j;
	double score[5][3] = {
		{55,66,77},
		{55,65,77},
		{55,64,77},
		{55,63,77},
		{55,61,77},
	};
	double(*ptr_score)[3] = score;
	
	//遍历第一行数据：第一行的数组名就是score[0]
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			//printf("%.2lf\t", score[i][j]);	//score[i] => *(score + i)
			printf("%.2lf\t", *(score[i] + j));
			//printf("%.2lf\t", *(*(ptr_score + i) + j));
		}
		printf("\n");
	}
}