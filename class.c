#include<stdio.h>
#include<stdlib.h>
#define N 5

int main()
{
	/*������ָ��*/


	/*
	//����������������׵�ַ
	int i;	//ѭ������
	double score[5] = { 3,2,1,3,4 };
	double* ptr_score = &score;
	printf("double��������ĵ�ַռ%d���ֽ�\n", sizeof(ptr_score));
	//ʹ��ָ���������Ԫ��
	printf("������׵�ַ��%p\t�������Ԫ�صĵ�ַ��%p\n",score,&score[0]);
	for (i = 0; i < 5; i++)
	{
		//printf("%.2lf\n", ptr_score[i]);
		printf("%.2lf\n", *ptr_score + i);
	}
	*/

	/*
	int array[] = { 15,20,25,30,35 };
	int i;
	int temp;	//��ʱ����
	int* ptr_array = array;
	//������Ϻ󣬾Ϳ���ʹ��ָ���������
	for (i = 0; i < 5; i++)
	{
		//printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, ptr_array[i], &array[i]);
		printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *(ptr_array+i), &array[i]);
		//����ķ���ÿ��ѭ�������ƶ�ָ���ָ��Ҫע������
		//printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *ptr_array++, &array[i]);
	}
	//ʵ�����������ԭ������������λԪ�ؽ��н���


	for (i = 0; i < N / 2; i++)
	{
		//��i��ֵ�͵�N-i��Ԫ�ؽ���
		temp = array[i];
		array[i] = array[N - 1 - i];
		array[N - i - 1] = temp;
	}



	//ָ�뽻����˼·
	//ptr1	ptr2
	int* ptr_array_start = array;		//ָ��������Ԫ�ص�ָ��
	int* ptr_array_end = &array[N-1];	//ָ������ĩԪ�ص�ָ��
	//int* ptr_array_end = array + N - 1;	//����ĵȼ�д��
	while (ptr_array_start != ptr_array_end)
	{
		//��β������ָ��ֱ���и���
		temp = *ptr_array_start;
		*ptr_array_start = *ptr_array_end;
		*ptr_array_end = temp;
		//��Ԫ��ָ��Ҫ����ƶ�
		ptr_array_start++;
		//ĩԪ��ָ��Ҫ��ǰ�ƶ�
		ptr_array_end--;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\t", array[i]);
	}
	*/


	//����������������׵�ַ��������Ԫ�صĵ�ַ��
	//��ά�������⣺1-����n��1ά���������
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
	
	//������һ�����ݣ���һ�е�����������score[0]
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