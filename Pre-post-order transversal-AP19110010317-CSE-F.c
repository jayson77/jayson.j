#include <stdio.h> 
#include <stdlib.h> 
struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 
struct node* newNode(int data) 
{ 
     struct node* node = (struct node*)malloc(sizeof(struct node));  
     node->data = data; 
     node->left = NULL; 
     node->right = NULL; 
     return(node); 
} 
void Postorder(struct node* node) 
{ 
     if (node == NULL) 
        return; 
     ostorder(node->left); 
     postorder(node->right); 
     printf("%d ", node->data); 
} 
void Inorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
     norder(node->left); 
     printf("%d ", node->data);   
     Inorder(node->right); 
} 
void Preorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
     printf("%d ", node->data);   
     Preorder(node->left);   
     preorder(node->right); 
}     
void main() 
{ 
     struct node *root = Node(1); 
     root->left        = Node(2); 
     root->right        = Node(3); 
     root->left->left     =Node(4); 
     root->left->right       = Node(5);  
     printf("Preorder traversal"); 
     Preorder(root); 
     printf("Inorder traversal"); 
     Inorder(root);   
     printf("Postorder traversal"); 
     Postorder(root); 
      
}