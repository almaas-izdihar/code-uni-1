#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to add a node to the end of the linked list
void append(struct Node** head_ref, int new_data) {
    // Allocate memory for a new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    // Assign the data to the new node
    new_node->data = new_data;
    // Set the next pointer to NULL as this will be the last node
    new_node->next = NULL;
    
    // If the linked list is empty, set the head to the new node
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    // Otherwise, traverse to the end of the linked list
    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    
    // Set the next pointer of the last node to the new node
    last->next = new_node;
}

// Function to delete a node from the linked list
void delete(struct Node** head_ref, int key) {
    // If the linked list is empty, return
    if (*head_ref == NULL) {
        return;
    }
    
    // If the head node contains the key, update the head to the next node
    if ((*head_ref)->data == key) {
        *head_ref = (*head_ref)->next;
        return;
    }
    
    // Otherwise, traverse through the linked list and find the node with the key
    struct Node* prev = NULL;
    struct Node* curr = *head_ref;
    while (curr != NULL && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }
    
    // If the key was not found, return
    if (curr == NULL) {
        return;
    }
    
    // Otherwise, set the next pointer of the previous node to the next node of the current node
    prev->next = curr->next;
    // Free the memory allocated for the current node
    free(curr);
}



// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;
    
    // Append some nodes to the linked list
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    delete(&head, 2);

    // Print the linked list
    printList(head);
    
    return 0;
}
