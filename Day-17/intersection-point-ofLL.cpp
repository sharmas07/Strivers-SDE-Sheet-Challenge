#include<unordered_map>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_map<Node*, bool> mp; //TC O(N+M) SC O(len(firstLL))
    Node* temp1 = firstHead;
    while(temp1 != NULL){
        mp[temp1] = true;
        temp1 = temp1->next;
    }
    Node* temp2 = secondHead;
    while(temp2 != NULL){
        if(mp[temp2] == true){
            return temp2;
        }
        else{
            temp2 = temp2->next;
        }
    }
    return NULL;
}

// -----------------------------------------------------

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //TC O(N+M) SC O(1)
    Node* temp1 = firstHead;
    Node* temp2 = secondHead;
    while(temp1 != temp2){
         temp1 = temp1==NULL?secondHead:temp1->next;
         temp2 = temp2==NULL?firstHead:temp2->next;
    }
    return temp1;
}