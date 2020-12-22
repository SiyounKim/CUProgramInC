/*
    Created by Siyoun Kim on 07/15/2020
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node{ // used typedef for the convenience
    int data;          // Data
    struct node *next; // Address
} node;
void insertFront(node **head, int newData);
void insertEnd( node *head, int newData);
void deleteNode(node *head, int data);
void printList(node *head);
void writeToFile(FILE *fptr, node *head);


int main()
{
    FILE *fptr;
    fptr = fopen("SampleOutput_FileIO.txt", "w");
    node *head = NULL;
    insertFront(&head, 5);//&head point to node
    insertFront(&head, 4);
    insertFront(&head, 3);
    printList(head);
    writeToFile(fptr, head);

    insertEnd(head, 6);
    insertFront(&head, 2);// called here on purpose
    insertEnd(head, 7);
    printList(head);
    writeToFile(fptr, head);


    deleteNode(head, 3);
    deleteNode(head, 6);
    deleteNode(head, 5);
    printList(head);
    writeToFile(fptr, head);

    fclose(fptr);
    return 0;
}

void deleteNode(node *head, int newData) /*referenced from the class slide*/
{
    /* Go to the node for which the node after it has to be deleted */
    while(head->next==NULL&&(head->next)->data!=newData)
    {
        head = head->next;
    }
    if(head->next==NULL)
    {
        printf("Element %d is not present in the list\n", newData);
        return;
    }
/* Now pointer points to a node and the node next to it has to be removed */
    node *temp = head->next;//temp points to the node which has to be removed//
    head->next = temp->next;
    free(temp); // remove the node

    return;
}

void insertFront(node** head, int newData) //node** is pointer to pointer
{
    node* temp = NULL; //set temp to has no value
    temp = (node*)malloc(sizeof(node));//do type-casting because it's a void function
    if(temp == NULL)
    {
        printf("error in inserting element at front");
        return;
    }
    temp->data= newData; //putting the new data value to the node
    temp->next= *head; //linking the address to the other node
    *head = temp; //inserting the new value into the front
}

void insertEnd(node* head, int newData) /*referenced from the class slide*/
{
    while(head->next!=NULL){
        head =head->next;
    }
    head->next = (node*)malloc(sizeof(node));
    head = head->next;
    head->data= newData;
    head->next=NULL;
}
// function to print list to console
void printList(node *head)
{
    printf("List is:");
    while(head!=NULL)
    {
        printf(" %d ", head->data);
        head = head->next; //traverse next list to print
    }
    printf("\n");
}

// function to print list to file
void writeToFile(FILE *fptr, node *head)
{
    fprintf(fptr,"List is: ");
    while(head!=NULL)
    {
        fprintf(fptr," %d ", head->data);
        head= head-> next;
    }
    fprintf(fptr, "\n");
}