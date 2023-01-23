        else if(insert > end->data && insert < end->next->data){
            minsert = new node;
            minsert->data = insert;
            minsert->next = end->next;
            end->next = minsert;
            // end->next = minsert;
            break;
        }