#include <common.h>
#include <recep.h>

extern recepnode *recephead;

void addRecep(recepnode *receppointer){
    printf("*******************************************  Receptionist's Detail Addition Portal  ************************************************\n\n\n");
    int srl=1;
    char key;
    
    if(receppointer==NULL){
        recephead=(recepnode*)malloc(sizeof(recepnode));
        receppointer=recephead;
        receppointer->next=NULL;  
        printf("Enter Receptionist's name: ");
        getchar();
        gets(receppointer->name);
        phone_tag1:
        printf("Enter Receptionist's Mobile Number: ");
        gets(receppointer->phone);
          
     }
     else{
        while(receppointer->next!=NULL)
        {
            receppointer=receppointer->next;
        }
        receppointer->next=(recepnode*)malloc(sizeof(recepnode));
	receppointer=receppointer->next;
	receppointer->next=NULL;
	printf("Enter Receptionist's name: ");
        getchar();
        gets(receppointer->name);
        phone_tag:
        printf("Enter Receptionist's Mobile Number: ");
        gets(receppointer->phone);
       
      }
    
        int len=strlen(receppointer->phone);
        if(len!=10)
        {
            printf("Invalid Mobile Number. Try again\n");
            goto phone_tag1;
        }
        int i;
        for(i=0;receppointer->phone[i]!='\0';i++)
        {
            if(receppointer->phone[i]<'0' || receppointer->phone[i]>'9')
            {
                 printf("Invalid Mobile Number. Try again\n");
                 goto phone_tag1;
            }
        }
        receppointer->serial=srl;
        srl++;
        printf("\n\nReceptionist's detail added Successfully\n\n");
        printf("Press any key to continue...");
        scanf("%c",&key);
        if(key>=0){
          return;
        }
}



void updateRecep(recepnode *receppointer){
    int updt;
    char key;
    printf("*************************************************  Receptionist's detail Updation Portal  ******************************************************\n\n\n");
    printf("Enter Receptionist's serial no: ");
    scanf(" %d",&updt); 
    if(receppointer==NULL){
       printf("\n\nNo Record Found!!!\n\n\n");
       return;
    }
    else{
       while(receppointer->serial != updt){
          receppointer=receppointer->next;
       }
        printf("Update Receptionist's name: ");
        getchar();
        gets(receppointer->name);
        phone_tag1:
        printf("Update Receptionist's Mobile Number: ");
        gets(receppointer->phone);
        printf("\n\nReceptionist's detail Updation Successful!!!\n\n");
     
        int len=strlen(receppointer->phone);
        if(len!=10)
        {
            printf("Invalid Mobile Number. Try again\n");
            goto phone_tag1;
        }
        int i;
        for(i=0;receppointer->phone[i]!='\0';i++)
        {
            if(receppointer->phone[i]<'0' || receppointer->phone[i]>'9')
            {
                 printf("Invalid Mobile Number. Try again\n");
                 goto phone_tag1;
            }
        }
        printf("Press any key to continue...");
        scanf("%c",&key);
        if(key>=0){
           return;
        }
     }
}



void viewRecep(recepnode *receppointer){
    printf("*************************************************  Receptionist's list Portal ******************************************************\n\n\n");
    if(receppointer==NULL)
    {
        printf("No Record Found!!!\n\n\n");
        return;
    }
    while(receppointer!=NULL)
    {
        printf("%d: ",receppointer->serial);
        printf("%s (Ph: %s )\n\n",receppointer->name,receppointer->phone);
        receppointer=receppointer->next;
    }
    printf("\n\n\n\Press any key to go back : ");
    char key;
    getchar();
    scanf("%c",&key);
    if(key>=0)
    {   
        return;
    }
}
