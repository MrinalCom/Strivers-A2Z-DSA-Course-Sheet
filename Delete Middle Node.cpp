Node* deleteMiddle(Node* head){
    // Write your code here.
     if(head->next==nullptr){
        return nullptr;
    }
    int len=0;
    Node*temp=head;
    Node*start=head;
    Node*we=start;
    int go=0;
    while(temp!=nullptr)
    {
        temp=temp->next;
        len++;
    }
    int move=1;
    
        while(move!=len/2){
            start=start->next;
            move++;
        }
        start->next=start->next->next;
        return we;
        
    

    
}
