#include <iostream>
using namespace std;
#include <queue>
#include <cmath>

class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};

Node * buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node *n= new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}

void preOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node *root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp= q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}

Node * buildTreeLevelOrder(){
    int d;
    cin>>d;
    Node * root = new Node(d);
    queue <Node *> q;
    q.push(root);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        int c1,c2;
        cin >>c1>>c2;
        if(c1!=-1){
            temp->left=new Node(c1);
            q.push(temp->left);
        }
        if(c2!=-1){
            temp->right=new Node(c2);
            q.push(temp->right);
        }
    }
    return root;
}

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}

int diameter(Node *root){
    if(root==NULL){
        return 0;
    }
    int d1=height(root->left) + height(root->right);
    int d2=diameter(root->left);
    int d3=diameter(root->right);
    return max(d1,max(d2,d3));
}

int main(){
    Node *root =buildTree();
    //Node *root = buildTree();
    // preOrderTraversal(root);
    // cout<<endl;
    // inOrderTraversal(root);
    // cout<<endl;
    // postOrderTraversal(root);
    // cout<<endl;
    levelOrderTraversal(root);
    cout<<"diameter "<< diameter(root) << endl;
}