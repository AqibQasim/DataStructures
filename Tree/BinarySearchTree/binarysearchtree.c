#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct btnode{
    int data;
    struct btnode * leftchild;
    struct btnode * rightchild;
};
struct btnode * root = NULL;
void insert(){
    struct btnode * temp = (struct btnode*) malloc(sizeof(struct btnode));
    printf("Enter DATA: \n");
    scanf("%d",& temp->data);
    temp->leftchild = NULL;
    temp->rightchild = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        struct btnode * current = root;
        int a =0;
        while(a == 0){
        if(temp->data < current->data){
            if(current->leftchild == NULL){
                current->leftchild = temp;
                break;
            }
            else{
                current = current->leftchild;
            }
        }
        else{
            if(current->rightchild == NULL){
                current->rightchild = temp;
                break;
            }
            else{
                current = current->rightchild;
            }

        }
    }
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
void searching(){
    int searched;
    int flag = 0;
    printf("Enter the value to search: \n");
    scanf("%d",&searched);
    struct btnode * temp = root;
    while(temp != NULL){
        if(temp->data == searched){
            printf("Found \n");
            flag = 1;
            break;
        }
        else if(temp->data > searched){
            temp = temp->leftchild;
        }
        else if(temp->data < searched){
            temp = temp->rightchild;
        }
    }
    if(flag == 0){
        printf("Not found \n");
    }
}
struct node* getRightMin(struct btnode* node)
{
    struct btnode* current = node;

    /* loop down to find the leftmost leaf */
    while (current && current->leftchild != NULL)
        current = current->leftchild;
        return current->data;
}
struct node * removeNode(struct btnode *root, int val)
{
    if(root == NULL){
        return NULL;
    }
    if(root->data < val){
        root->rightchild = removeNode(root->rightchild,val);
    }
    else if(root->data > val){
        root->leftchild = removeNode(root->leftchild,val);
        }
    else
    {
        if(root->leftchild == NULL && root->rightchild == NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->leftchild == NULL)
        {
            struct node * temp = root->rightchild;
            free(root);
            return temp;
        }
        else if(root->rightchild == NULL)
        {
            struct node *temp = root->leftchild;
            free(root);
            return temp;
        }
        else
        {
            int rightMin = getRightMin(root->rightchild);
            root->data = rightMin;
            root->rightchild = removeNode(root->rightchild,rightMin);
        }
    }
    return root;
}
void main(){
    int choose;
    printf(" Insert(1): \n Inorder(2): \n PreOrder(3): \n Postorder(4): \n Search(5) \n Delete(6): \n");
    scanf("%d",&choose);
    while(choose != 7){
        if(choose == 1){
            insert();
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
            searching();
        }
        if(choose == 6){
            int deleted;
            printf("Enter the value to be deleted \n");
            scanf("%d",&deleted);
            removeNode(root , deleted);
        }
        printf(" Insert(1): \n Inorder(2): \n PreOrder(3): \n Postorder(4): \n Search(5) \n Delete(6): \n");
        scanf("%d",&choose);
    }
}
