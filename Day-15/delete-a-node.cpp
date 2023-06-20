// code studio question

void deleteNode(LinkedListNode<int> * node) {
    swap(node->data, node->next->data);
    LinkedListNode<int> * temp = node->next;
    node->next = temp->next;
    delete temp;
}