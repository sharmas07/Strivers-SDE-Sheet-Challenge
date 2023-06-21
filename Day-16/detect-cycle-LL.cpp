bool detectCycle(Node *head)
{
	if(head == NULL) return false;
    if(head->next == head) return true;
    Node* slow = head;
    Node* fast = head->next;
    bool isPresent = false;
    while(slow != NULL && fast!=NULL){
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL) fast = fast->next;
        if(slow == fast){
            isPresent = true;
            return isPresent;     
        }
    }
    return isPresent;
}