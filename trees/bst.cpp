#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    
    }
};

node* nodeinsert(node* root,int data){
    if (root == NULL){
    root = new node(data);
    return root;
    }
    if (root->data > data){
    root->left = nodeinsert(root->left,data);
    }
    if (root->data < data){
    root->left = nodeinsert(root->left,data);
    }
    return root;
}

void takeinput(node* &root){
    int data;
    cin>>data;

    while(data != -1){
        nodeinsert(root,data
        );
        cin >> data;
    }
}

int main(){
node* root = NULL;

cout<<"enter the data:";
takeinput(root);
}

