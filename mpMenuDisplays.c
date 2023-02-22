#include <stdio.h>
#include <string.h>
#include "mpMenuFunctions.c"
void VaccRegMenu();
void VaccAppoint();
void DataMenu();
void AdminUserSubMenu();
void AdminAppointSubMenu();
void AdminChatbotSubMenu();

void 
FirstMenu()
{
    int nChoice = 0;

    while (nChoice != 3)
    {
        nChoice = 0;
        printf("\n--------------MAIN MENU------------------");
        printf("\n(1.) Vaccination Registration Menu");
        printf("\n(2.) Data Management Menu (Admins only)");
        printf("\n(3.) Exit the program.");
        printf("\n-----------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &nChoice);

        switch (nChoice)
        {
            case 1: VaccRegMenu(); break;
            case 2: DataMenu(); break;
            case 3: printf("\nExiting Program ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }
    }

}

void 
VaccRegMenu()
{
    int RegChoice = 0;
    //userID should be unique
    //Prompt user after succesful registration
    //User will be redirected to Vacc Registration Menu
    while (RegChoice != 4)
    {
        RegChoice = 0;
        printf("\n--------------VACCINATION REGISTRATION MENU------------------");
        printf("\n(1.) User Registration Menu");
        printf("\n(2.) Vaccination Appointment");
        printf("\n(3.) Chatbot (FAQS)");
        printf("\n(4.) Exit Menu");
        printf("\n-------------------------------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &RegChoice);

        switch (RegChoice)
        {
            case 1: printf("\nInsert User Registration Menu Here"); break;
            case 2: VaccAppoint(); break;
            case 3: printf("\nCHATBOT FAQ HERE"); break;
            case 4: printf("\nExiting Menu ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }
    }
}

void 
VaccAppoint()
{
    //3 unsuccessful attempts = terminates program
    int AppChoice = 0;

    while (AppChoice != 3)
    {   
        AppChoice = 0;
        printf("\n------------VACCINATION APPOINTMENT MENU------------");
        printf("\n(1.) Appointment Request");
        printf("\n(2.) Manage Appointment Menu");
        printf("\n(3.) Exit Menu");
        printf("\n----------------------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &AppChoice);

        switch (AppChoice)
        {
            case 1: printf("\nAppointment Req here"); break;
            case 2: printf("\nAppointment menu"); break;
            case 3: printf("\nExiting Menu ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }
    }
}

void 
DataMenu()
{
    int DataChoice = 0;
    //User must login with their userID and password. 3 unsucessful attempts = Program will terminate

    while (DataChoice != 6)
    {   
       
        printf("\n------------ADMIN DATA MENU------------");
        printf("\n1. User");
        printf("\n2. Manage Appointment Menu");
        printf("\n3. Chatbot");
        printf("\n4. Export");
        printf("\n5. Import");
        printf("\n6. Exit Menu");
        printf("\n---------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &DataChoice);

        switch (DataChoice)
        {
            case 1: AdminUserSubMenu(); break;
            case 2: AdminAppointSubMenu(); break;
            case 3: AdminChatbotSubMenu(); break;
            case 4: printf("\nExport"); break;
            case 5: printf("\nImport"); break;
            case 6: printf("\nExiting Menu ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }
    }
}

void 
AdminUserSubMenu()
{
    int nMenuChoice = 0;

    while (nMenuChoice != 5)
    {
        printf("\n------------1. USER SUBMENU------------");
        printf("\n1.(1) Add New User");
        printf("\n1.(2) View all Users");
        printf("\n1.(3) Edit User Details");
        printf("\n1.(4) Delete User");
        printf("\n1.(5) Exit");
        printf("\n---------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &nMenuChoice);

        switch (nMenuChoice)
        {
            case 1: printf("\nAdds new user"); break;
            case 2: printf("\nViews all user"); break;
            case 3: printf("\nEdit user details here"); break;
            case 4: printf("\nDeletes user"); break;
            case 5: printf("\nExiting Menu ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }
    }
}

void 
AdminAppointSubMenu()
{
    
    int nAppointChoice = 0;

    while (nAppointChoice != 5)
    {
        nAppointChoice = 0;
        printf("\n------------2. APPOINTMENT SUBMENU------------");
        printf("\n1.(1) Add New Appointment");
        printf("\n1.(2) View all Appointments");
        printf("\n1.(3) Edit Appointment");
        printf("\n1.(4) Delete Appointment");
        printf("\n1.(5) Exit");
        printf("\n---------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &nAppointChoice);

        switch (nAppointChoice)
        {
            case 1: printf("\nAdds new appointment"); break;
            case 2: printf("\nViews all appointments"); break;
            case 3: printf("\nEdit appointment details here"); break;
            case 4: printf("\nDeletes appoinment"); break;
            case 5: printf("\nExiting Menu ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }    
    }

    
        
}

void 
AdminChatbotSubMenu()
{
    int nChatChoice = 0;

    while (nChatChoice != 5)
    {
        nChatChoice = 0;
        printf("\n------------3. CHATBOT SUBMENU------------");
        printf("\n1.(1) Add New Question and Answer");
        printf("\n1.(2) View all Questions and Answers");
        printf("\n1.(3) Edit Questions and Answers");
        printf("\n1.(4) Delete Questions and Answers");
        printf("\n1.(5) Exit");
        printf("\n---------------------------------------");
        printf("\nEnter your choice: ");
            scanf("%d", &nChatChoice);
    
    
        switch (nChatChoice)
        {
            case 1: printf("\nAdd New Question and Answer"); break;
            case 2: printf("\nViews all Questions and Answers"); break;
            case 3: printf("\nEdited Questions and Answers"); break;
            case 4: printf("\nDelete the Questions and Answers"); break;
            case 5: printf("\nExiting Menu ..."); break;
            default: printf("\nInvalid option. Please pick again."); break;
        }
    }
}
