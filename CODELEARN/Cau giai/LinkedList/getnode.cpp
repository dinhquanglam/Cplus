#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *createNode(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}
void *printList(node *l){
    node *p = l;
    while(p->next != NULL){
        cout << p->next << " ";
        p = p->next;
    }
}
node *addElement(node *p, int x){
    node *temp = createNode(x);
    p->next = temp;
    return temp;
}
node *getNode(node *l, int k){
    node *p = l;
    for(int i=0;i<k;i++){
        p=p->next;
    }
    return p;
}
int main(){
    int n,x,k;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i=1;i<n;i++){
        cin >> x;
        p = addElement(p,x);
    }

cin >> k;
p = getNode(l,k);
cout << p->data;
return 0;
}
