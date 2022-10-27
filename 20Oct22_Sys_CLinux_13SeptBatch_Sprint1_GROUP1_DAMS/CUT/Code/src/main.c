#include <common.h>
#include <patient.h>
#include <doctor.h>
#include <recep.h>

node *head=NULL;
docnode *dochead=NULL;
recepnode *recephead=NULL;
int main()
{
       
        char query,query2,query3,query4,query5,query6;
        while(1)
    {
        printf("***************************************************  Main Menu  **********************************************************\n\n\n");
        main_again:
            printf("1.I'm the Receptionist\n2.I'm the Doctor\n3.I'm the Admin\n4.Exit\n\n\n");
            scanf(" %c",&query);
            if(query=='1')
            {
                while(1)
                {
                    system("clear");
                    printf("****************************************************  Patient's Menu  ************************************************************\n\n\n");
                    printf("1.Place Appointment\n2.View particular Appointment\n3.View all Appointment\n4.Delete Appointment\n5.Update Appointment\n6.Back to main menu.\n\n\n");
                    char appoint1;
                    patient_again:
                        scanf(" %c",&appoint1);
                        if(appoint1=='1')
                        {
                            system("clear");
                            Appoint(head);
                        }
                        else if(appoint1=='2')
                        {
                            system("clear");
                            View(head);
                        }
                        else if(appoint1=='3')
                        {
                            system("clear");
                            Showlist(head);
                        }
                        else if(appoint1=='4')
                        {
                            system("clear");
                            Delete(head);
                        }
                        else if(appoint1=='5')
                        {
                            system("clear");
                            Update(head);
                        }
                        else if(appoint1=='6')
                        {
                            system("clear");
                            break;
                        }
                        else
                        {
                            printf("Wrong Command!!!\n\n");
                            goto patient_again;
                        }
                }
            }
            else if(query=='2')
            {
                while(1)
                {
                    system("clear");
                    printf("***************************************************  Doctor's Menu  **********************************************************\n\n\n");
                    printf("1.Show list\n2.Call next\n3.Back to main menu.\n\n\n");
                    scanf(" %c",&query2);
                    if(query2=='1')
                    {
                        system("clear");
                        Showlist(head);
                    }
                    else if(query2=='2')
                    {
                        system("clear");
                        Call(head);
                    }
                    else if(query2=='3')
                    {
                        system("clear");
                        break;
                    }
                    else
                    {
                        printf("Wrong Command!!!\n\n");
                        continue;
                    }
                }
            }
            else if(query=='3'){
                 while(1)
                 {
                    system("clear");
                    printf("***************************************************  Admin's Menu  **********************************************************\n\n\n");
                    printf("1.Doctor's Section\n2.Receptionist's Section\n3.Patient's Section\n4.Back to main menu.\n\n\n");
                    scanf(" %c",&query3);
            	    if(query3=='1')
                    {
                        system("clear");
                        printf("1.Add Doctor\n2.Update Doctor's Information\n3.View Doctor's Detail\n4.Back to main menu.\n\n\n");
                        scanf(" %c",&query4);
                        if(query4=='1'){
                            system("clear");
                            addDoc(dochead);
                        }
                        else if(query4=='2')
                        {
                            system("clear");
                            updateDoc(dochead);
                        }
                        else if(query4=='3')
                        {
                            system("clear");
                            viewDoc(dochead);
                        }
                        else if(query4=='4')
                        {
                            system("clear");
                            break;
                        }
                        else
                        {
                            printf("Wrong Command!!!\n\n");
                            continue;
                        }
                        
                    }
                    else if(query3=='2')
                    {
                        system("clear");
                        printf("1.Add Receptionist\n2.Update Receptionist's Information\n3.View Receptionist's Detail\n4.Back to main menu.\n\n\n");
                        scanf(" %c",&query5);
                        if(query5=='1'){
                            system("clear");
                            addRecep(recephead);
                        }
                        else if(query5=='2')
                        {
                            system("clear");
                            updateRecep(recephead);
                        }
                        else if(query5=='3')
                        {
                            system("clear");
                            viewRecep(recephead);
                        }
                        else if(query5=='4')
                        {
                            system("clear");
                            break;
                        }
                        else
                        {
                            printf("Wrong Command!!!\n\n");
                            continue;
                        }
                        
                    }
                    else if(query3=='3')
                    {
                        system("clear");
                        printf("1.Add Patient\n2.Update Patient's Information\n3.View Patient's Detail\n4.Back to main menu.\n\n\n");
                        scanf(" %c",&query6);
                        if(query6=='1'){
                            system("clear");
                            Appoint(head);
                        }
                        else if(query6=='2')
                        {
                            system("clear");
                            Update(head);
                        }
                        else if(query6=='3')
                        {
                            system("clear");
                            Showlist(head);
                        }
                        else if(query6=='4')
                        {
                            system("clear");
                            break;
                        }
                        else
                        {
                            printf("Wrong Command!!!\n\n");
                            continue;
                        }
                    }
                    else if(query3=='4')
                    {
                        system("clear");
                        break;
                    }
                    else
                    {
                        printf("Wrong Command!!!\n\n");
                        continue;
                    }
                 }
            }
            else if(query=='4'){
                system("clear");
                printf("\n\nThanks for Visiting :D !!\n\n\n");
                exit(0);
            }
            else
            {
                printf("Wrong Command!!!\n\n");
                goto main_again;
            }
    }
    return 0;
}
