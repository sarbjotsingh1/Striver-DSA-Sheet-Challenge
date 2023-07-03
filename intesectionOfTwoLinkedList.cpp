//https://www.codingninjas.com/studio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge&leftPanelTab=0
/****************************************************************

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

*****************************************************************/
#include<bits/stdc++.h>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node* firstPointer = firstHead;
    Node* secondpointer = secondHead;
    set<Node*> s;
    while(firstPointer != nullptr){
        s.insert(firstPointer);
        firstPointer = firstPointer->next;
    }
    while(secondpointer != nullptr){
        if(s.count(secondpointer))
            return secondpointer;
        secondpointer = secondpointer->next;
    }
    return firstPointer;
}
