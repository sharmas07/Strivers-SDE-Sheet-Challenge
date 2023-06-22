Node *rotate(Node *head, int k) {
    // get to last element
    Node* temp = head;
    int cnt = 0;
    while(temp->next != NULL){
        cnt++;
        temp = temp->next;
    }
    temp->next = head;
    k = k%(cnt+1);
    int pos = cnt - k;
    temp = head;
    while(pos){
        temp= temp->next;
        pos--;
    }
    Node* realHead = temp->next;
    temp->next = NULL;
    return realHead;

}