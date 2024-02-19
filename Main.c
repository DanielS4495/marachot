#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *list[10000],*temp[100]; // Assuming maximum 100 strings in the list
    int size = 0,index = 0;
    char choice,words;
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

    while(choice != 0){
        scanf(" %c", &choice);
        // Perform action based on user choice
        switch(choice) {
            case '1':
                scanf(" %c", &words);
                if(words-'A'==0)
                    printf("Invalid choice. Please try again.\n"); break;
                scanf(" %d",&size);
                for(int i=0;i<size;i++){
                    scanf(" %s", temp);
                    StrList_insertLast(list,temp);
                }
                break;
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
                // Print string at index
                scanf(" %d", &index);
                StrList_printAt(list,index);
                break;
            case '6':
                // Print occurrences of chars
                size = StrList_printLen(list);
                printf("The size of char in the List is %d",size);
                break;
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
                // Remove string at index
                scanf(" %d", &index);
                StrList_removeAt(list,index);
                break;
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
        
        } 
    }
    return 0;

}