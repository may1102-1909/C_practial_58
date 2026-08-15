
#include <stdio.h>
                    //lets start with giving names for variables

int main()
{   
    int rollNo[100];
    char name[100][50];
    int age[100];
    char course[100][50];
    float percentage[100];

    int count = 0;
    int choice;
    int i;
    int searchRoll;
    int found;

    do
    {
        printf("\n========== STUDENT MENU ==========\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("==================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
          //we'll take switch case for this assignment
          switch(choice)
        { 
            //to add the details of student 
            case 1:
                if(count >= 100)
                {
                    printf("Student record limit reached.\n");
                    break;
                }      
                //if the count reaches ==100 then it will show record reached

                printf("\nEnter Roll Number: ");
                scanf("%d", &rollNo[count]);

                printf("Enter Name: ");
                scanf("%s", name[count]);

                printf("Enter Age: ");
                scanf("%d", &age[count]);

                printf("Enter Course: ");
                scanf("%s", course[count]);

                printf("Enter Percentage: ");
                scanf("%f", &percentage[count]);

                count++;

                printf("\nStudent Record Added Successfully.\n");
                break;


            case 2:
              //if no data is added then it will show smth like this 
                if(count == 0)
                {
                    printf("\nNo student records available.\n");
                }
                else
                {
                    printf("\n========== ALL STUDENTS ==========\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", rollNo[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Age         : %d\n", age[i]);
                        printf("Course      : %s\n", course[i]);
                        printf("Percentage  : %.2f\n", percentage[i]);
                        printf("----------------------------------\n");
                    }
                }
                break;


            case 3:
                printf("\nEnter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(rollNo[i] == searchRoll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", rollNo[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Age         : %d\n", age[i]);
                        printf("Course      : %s\n", course[i]);
                        printf("Percentage  : %.2f\n", percentage[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nStudent not found.\n");
                }

                break;


            case 4:
                printf("\nExiting the application...\n");
                break;


            default:
                printf("\nInvalid choice. Please try again.\n");
        }
        // this was the whole student inventory code using 4 diff case ;
    } while(choice != 4);

    return 0;
}