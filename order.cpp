#include "��iTree.h"
void main()
{
   int n,i;
   int *No;//�����Ŷ�̬���飻
   DataType *data;//������ݶ�̬���飻
   printf("����������\n");
   scanf("%d",&n);
   No=(int *)malloc(sizeof(int)*n);
   data=(DataType *)malloc(sizeof(DataType)*n);
   printf("������ý��Ĳ���������:");
   for(i=0;i<n;i++)
   	   scanf("%d",&No[i]); 
   fflush(stdin); 
   printf("\n�����������������:");
   for( i=0;i<n;i++)
   	   scanf(" %c",&data[i]);  
   BiTree root=Create(No,data,n);       //���������
   printf("\n������ǰ��������У��ݹ飩:");
   /*����ʵ�ֵı�������*/
   /*1.ǰ��������ݹ飩*/
   /*2.����������ݹ飩*/
   /*3.����������ݹ飩*/
   /*4.ǰ��������ǵݹ飩*/
   /*5.����������ǵݹ飩*/
   /*6.����������ǵݹ飩*/
   /*7.��α���*/
}