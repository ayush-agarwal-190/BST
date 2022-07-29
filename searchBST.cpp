#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
data=val;
left=NULL;
right=NULL;
    }
};
Node* searchInBST(Node* root,int key){
if(root==NULL){
    return NULL;
}
if(root->data==key){
    return root;
}
if(root->data>key){
    return searchInBST(root->left,key);
}
return searchInBST(root->left,key);

}
int main(){
     Node* root =new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

if(searchInBST(root,8)==NULL)
cout<<"key does not exist";
else
cout<<" key exist";


    return 0;
}