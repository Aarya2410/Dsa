#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* nodeinsert(node* root,int data){
 if(root == NULL) 
  root = new node(data);

 if(root->data > data)
 root->left = nodeinsert(root->left,data);

 if(root->data < data)
 root->right = nodeinsert(root->right,data);
 return root;
}

void levelordertraversal(node* root){
    cout<<"printing the level order traversal:"<<endl;         
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
    node* temp = q.front();
    q.pop();
     
    if(temp == NULL){
        cout<<endl;
        if(!q.empty()) q.push(NULL);
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    }   
}

void inordertraversal(node* root){
    if(root == NULL) return;

 inordertraversal(root->left);
 cout<<" "<<root->data;
 inordertraversal(root->right);
    
}
void postordertraversal(node* root){
    if(root == NULL) return;

 postordertraversal(root->left);
 postordertraversal(root->right);
 cout<<" "<<root->data;
    
}
void preordertraversal(node* root){
    if(root == NULL) return;

 cout<<" "<<root->data;
 preordertraversal(root->left);
 preordertraversal(root->right);
    
}

void takeinput(node* &root){
    int data;
    cout<<"enter the data for bst: "<<endl;
    cin>>data;

    while(data != -1){
     root = nodeinsert(root,data);
     cin>>data;
    }
}
int minval(node* root){
    
    while(root->left != NULL){
        root = root->left;
    }
            return root-> data;

}

node* deletenode(node* root, int key) {
        if(root == NULL) return root;

 if(root->data > key){
            root->left = deletenode(root->left,key);
        }
        else if(root->data < key){
            root->right = deletenode(root->right,key);
        }
        else{
            
            //0child
            if(root->left == NULL && root-> right == NULL){
               delete root; 
               return NULL;
            }

            //rightchild
            else if(root->left == NULL && root-> right != NULL){
               node* temp = root->right;
               delete root;
               return temp;
                }

            //leftchild
            else if(root->left != NULL && root-> right == NULL){
               node* temp = root->left;
               delete root;
               return temp;
                }
            

            //2child
            else{
                 int min = minval(root->right);
                 root->data = min; 
                 root->right = deletenode(root->right,min);
            }
        }
        return root;
}



int main(){
   node* root = NULL;
    takeinput(root);

    levelordertraversal(root);

    cout << "\nInorder Traversal: ";
    inordertraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preordertraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postordertraversal(root);
    cout << endl;

    root = deletenode(root,20);
    levelordertraversal(root);

    return 0;
}
