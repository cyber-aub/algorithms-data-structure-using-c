#include <stdio.h> // Include standard input/output header file
#include <stdlib.h> // Include standard library header file

typedef struct node { // Define a structure named "node" to represent a node in the linked list
  int number; // Data member to store the node's number
  struct node* next; // Pointer member to point to the next node in the linked list
} node;

int main(void) { // Entry point of the program

  node* list = NULL; // Initialize the head pointer to NULL, indicating an empty list
  node* n = malloc(sizeof(node)); // Allocate memory for a new node
  if (n == NULL) { // Check if memory allocation failed
    printf("Error allocating memory for new node\n"); // Print error message
    return 1; // Exit the program with an error code
  }

  n->number = 1; // Set the node's number
  n->next = NULL; // Set the node's next pointer to NULL, indicating the end of the list
  list = n; // Set the head pointer to the newly created node

  // Create and add the second node
  n = malloc(sizeof(node));
  if (n == NULL) { // Check if memory allocation failed
    free(list); // Free the previously allocated memory
    printf("Error allocating memory for new node\n"); // Print error message
    return 1; // Exit the program with an error code
  }

  n->number = 2;
  n->next = NULL;
  list->next = n; // Add the new node to the end of the list

  // Create and add the third node
  n = malloc(sizeof(node));
  if (n == NULL) { // Check if memory allocation failed
    free(list->next); // Free the previously allocated memory
    free(list); // Free the first node's memory
    printf("Error allocating memory for new node\n"); // Print error message
    return 1; // Exit the program with an error code
  }

  n->number = 3;
  n->next = NULL;
  list->next->next = n; // Add the new node to the end of the list

  // Print the numbers in the linked list
  for (node* tmp = list; tmp != NULL; tmp = tmp->next) {
    printf("%i\n", tmp->number); // Print the current node's number
  }

  // Free the memory allocated for the linked list nodes
  while (list != NULL) {
    node* tmp = list->next; // Save the next pointer before freeing the current node
    free(list); // Free the current node's memory
    list = tmp; // Update the head pointer to the next node
  }

  return 0; // Exit the program successfully
}
