#include <iostream>
using namespace std;

class List;

class Node{
    int data;
    
public:
    Node *next; 
    Node(int d):data(d),next(NULL){}
    friend class List;
    int getData(){
        return data;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout<<"deleting node with data"<<data<<endl;
    }
};

class List{
    Node *head;
    Node *tail;
    int searchHelper(Node *start,int key){
        if(start==NULL){
            return -1;
        }
        if (start->getData()==key){
            return 0;
        }
        int sub_index=searchHelper(start->next,key);
        if(sub_index==-1){
            return -1;
        }
        return sub_index+1;
    }
public:
    List():head(NULL),tail(NULL){}
    Node * begin(){
        return head;
    }
    void push_front(int data){
        if(head==NULL){
            Node *n = new Node(data);
            tail=head=n;
        }
        else{
            Node *n =new Node(data);
            n->next=head;
            head=n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head=tail=n;
        }
        else{
            Node *n=new Node(data);
            tail->next=n;
            tail=n;
        }
        
    }
    void insert(int data ,int pos){
        if(pos==0){
            push_front(data);
            return; 
        }
        Node *temp =head;
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        Node *n=new Node(data);
        n->next=temp->next;
        temp->next=n;
    }

    int searchRecusiveIndex(int key){
    int index=searchHelper(head,key);
    return index;
}
void pop_front(){
    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void pop_back(){
    Node *temp=head;
    while (temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}

void pop(int pos){
    if(pos==0){
        pop_front();
        return;
    }
    else{
        Node *temp=head;
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        Node *no = temp->next;
        temp->next=no->next;
        no->next=NULL;
        delete no;
    }
}

~List(){
    if (head!=NULL){
    delete head;
    head=NULL;
    }
}

};

bool search(Node *head,int key){
    Node *temp= head;
    while (temp!=NULL)
    {
        if(temp->getData()==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

bool searchRecusive(Node *head,int key){
    if(head==NULL){
        return false;
    }
    if(head->getData()==key){
        return true;
    }
    else{
        return searchRecusive(head->next,key);
    }
}

void reverse(Node *&head){
    Node *c =head;
    Node *p =NULL;
    Node *t;
    while(c!=NULL){
        t=c->next;
        c->next=p;
        p=c;
        c=t;
    }
    head =p;
}


int main(){
    List l;
    l.push_back(0);
    l.push_front(2);
    l.push_back(1);
    l.push_front(3);
    l.insert(4,3);
    // l.pop_front();
    // l.pop_back();
    // l.pop(1);
    Node * head =l.begin();
    reverse(head);
    while(head!=NULL){
        cout<<head->getData()<<"->";
        head=head->next;
    }
    // cout<<"enter key"<<endl;
    // int key;
    // cin>>key;
    // // cout<<head<<endl;
    // Node * h =l.begin();
    // if(search(h,key)){
    //     cout<<"element found"<<endl;
    // }
    // else{
    //     cout<<"element not found"<<endl;
    // }

    // if(searchRecusive(h,key)){
    //     cout<<"element found"<<endl;
    // }
    // else{
    //     cout<<"element not found"<<endl;
    // }

    // cout<<l.searchRecusiveIndex(key)<<endl;
    



}