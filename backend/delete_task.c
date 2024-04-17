#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void deleteTask(Node *head, const char *date, const char *time, const char *description){
    
    Node *temp = *headNode, *prevNode = NULL;
    
    while (temp != NULL){
        if(strcmp(temp->taskData.date, date) == 0 && strcmp(temp->taskData.time, time) == 0 && strcmp(temp->taskData.description, description) == 0){ //to compare the wanted task to be deleted and the task to see if correct one
            if(prev = NULL){
                *headNode = temp->next; // Remove the node and updates the headNote pointer
            } else{
                prevNode->next = temp->next;
            }
            free(temp);
            return;
        }
        prevNode = temp;
        temp = temp->next
        
    }
    
}
