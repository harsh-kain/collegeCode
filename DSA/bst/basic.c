#include<stdio.h>
#include<stdlib.h>
typedef struct binaryTree{
    int item;
    struct binaryTree *left, *right;
}BST;

void insertBst(BST ** tree, int element){
    if(*tree == NULL){
        *tree = (BST*) malloc(sizeof(BST));
        (*tree) -> item = element;
        (*tree) -> left = (*tree) -> right = NULL;
    }
    else if(element < (*tree) -> item){
        insertBst(&((*tree) -> left) , element);
    }
    else{
        insertBst(&((*tree) -> right) , element);
    }
}
void inorder(BST * root){
    if(root != NULL){
        inorder(root -> left);
        printf(" %d ", root ->item);
        inorder(root -> right);
    }
}
void preorder(BST * root){
    if(root != NULL){
        printf("%d ", root ->item);
        preorder(root -> left);
        preorder(root -> right);
    }
}
void postorder(BST * root){
    if(root != NULL){
        postorder(root -> left);
        postorder(root -> right);
        printf("%d ", root ->item);
    }
}
int totalLeafNode(BST *tree){
    if(tree == NULL){
        return 0;
    }    
    else if((tree -> left = NULL) && (tree -> right = NULL)){
        return 1;
    }
    else{
        return (totalLeafNode(tree -> left) + totalLeafNode(tree -> right));
    }
}
int totalNonLeafNode(BST * tree){
    if ((tree == NULL) || (tree -> left == NULL) && (tree -> right == NULL))
    {
        return 0;
    }
    else{
    }
}
// int totalLeafNode(BST *tree){
//     if(tree == NULL ){
//         return 0;
//     }
//     else{
//         return (totalLeafNode(tree -> left) + totalLeafNode(tree -> right) + 1);
//     }
// }
BST *findGreatestElement(BST * tree){
    if((tree == NULL) || (tree -> right ) == NULL){
        return tree;
    }
    else{
        return findGreatestElement(tree -> right);
    }
}
BST *findSmallestElement(BST * tree){
    if((tree == NULL) || (tree -> left) == NULL){
        return tree;
    }
    else{
        return findSmallestElement(tree -> left);
    }
}
int main(){

    int ch, element;
    BST * root, *loc;
    root = NULL;
    while (1)
    {   
        printf("\n");
        printf("1 -> insertion\n");
        printf("2 -> inOrder\n");
        printf("3 -> PreOrder\n");
        printf("4 -> PostOrder\n");
        printf("5 -> count leaf node \n");
        printf("6 -> count NonLeaf node \n");
        printf("7 -> total leaf node \n");
        printf("8 -> find greatest element \n");
        printf("9 -> find smallest element \n");
        printf("10 -> Exit\n");
        printf("Enter your choice----->\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the value of element\n");
            scanf("%d", &element);
            insertBst(&root, element);
            break;
        case 2:
            if (root == NULL)
            {
                printf("Tree is empty\n");
            }
            else{
                inorder(root);
            }
            break;

        case 3:
            if (root == NULL)
            {
                printf("Tree is empty\n");
            }
            else{
                preorder(root);
            }
            break;
        case 4:
            if (root == NULL)
            {
                printf("Tree is empty\n");
            }
            else{
                postorder(root);
            }
            break;

        // case 5:
        //     printf("Total leaf node are %d\n", totalLeafNode(root));
        //     break;

        case 6:
            printf("Total non leaf node are %d\n", totalNonLeafNode(root));
            break;

        // case 7:
        //     printf("Greatest element is %d\n", totalNonLeafNode(root));
        //     break;

        case 10:
            exit(1);
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}
