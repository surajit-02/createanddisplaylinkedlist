#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node;


    void displayList(Node* head);
	

int main(void){
	int i,numnode,ch,data;
	Node *head,*newnode,*temp=NULL;
	head=NULL;
	printf("Enter the number of nodes:");
	scanf("%d",&numnode);
	printf("\n");
	for(i=0;i<numnode;i++){
		newnode=(Node*)malloc(sizeof(Node));
		printf("Enter the data for node %d:",i+1);
		scanf("%d",&newnode->data);
			newnode->next = NULL;
		if(head==NULL){
			head=newnode;
			temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		
	}
	do{
		 
	
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{

			case 1:
				 displayList(head);
				break;
			default:
                printf("Invalid choice. Please try again.\n");	
		}
	}while(ch!='4');
		
	/*whilehead != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }*/
    return 0;
}

void displayList(Node* head) {
	
    Node* temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
        
    }
    printf("NULL\n");

}
