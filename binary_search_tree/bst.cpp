#include <iostream>
#include <vector>
using namespace std;

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

Node * insert(Node * root,int n){
    if(root==NULL){
        return new Node(n);
    }
    if(n < root->data){
        root->left=insert(root->left,n);
    }
    else{
        root->right=insert(root->right,n);
    }
    return root;
}

void inOrderTraversal(Node *root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

Node * findMin(Node * root){
    while (root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

Node * deleteNode(Node *root,int k){
    if(root==NULL){
        return NULL;
    }
    else if(k < root->data){
        root->left=deleteNode(root->left,k);
    }
    else if(k > root->data){
        root->right=deleteNode(root->right,k);
    }
    else{
        //laaf node
        if(root->left==NULL and root->right==NULL){
            delete root;
            root=NULL;
            return root;
        }
        //left child
        else if(root->right==NULL){
            Node * temp = root;
            root=root->right;
            delete temp;
        }
        //right child
        else if(root->left==NULL){
            Node * temp = root;
            root=root->left;
            delete temp;
        }
        //2 childs
        else{
            Node * min =findMin(root->right);
            root->data=min->data;
            root->right=deleteNode(root->right,min->data);
        }
    }
    return root;
}

bool search(Node *root,int k){
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    if(k < root->data){
        return search(root->left,k);
    }
    return search(root->right,k);
}

void inRange(Node *root,int k1,int k2){
    if (root==NULL){
        return;
    }
    else if (root->data>=k1 and root->data<=k2){
        inRange(root->left,k1,k2);
        cout<<root->data<<" ";
        inRange(root->right,k1,k2);
    }
    else if (root->data<k1){
        inRange(root->right,k1,k2);
    }
    else{
        inRange(root->left,k1,k2);
    }
}

void printTOLeafPath(Node * root,vector<int> &path){
    if(root==NULL){
        return;
    }
    if(root->left==NULL and root->right==NULL){
        for(int i:path){
            cout<<i<<"->";
        }
        cout<<root->data;
        cout<<endl;
        return;
    }
    path.push_back(root->data);
    printTOLeafPath(root->left,path);
    printTOLeafPath(root->right,path);

    //backtracking
    path.pop_back();
    return;
}

int main(){
    int arr[]={3,6,9,1,5,2,4};
    Node *root =NULL;
    for(int m:arr){
        root =insert(root,m);
    }
    inOrderTraversal(root);
    int k;
    // cout<<"enter element to be searched";
    // cin>>k;
    // cout<<search(root,k)<<endl;
    // deleteNode(root,k);
    // inOrderTraversal(root);
    // cout<<"in range values"<<endl;
    // inRange(root,3,6);
    cout<<endl<<"leaf paths "<<endl;
    vector <int > path;
    printTOLeafPath(root,path);
}