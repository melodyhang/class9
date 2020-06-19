#include<stdio.h>
#include<stdlib.h>

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

	int array[] = { 15,20,25,30,35 };
	int i;
	int* ptr_array = array;
	//复制完毕后，就可以使用指针访问数组
	for (i = 0; i < 5; i++)
	{
		//printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, ptr_array[i], &array[i]);
		//printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *(ptr_array+i), &array[i]);
		printf("第%d个元素的值为%d\t地址为：%p\n", i + 1, *ptr_array++, &array[i]);
	}


}