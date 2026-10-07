#include <stdio.h>
#include <stdlib.h>

int main()
{
    char student_regnumber[100];
    char student_name[100];
    float student_marks;
    char student_grade;
    int students_no;

    //get the nember of students
    printf("Enter the Number of Students: ");
    scanf("%i", &students_no);

    for (int i=0; i<students_no; i++){
    //get the students name
    printf("Enter the Name: \n");
    scanf(" %99[^\n]", student_name);

    //get the students registration number
    printf("Enter %s's registration number:\n", student_name);
    scanf(" %99[^\n]", student_regnumber);

    //get the students marks
    printf("\nEnter (%s %s)'s marks: ", student_name, student_regnumber);
    scanf("%f", &student_marks);

    //validate the marks entered
    if (student_marks<0.0 || student_marks>100.00){
        printf("\nINVALID! Marks must be between 0 aond 100.\n");
        continue;
    }

    //calculate the student grade from the marks using switch case statements
    switch ((int)student_marks/10){}
        case 10:
        case 9:
        case 8:
        case 7:
            student_grade = 'A';
            break;
        case 6:
            student_grade = 'B';
            break;
        case 5:
            student_grade = 'C';
            break;
        case 4:
            student_grade = 'D';
            break;
        default:
            student_grade = 'F';
            break;
    }

//display the student information
    printf("\n -------------------------\n");
    printf("     STUDENT INFORMATION     \n");
    printf(" -------------------------\n");
    printf("Registration No: %s\n", student_regnumber);
    printf("Name: %s\n", student_name);
    printf("Marks: %.2f\n", student_marks);
    printf("Grade: %c\n", student_grade);


    //overall pass or fail
    if (student_marks>=40.0){
        printf("STATUS: PASSED\n");
    }else{
    printf("STATUS: FAILED\n");
    }

    printf("\n -------------------------\n");

    }
    return 0;
}
