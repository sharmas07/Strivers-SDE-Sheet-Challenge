Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow -> next;
    }
    return slow;
}
