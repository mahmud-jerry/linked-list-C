#include <stdio.h>
#include <stdlib.h>
typedef struct node Node ;
struct node{
    int data ;
    Node *prev;
    Node *next ;
};
Node* create_node (int data , Node *next , Node *prev){
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node ->data = data ;
    new_node ->prev = prev;
    new_node ->next = next;
    return new_node;
}
void printList(Node *root){
    while(root!=NULL){
        printf("%d ",root->data);
        root = root->next ;
    }
}
int main(){
    Node *head , *n1 ;
    head = create_node(10,NULL,NULL);
    n1 = create_node(20,NULL,head);
    printList(head);
    return 0;
}
