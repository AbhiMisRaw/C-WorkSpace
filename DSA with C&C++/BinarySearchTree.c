#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *left ;
    int value ;
    struct node *right ;
} BST ;

void printStatement();
void insert(BST **root , int);
void preOrderTraversal(BST *root);
void inOrderTraversal(BST *root);
void postOrderTraversal(BST *root);

void main(){
    BST *root = NULL ;
    int value , choice ,exit;
    while(1){
        printStatement();
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter the value :");
                scanf("%d",&value);
                insert(&root , value);
                break;
            case 2:
                preOrderTraversal(root);
                break;
            case 3:
                postOrderTraversal(root);
                break;
            case 4:
                inOrderTraversal(root);
                break;
            case 0:
                exit = 1 ;
            default:
                printf("Enter the Correct choice\n");
        }
        if(exit == 1){
            return ;
        }
    }
}
void printStatement(){
    printf("\n");
    //printf("Enter your choice \n")
    printf("For insert an item in Binary Search tree -1\n");
    printf("For Pre-traverse an item press -2 \n");
    printf("For Inorder-traverse an item press -3 \n");
    printf("For Post-traversing an item press -4 \n");
}
void insert(BST **root , int value){
    BST *p ;
    p = (BST *)malloc(sizeof(BST));
    p->value = value ;
    if(*root == NULL){
        *root = p ;
        (*root)->left =(*root)->right =NULL ;
        return ;
    }
    BST *temp = *root ;
    while(temp != NULL){
        if( temp->value < value){
            if(temp->right == NULL){
                temp->right = p ;
                break;
            }
            temp = temp->right ; 
        }else{
           if(temp->left == NULL){
                temp->left = p ;
                break;
            }
            temp = temp->left ;
        }
    }
}

void preOrderTraversal(BST *root){
    if(root == NULL){
        return ;
    }
    printf("%d  ", root->value);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(BST *root){
    if(root == NULL){
        return ;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d  ", root->value);
}

void inOrderTraversal(BST *root){
    if(root == NULL){
        return ;
    }
    inOrderTraversal(root->left);
    printf("%d  ", root->value);
    inOrderTraversal(root->right);
}