#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    Node* slow=head;//slow pointer jumps 1 unit at a time
    Node* fast=head; //fast pointer jumps 2 units at a time
    while(fast->next!=NULL){ //till fast pointer goes to NULL
        fast=fast->next;
        slow =slow->next;
        if(fast->next!=NULL)fast=fast->next;
    }
    //when fast pointer reaches to NUll slow pointer reaches to middle 
    return slow;
}