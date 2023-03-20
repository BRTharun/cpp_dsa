#include<cstring>
#include<iostream>
using namespace std;

template <typename T>
class Node{
public:
    string key;
    T value;
    Node * next;
    Node(string key,T value){
        this->key=key;
        this->value=value;
        next =NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template <typename T>
class Hashtable{
    Node <T> ** table;
    int cs;//this is current size
    int ts;//this is total size
    int hashFun(string key){
        int idx=0;
        int power=1;
        for(auto c :key){
            idx=(idx+c*power)%ts;
            power=(power*29)%ts;
        }
        return idx;
    }
    void rehash(){
        Node <T> ** old_table= table;
        int oldTs=ts;

        cs=0;
        ts=(ts*2+1);
        table=new Node <T> *[ts];

        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
        
        for(int i=0;i<oldTs;i++){
            Node <T> *temp = old_table[i];
            while (temp!=NULL)
            {
                string key = temp->key;
                T value =temp->value;

                inserst(key,value);
                temp=temp->next;
            }

            if(old_table[i]!=NULL){
                delete old_table[i];
            }
            
        }
        delete [] old_table;

    }
public:
    Hashtable(int default_size=7){
        cs=0;
        ts=default_size;
        table = new Node<T> * [ts];
        for(int i=0;i<ts;i++){
            table[i]=NULL;
        }
    }
    void inserst(string key,T val){
        int index=hashFun(key);
        Node <T> *n = new Node<T>(key,val);
        n->next=table[index];
        table[index]=n;
        cs++;
        float load_factor =cs/float(ts);
        if(load_factor>0.7){
            rehash(); 
        }
    }
    T* search(string key){
        int idx=hashFun(key);
        Node<T> * temp = table[idx];
        while (temp!=NULL)
        {
            if(temp->key==key){
                return &temp->value;
            }
            temp=temp->next;
        }
        return NULL;
        
    }
    T & operator [](string key){
        T * valueFound =search(key);
        if(valueFound==NULL){
            T object;
            inserst(key,object);
            valueFound=search(key);
        }
        return *valueFound;
    }

    void print(){
        for(int i=0;i<ts;i++){
            cout<<"bucket"<<i<<" ->";
            Node <T> *temp =table[i];
            while (temp!=NULL)
            {
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};