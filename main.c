#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void Display_Menu();
void Show_Courses();
int main()
{
    int id;
    int NumberOfCourses;
    int CreditHours;
    int TotalCreditHours;
    char CourseGrade;
    float GPA = 0.0;
    float GradePoint;
    float Total = 0.0;

    bool isHalfLoad = false;

    printf("Welcome To AASTMT Transcript System \n");

    printf("Enter Your ID : ");
    scanf("%d",&id);

    //printf("Enter How Many Courses You Took : ");
    //scanf("%d",&NumberOfCourses);


    for (int i = 1;i <= 6;i++)
    {
        printf("Enter Your Grade In Course %d \t",i);
		printf("Credit Hours\n");
        scanf("%s",&CourseGrade);
		scanf("%d",&CreditHours);

        if (CourseGrade == 'A+')
        {
            GradePoint = 12.0f;
        }
        else if (CourseGrade == 'A')
        {
            GradePoint = 11.5f;
        }
        else if (CourseGrade == 'A-')
        {
            GradePoint =11.0f;
        }
        else if (CourseGrade == 'B+')
        {
            GradePoint = 10.0f;
        }
        else if (CourseGrade == 'B')
        {
            GradePoint = 9.0f;
        }
        else if (CourseGrade == 'B-')
        {
        	GradePoint = 8.0f;
        }
        else if (CourseGrade == 'C+')
        {
            GradePoint = 7.0f;
        }
        else if (CourseGrade == 'C')
        {
            GradePoint = 6.0f;
        }
        else if (CourseGrade == 'C-')
        {
            GradePoint = 5.0f;
        }
        else if (CourseGrade == 'D+')
        {
            GradePoint = 4.0f;
        }
        else if (CourseGrade == 'D')
        {
            GradePoint = 3.0f;
        }
        else if (CourseGrade == 'F')
        {
            GradePoint = 0.0f;
        }
        Total += GradePoint;
        TotalCreditHours += CreditHours;
    }
    GPA = Total / TotalCreditHours;
    printf("%1.2f\n",GPA);


    if (GPA <= 2.0)
    {
        printf("\n");
        printf("Sorry, You Are Half Load Now !");
        isHalfLoad = true;
    }

    int Choice;

    do {
        Display_Menu();
        scanf("%d",&Choice);
        if (Choice == 1)
        {
            int Selected_Course;
            if(isHalfLoad)
            {
                printf("\n You are allowed to select 4 courses only \n");
                Show_Courses();
                for (int i = 1; i <= 4;i++)
                {
                    scanf("%d",&Selected_Course);
                }
                printf("\n Your Advising Is Done Successfully :) \n");
            }
            else
            {
                printf("\n You are allowed to select 6 courses only \n");
                Show_Courses();
                for (int i = 1; i <= 6;i++)
                {
                    scanf("%d",&Selected_Course);
                }
                printf("\n Your Advising Is Done Successfully :) \n");
            }
        }
        else if(Choice == 2)
        {
            if(isHalfLoad)
            {
                printf("Student ID : %d",id);
                printf("\nTotal Advised Courses is 4 \n");
                printf("Tution Fees For 1 Credit Hour is 2,000 EGP \n");
                printf("Tution Fees For Next Semester IS : 32,000 EGP\n");
            }
            else
            {
                printf("Student ID : %d",id);
                printf("\nTotal Advised Courses is 6 \n");
                printf("Tution Fees For 1 Credit Hour is 2,000 EGP \n");
                printf("Tution Fees For Next Semester IS : 48,000 EGP\n");
            }
        }

    } while (Choice != 3);



    return 0;
}

void Display_Menu()
{
    printf("\n ***** Choose From The Menu Below ***** \n");
    printf("1- Courses Registeration \n");
    printf("2- Transcript \n");
    printf("3- Exit \n");
}

void Show_Courses()
{
    printf("1- Mathematics IV (BA224) \n");
    printf("2- Instrumentation & Measurements (EE2218) \n");
    printf("3- Electrical Machines (EE339) \n");
    printf("4- Thermodynamics II (ME333) \n");
    printf("5- Stress Analysis (ME276) \n");
    printf("6- Manufacturing Process (IM212) \n");
    printf("7- Programming Applications (CC213) \n");

}
