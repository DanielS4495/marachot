#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<<<<<<< HEAD
#include "StrList.h"

int main() {
    char temp[1000]; // Assuming maximum 1000 strings in the list
    StrList *list = StrList_alloc();
    StrList_free(list); 
    int size = 0,index = 0, ascii_code = 0;
    char words;
    char choice[3] = {1};
=======

int main() {
    char *temp[1000]; // Assuming maximum 1000 strings in the list
    char *list[] = StrList_alloc();
    StrList_free(list); 
    int size = 0,index = 0;
    char choice,words;
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
    // Display menu
    printf("\nMenu:\n");
    printf("1. Add strings to list\n");
    printf("2. Insert string at index\n");
    printf("3. Print list\n");
    printf("4. Print list length\n");
    printf("5. Print string at index\n");
    printf("6. Print number of characters appearing in the list\n");
    printf("7. Print number of occurrences of a string\n");
    printf("8. Remove all occurrences of a string\n");
    printf("9. Remove string at index\n");
    printf("10. Reverse list\n");
    printf("11. Clear list\n");
    printf("12. Sort list\n");
    printf("13. Check if list is sorted\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");

<<<<<<< HEAD
    while(choice[0] != '0'){
        scanf("  %2s", choice);
        // if(choice[1]!='\0')
        // ascii_code = (int)choice[0] * 10 + (int)choice[1];
        // else ascii_code = (int)choice[0];
        ascii_code = atoi(choice);
        if(choice[2]!='\0'||(ascii_code > 47 && ascii_code < 62)){
            printf("Invalid choice. Please try again.\n");
            break;
        }
        if(choice[0] == '0'){
            printf("Exiting program.\n");
            break;
        }
        // Perform action based on user choice
        switch((int)choice[0]) {
            case 49:
                if(choice[1]=='\0'){
                scanf(" %c", &words);
                if(words-(int)'A' != 0){
                    printf("Invalid choice 1. Please try again.\n"); 
                    break;
                }
=======
    while(choice != 0){
        scanf(" %c", &choice);
        // Perform action based on user choice
        switch(choice) {
            case '1':
                scanf(" %c", &words);
                if(words-'A'==0)
                    printf("Invalid choice. Please try again.\n"); break;
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
                scanf(" %d",&size);
                for(int i=0;i<size;i++){
                    scanf(" %s", temp);
                    StrList_insertLast(list,temp);
                }
                break;
<<<<<<< HEAD
                }
                if (choice[1]=='0')
                {
                    // Reverse list
                    StrList_reverse(list);
                    break;
                }
                if (choice[1]=='1')
                {
                    // Clear list
                    StrList_free(list);
                    break;
                }
                if (choice[1]=='2')
                {
                   // Sort list
                    StrList_sort(list);
                    break;
                }
                if (choice[1]=='3')
                {
                   // Check if list is sorted
                    StrList_isSorted(list);
                    break;
                }
            case 50:
                // Insert string at index
                scanf(" %d %[\n]s", &index, temp);
                StrList_insertAt(list,temp,index);
                break;
            case 51:
                StrList_print(list);
                break;
            case 52:
                size = StrList_size(list);
                printf("The size of List is %d",size);
                break;
            case 53:
=======
            case '2':
                // Insert string at index
                scanf(" %d %[^\n]s", &index, temp);
                StrList_insertAt(list,temp,index);
                break;
            case '3':
                StrList_print(list);
                break;
            case '4':
                size = StrList_size(list);
                printf("The size of List is %d",size);
                break;
            case '5':
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
                // Print string at index
                scanf(" %d", &index);
                StrList_printAt(list,index);
                break;
<<<<<<< HEAD
            case 54:
=======
            case '6':
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
                // Print occurrences of chars
                size = StrList_printLen(list);
                printf("The size of char in the List is %d",size);
                break;
<<<<<<< HEAD
            case 55:
                // Print occurrences of string
                scanf(" %[\n]s", temp);
                StrList_count(list,temp);
                break;
            case 56:
                // Remove occurrences of string
                scanf(" %[\n]s", temp);
                StrList_remove(list,temp);
                break;
            case 57:
=======
            case '7':
                // Print occurrences of string
                scanf(" %[^\n]s", temp);
                StrList_count(list,temp);
                break;
            case '8':
                // Remove occurrences of string
                scanf(" %[^\n]s", temp);
                StrList_remove(list,temp);
                break;
            case '9':
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
                // Remove string at index
                scanf(" %d", &index);
                StrList_removeAt(list,index);
                break;
<<<<<<< HEAD
            // case 58:
            //     // Reverse list
            //     StrList_reverse(list);
            //     break;
            // case 59:
            //     // Clear list
            //     StrList_free(list);
            //     break;
            // case 60:
            //     // Sort list
            //     StrList_sort(list);
            //     break;
            // case 61:
            //     // Check if list is sorted
            //     StrList_isSorted(list);
            //     break;
            // case 48:
            //     printf("Exiting program.\n");
            //     break;
            default:
                printf("Invalid choice 2. Please try again.\n");
=======
            case '10':
                // Reverse list
                StrList_reverse(list);
                break;
            case '11':
                // Clear list
                StrList_free(list);
                break;
            case '12':
                // Sort list
                StrList_sort(list);
                break;
            case '13':
                // Check if list is sorted
                StrList_isSorted(list);
                break;
            case '0':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
        
        } 
    }
    return 0;

<<<<<<< HEAD
}
=======
}
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b
