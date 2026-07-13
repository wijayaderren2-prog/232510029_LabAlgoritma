#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
};

Node *head=NULL;
Node *tail=NULL;

void tambah(int nilai){

    Node *baru = new Node;

    baru->data = nilai;
    baru->next = NULL;
    baru->prev = NULL;

    if(head==NULL){

        head=tail=baru;

    }else{

        tail->next=baru;
        baru->prev=tail;
        tail=baru;

    }

}

void tampilDariHead(){

    Node *bantu=head;

    cout<<"Data dari Head : ";

    while(bantu!=NULL){

        cout<<bantu->data<<" ";

        bantu=bantu->next;
    }

    cout<<endl;

}

void tampilDariTail(){

    Node *bantu=tail;

    cout<<"Data dari Tail : ";

    while(bantu!=NULL){

        cout<<bantu->data<<" ";

        bantu=bantu->prev;
    }

    cout<<endl;

}

int main(){

    tambah(24);
    tambah(10);
    tambah(33);
    tambah(33);

    tampilDariHead();

    tampilDariTail();

    return 0;
}
