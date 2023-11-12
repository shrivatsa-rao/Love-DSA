#include<iostream>

using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void inserthead(node *&head,node *&tail,int data){
    if(head==NULL){
        node *newnode=new node(data);
        head=newnode;
        tail=newnode;

    }
    else
    {
        node *newnode=new node(data);
        node *temp;
        temp=newnode;
        temp->next=head;
        head=newnode; 
    }


}

void inserttail(node* &head,node* &tail,int data){
    node* newnode=new node(data);
    node *temp=newnode;
    tail->next=temp;
    tail=temp;


}

void insertmiddle(node* &head,node* &tail,int data,int pos){
    node* newnode=new node(data);
    node *cur=head;
    node *prev=NULL;
    while(pos!=1){
        prev=cur;
        cur=cur->next;
        pos--;
    }
    prev->next=newnode;
    newnode->next=cur;

}

void print(node * &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

}

void count(node *&head){
    node*temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    cout<<endl;
    cout<<"the number of nodes are"<<c<<endl;


}


int main(){
    node *head=NULL;
    node *tail=NULL;
    inserthead(head,tail,10);
    inserthead(head,tail,20);
    inserthead(head,tail,3000);
    insertmiddle(head,tail,89999000,3);
    print(head);
    count(head);

}