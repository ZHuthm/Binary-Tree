#include "ＢiTree.h"

/*创建二叉树，参数No为结点的编号数组，data为结点的数据数组，n为结点总数*/
/*函数返回指向根结点的指针*/
BiTree Create(int No[],char data[],int n)
{
	Node *s[MaxSize];
	Node *r;
	Node *q;
	int i,j,parent;
	DataType x;
	for (i=0;i<n;i++)
	{
		x=data[i];
		j=No[i];
		q=(Node *)malloc(sizeof(Node));
		q->data=x;
		q->lchild=NULL;
		q->rchild=NULL;
		s[j]=q;
		if(j==0)
			r=q;
		else
		{
			parent=(j-1)/2;
			if(j%2==1)
				s[parent]->lchild=q;
			else
				s[parent]->rchild=q;
		}
	}
	return r;
}

/*输出结点数据，参数为指向结点指针*/
void visit(BiTNode *q)
{
	printf("%c ",q->data);
}

/* 自行实现头文件声明的遍历函数*/
