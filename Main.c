#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StrList.h"

int main() {
    StrList *list = StrList_alloc();
    int size = 0,index = 0, ascii_code = 0;
    char choice[3] = {'1','0','0'};
    char temp[10000]; // Assuming maximum 10000 chars in a word
    while(choice[0] != '0'){
        scanf(" %2s", choice);
        // Check if the length of the choice is valid
        if (choice[1] == '\0') {
            // Calculate the ASCII code based on the first character of the choice
            ascii_code = (int)choice[0];
        }
        else if (strlen(choice) == 2) {
            // Calculate the ASCII code if two characters were entered
            ascii_code = (int)choice[1] + 10;
        }else{
            // Invalid choice length
            printf("Invalid choice 1ength. Please try again.\n");
            break;
        }
        // Check if the ASCII code is within the valid range
        if (ascii_code < 48 && ascii_code > 61) {
            printf("Invalid choice from Menu. Please try again.\n");
            break;
        }
        // Perform action based on user choice
        switch(ascii_code) {
            case 49:
                scanf(" %d",&size);
                getchar();
                fgets(temp, sizeof(temp), stdin);
                char *token = strtok(temp, " \n");
                while (token != NULL && size > 0) {
                    // Insert each word into the list
                    StrList_insertLast(list,token);
                    token = strtok(NULL, " \n");
                    size--;
                }
                break;
            case 50:
                // Insert string at index
                scanf(" %d", &index);
                getchar();
                scanf("%[^\n]", temp);
                StrList_insertAt(list,temp,index);
                break;
            case 51:
                // Print List
                StrList_print(list);
                break;
            case 52:
                // Print size of List
                size = StrList_size(list);
                printf("%d\n",size);
                break;
            case 53:
                // Print string at index
                scanf(" %d", &index);
                StrList_printAt(list,index);
                break;
            case 54:
                // Print occurrences of chars
                size = StrList_printLen(list);
                printf("%d\n",size);
                break;
            case 55:
                // Print occurrences of string
                scanf(" %[^\n]", temp);
                size = StrList_count(list,temp);
                printf("%d\n",size);
                break;
            case 56:
                // Remove occurrences of string
                scanf(" %[^\n]", temp);
                StrList_remove(list,temp);
                break;
            case 57:
                // Remove string at index
                scanf(" %d", &index);
                StrList_removeAt(list,index);
                break;
            case 58:
                // Reverse list
                StrList_reverse(list);
                break;
            case 59:
                // Clear list
                list = StrList_alloc();
                break;
            case 60:
                // Sort list
                StrList_sort(list);
                break;
            case 61:
                // Check if list is sorted
                int b = StrList_isSorted(list);
                if(b) printf("true\n");
                else printf("false\n");
                break;
            case 48:
                break;
            default:
                printf("Invalid choice Menu. Please try again.\n");
        }
    }
    return 0;
}
