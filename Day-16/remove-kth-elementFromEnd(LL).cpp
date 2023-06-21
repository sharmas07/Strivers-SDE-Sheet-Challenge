Node* removeKthNode(Node* head, int K)
{
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    int pos = cnt - K;
    if(pos <= 0){
        head = head->next;
        return head;
    }
    Node* prev = head;
    Node* curr = head;
    while(pos > 0){     
        prev = curr;
        curr = curr->next;
        pos--;
    }
    prev->next = curr->next;
    return head;
}


