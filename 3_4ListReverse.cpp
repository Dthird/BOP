#include <iostream>

using namespace std;

struct Node{
    int content;
    Node *next;
};

Node* createList(){
    int x;
    Node *head = NULL;
    cin >> x;
    while(x != 0){
        if(head == NULL){
            Node * p = new Node;
            p->content = x;
            p->next = NULL;
            head = p;
        }
        else{
            Node * p = new Node;
            p->content = x;
            p->next = head;
            head = p;
        }
        cin >> x;
    }   
    return head;
}

Node* reverseList(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(curr != NULL){
        prev = curr;
        next = curr->next;
        curr->next = prev;
        curr = next;
    }
    head = prev;
    return head;
}

void showList(Node *head){
    for(Node*p = head ; p != NULL ; p=p->next){
        cout << p->content << " ";
    }
    cout << endl;
}

void deleteList(Node *head){
    for(Node *p=head ; p != NULL ; ){
        Node *q = p;
        p = p->next;
        delete q;
    }
}

int main(){
    Node *head = createList();
    showList(head);
    head = reverseList(head);
    showList(head);
    deleteList(head);
    return 0;
}
