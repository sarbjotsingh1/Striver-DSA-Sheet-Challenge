//https://www.codingninjas.com/studio/problems/middle-of-linked-list_8230764?challengeSlug=striver-sde-challenge&leftPanelTab=0
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    Node* temp = head;
    int n = 0;
    while(temp != nullptr){
        n++;
        temp = temp->next;
    }
    for(int i = 0;i<n/2;i++){
        head = head->next;
    }
    return head;
}


