//https://www.codingninjas.com/studio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;


    while(fast != nullptr && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    LinkedListNode<int> *prevNode = nullptr;
    LinkedListNode<int> *nextNode = nullptr;

    while(slow != nullptr){
        nextNode = slow->next;
        slow->next = prevNode;
        prevNode = slow;
        slow = nextNode;
    }
    while(prevNode != nullptr){
        if(prevNode->data != head->data)
            return false;
        prevNode = prevNode->next;
        head = head->next;
    }
    return true;
}
