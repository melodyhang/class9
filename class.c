#include<stdio.h>
#include<stdlib.h>

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

	int array[] = { 15,20,25,30,35 };
	int i;
	int* ptr_array = array;
	//������Ϻ󣬾Ϳ���ʹ��ָ���������
	for (i = 0; i < 5; i++)
	{
		//printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, ptr_array[i], &array[i]);
		//printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *(ptr_array+i), &array[i]);
		printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *ptr_array++, &array[i]);
	}


}