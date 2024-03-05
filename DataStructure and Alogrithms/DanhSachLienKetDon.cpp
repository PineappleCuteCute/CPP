#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node *createNode(int x){
    node *temp = new node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}

void printList(node *l){
    node *p = l;
    while(p!=NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

node * addElement(node *p, int x){
    node *temp = createNode(x);
    p->next = temp;
    return temp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, x;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i = 1; i < n; i++){
        cin >> x;
        p = addElement(p, x);
    }
    printList(l);
    return 0;
}