/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        Node* slow=head;
        Node* fast=head;
        while(fast !=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                Node* a=head;
                Node* b=slow;
                while(a !=b){
                    a=a->next;
                    b=b->next;
                }
                Node* s=a;
                while(s->next !=b){
                    s=s->next;
                }
                s->next=NULL;
                
            }
        }
        
        
        
    }
};