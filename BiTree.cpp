#include "��iTree.h"

/*����������������NoΪ���ı�����飬dataΪ�����������飬nΪ�������*/
/*��������ָ�������ָ��*/
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

/*���������ݣ�����Ϊָ����ָ��*/
void visit(BiTNode *q)
{
	printf("%c ",q->data);
}

/* ����ʵ��ͷ�ļ������ı�������*/
