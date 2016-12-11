#include "ＢiTree.h"
void main()
{
   int n,i;
   int *No;//层序编号动态数组；
   DataType *data;//结点数据动态数组；
   printf("请输入结点数\n");
   scanf("%d",&n);
   No=(int *)malloc(sizeof(int)*n);
   data=(DataType *)malloc(sizeof(DataType)*n);
   printf("请输入该结点的层序编号序列:");
   for(i=0;i<n;i++)
   	   scanf("%d",&No[i]); 
   fflush(stdin); 
   printf("\n请输入结点的数据序列:");
   for( i=0;i<n;i++)
   	   scanf(" %c",&data[i]);  
   BiTree root=Create(No,data,n);       //创建二叉对
   printf("\n该树的前序遍历序列（递归）:");
   /*调用实现的遍历函数*/
   /*1.前序遍历（递归）*/
   /*2.中序遍历（递归）*/
   /*3.后序遍历（递归）*/
   /*4.前序遍历（非递归）*/
   /*5.中序遍历（非递归）*/
   /*6.后序遍历（非递归）*/
   /*7.层次遍历*/
}