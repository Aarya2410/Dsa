#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = right = NULL;
    }
};

node* insertnode() {
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if (data == -1) return NULL;  // Base case for stopping recursion

    node* root = new node(data);
    
    cout << "LEFT of " << data << " : ";
    root->left = insertnode();

    cout << "RIGHT of " << data << " : ";
    root->right = insertnode();

    return root;
}

void inorder(node* root){
    if(root == NULL) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root == NULL) return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root == NULL) return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(node* root) {
    cout<<endl;
    cout<<"printing the level order traversal:"<<endl;
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);
    q.push(NULL); // NULL as a level separator

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl; // Move to next line
            if (!q.empty()) q.push(NULL); // Add separator for next level
        } else {
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
} 

int main() {
    node* root = NULL;

    // ✅ Fix: Properly assign the return value to root
    root = insertnode();

    levelOrderTraversal(root); // Call the level order traversal

    cout<<"inorder traversal: "<<endl;
    inorder(root);

    cout<<endl<<"preorder traversal: "<<endl;
    preorder(root);

    cout<<endl<<"postorder traversal: "<<endl;
    postorder(root);
    return 0;
}
