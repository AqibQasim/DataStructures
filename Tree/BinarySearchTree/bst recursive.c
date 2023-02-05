#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct btnode{
    int data;
    struct btnode * leftchild;
    struct btnode * rightchild;
};
struct btnode * root = NULL;

struct btnode*newnode(int data){
    struct btnode * temp = (struct btnode*) malloc(sizeof(struct btnode));
    temp->data = data;
    temp->leftchild = NULL;
    temp->rightchild = NULL;
}
struct btnode * insert(struct btnode*root , int data){
    if(root == NULL){
        root = newnode(data);
    }
    else if(data < root->data){
        root->leftchild = insert(root->leftchild , data);
    }
    else{
        root->rightchild = insert(root->rightchild , data);
    }
}

void inorder(struct btnode * node){
    if(node != NULL){
        inorder(node->leftchild);
        printf("%d \n",node->data);
        inorder(node->rightchild);
    }
}
void preorder(struct btnode * node){
    if(node != NULL){
        printf("%d \n",node->data);
        preorder(node->leftchild);
        preorder(node->rightchild);
    }
}
void postorder(struct btnode * node){
    if(node!= NULL){
        postorder(node->leftchild);
        postorder(node->rightchild);
        printf("%d \n",node->data);
    }
}
void search(struct btnode* root , int searching){
    if(root->data == searching){
        printf("found \n");
    }
    else if(searching < root->data){
        search(root->leftchild , searching);
    }
    else{
        search(root->rightchild , searching);
    }
}
void main(){
    int choose;
    printf(" Insert(1): \n Inorder(2): \n PreOrder(3): \n Postorder(4): \n Search(5) \n Delete(6): \n");
    scanf("%d",&choose);
    while(choose !=7){
        if(choose == 1){
            int data;
            printf("Enter Data \n");
            scanf("%d",& data);
            root = insert(root , data);
        }
        if(choose == 2){
            inorder(root);
        }
        if(choose == 3){
            preorder(root);
        }
        if(choose == 4){
            postorder(root);
        }
        if(choose == 5){
            int searched;
            printf("Enter the value to be searched \n");
            scanf("%d",&searched);
            search(root , searched);
        }
        if(choose == 6){
            int deleted;
            printf("Enter the value to be deleted \n");
            scanf("%d",&deleted);
            deleteNode(root , deleted);
        }

    printf(" Insert(1): \n Inorder(2): \n PreOrder(3): \n Postorder(4): \n Search(5) \n Delete(6): \n");
    scanf("%d",&choose);
    }
}
