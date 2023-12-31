Node* findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    
    
    unordered_set<Node*> st;
    while(head1 != NULL) {
       st.insert(head1);
       head1 = head1->next;
    }
    while(head2 != NULL) {
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;


}
