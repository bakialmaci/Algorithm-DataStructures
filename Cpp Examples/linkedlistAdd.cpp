#include<stdio.h>
#include<stdlib.h>

struct n{
    /* data */
    int x;
    n* next;
}; typedef n node;


int main(){
    node * root;
    node * element;
    node * iterator;

    element = (node*) malloc(sizeof(node));
    root    = (node*) malloc(sizeof(node));
    root -> x = 10;
    root -> next -> x = 30;
    iterator = root;
     
    element -> x = 20;

    element = root -> next;

    element -> next = root -> next;

    printf("%d",root->next->x);
    return 0;
}