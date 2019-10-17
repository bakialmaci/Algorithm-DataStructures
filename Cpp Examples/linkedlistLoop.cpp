#include<stdio.h>
#include<stdlib.h> //for malloc,calloc vs.

struct n{
    int x;
    n*next;
}; 
typedef n node;

void sysOut(node * r){
    while (r != NULL){
        /* code */
        printf("%d ",r->x);
        r = r -> next;
    }
}

int main(){
    node * root;
    root = (node * )malloc(sizeof(node));
    root -> x = 10;
    root -> next = (node*) malloc (sizeof(node));
    root -> next -> x = 20;
    root -> next -> next = (node*) malloc (sizeof(node));
    root -> next -> next -> x = 30;

    root -> next -> next -> next = NULL;

    node * iter;
    iter = root;
    // printf("%d",iter->x);
    
    while(iter != NULL){
        printf("%d \n",iter->x);
        iter = iter -> next;
    }

    for(int i = 0; i < 5; i++){
        iter -> next = (node*) malloc(sizeof(node));
        iter = iter -> next;
        iter -> x = i * 10;
        printf("%d", iter->x);
        // iter -> next = NULL;
    }

    sysOut(root);
}