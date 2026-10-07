#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
   int correctpin = 1234;
   int user_choice;
   int max_attempts = 3;
   int login_attempts = 0;


   int userpin;
   while(1){
   printf("Enter the 4 numerical digit PIN: ");
   scanf("%i", &userpin);
   if (userpin<=999){
    printf("PIN is too short (must be 4 digits)\n");
   } else if(userpin>9999){
   printf("PIN is too long (must be 4 digits)\n");
   }else{
   printf("PIN is exactly 4 digits\n");
   }

   if (userpin == correctpin){
    printf("Access Granted.\n");
    break;
   }else{
       login_attempts ++;
       printf("Wrong PIN, Access DENIED! (%d/%d login_attempts)\n", login_attempts, max_attempts);

       if (login_attempts >= max_attempts){
        printf("Sytem locked! Wait for 5 seconds...\n");

        for (int i=5; i>=1; i--){
            printf("%d...", i);
            fflush(stdout);
            Sleep(1000);
        }
        printf("\n You can try again now.\n\n");
        login_attempts = 0;
       }
      }
    }

    printf("===DEVICE MENU===\n");
    printf("1. Open Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");

    printf("Choose an option (1-4):  ");
    scanf("%i", &user_choice);

    switch (user_choice){
        case 1:
            printf("Access granted,\n Door unlocked.\n");
            break;
        case 2:
            printf("Change username feature coming soon.\n");
            break;
        case 3:
            printf("Change PIN feature coming soon.\n");
            break;
        case 4:
            printf("Exiting system.\n");
            break;
        default:
            printf("Invalid option! Please try again.");

            }
   return 0;
        }
