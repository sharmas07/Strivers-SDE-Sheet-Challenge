Node *firstNode(Node *head)
{
    if(head == NULL) return NULL;
    if(head->next == head) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL) fast = fast->next;
        if(slow == fast){
            fast = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
