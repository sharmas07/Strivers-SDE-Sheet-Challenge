void insertAtTail(LinkedListNode<int>* &head, LinkedListNode<int>* &tail, int d){
    LinkedListNode<int>* newNode = new LinkedListNode<int>(d);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head) {
    //step 1 create a clone list
    LinkedListNode<int>* cloneHead = NULL;
    LinkedListNode<int>* cloneTail = NULL;
    
    LinkedListNode<int>* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp -> next;
    }
    
    //step 2 clonenodes add in between original nodes
    LinkedListNode<int>* originalNode = head;
    LinkedListNode<int>* cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode!= NULL){
        LinkedListNode<int>* next = originalNode->next;
        originalNode -> next = cloneNode;
        originalNode = next;
        
        next = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode = next;
    }
    
    // step 3 copy random ptrs
    temp = head;
    while(temp != NULL){
        if(temp -> next != NULL){
            temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;
        }
        temp = temp ->next->next;   
    }
    
    //step 3 revert changes done in step 2
    originalNode = head;
    cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode!= NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;
        if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
            
        }
        cloneNode = cloneNode -> next;
    }
    
    // step 5 return cloneHead
    return cloneHead;
}
