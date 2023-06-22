
LinkedListNode<int>*rev(LinkedListNode<int>*head){
    LinkedListNode<int>*curr = head;
    LinkedListNode<int>*prev = NULL;
    LinkedListNode<int>*next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    
    
}
LinkedListNode<int>*getMid(LinkedListNode<int>*head){
    LinkedListNode<int>*slow = head;
    LinkedListNode<int>*fast = slow ->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // if(head == NULL) return true;
    // // Write your code here.
    // vector<int> arr;
    // while(head != NULL){
    //     arr.push_back(head->data);
    //     head=head->next;
    // }
    // int start = 0;
    // int end = arr.size()-1;
    // while(start <= end){
    //     if(arr[start] == arr[end]) {
    //         start++;
    //         end--;
    //     }
    //     else {
    //       return false;
    //     }
    // }
    // return true;

    //optimal
    LinkedListNode<int>* mid = getMid(head);
    LinkedListNode<int>* temp = mid -> next;
    mid -> next = rev(temp);
    
    LinkedListNode<int>* h1 = head;
    LinkedListNode<int>* h2 = mid->next;
    while(h2 != NULL){
        if(h1->data != h2->data){
            return 0;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    return 1;


}