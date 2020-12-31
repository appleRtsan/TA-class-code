#include "stack.hpp"
#include <bits/stdc++.h>
struct Node{
	int val;
	Node* next;
};

typedef struct Node node;
node* top=NULL;

void push(int v)
{
	node *n=(node*)malloc(sizeof(node));
	n->val=v;
	printf("%d\n",n->val);
	n->next=top;
	top=n;
}

int pop(void)
{
	if(top==NULL)
		return 0;
	else
	{
		int last=top->val;
		node* del=top;
		top=top->next;
		free(del);
		return last;
	}
}
