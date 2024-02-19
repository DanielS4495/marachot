#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void addStringToList(char *list[], int *size);
void insertStringAtIndex(char *list[], int *size, int index);
void printList(char *list[], int size);
void printListLength(int size);
void printStringAtIndex(char *list[], int size, int index);
void printOccurrences(char *list[], int size, char *target);
void removeOccurrences(char *list[], int *size, char *target);
void removeStringAtIndex(char *list[], int *size, int index);
void reverseList(char *list[], int size);
void clearList(char *list[], int *size);
void sortList(char *list[], int size);
int isSorted(char *list[], int size);

int main() {
    char *list[100]; // Assuming maximum 100 strings in the list
    int size = 0;
    int choice;
    
    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Add string to list\n");
        printf("2. Insert string at index\n");
        printf("3. Print list\n");
        printf("4. Print list length\n");
        printf("5. Print string at index\n");
        printf("6. Print occurrences of string\n");
        printf("7. Remove occurrences of string\n");
        printf("8. Remove string at index\n");
        printf("9. Reverse list\n");
        printf("10. Clear list\n");
        printf("11. Sort list\n");
        printf("12. Check if list is sorted\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform action based on user choice
        switch(choice) {
            case 1:
                addStringToList(list, &size);
                break;
            case 2:
                // Insert string at index
                break;
            case 3:
                printList(list, size);
                break;
            case 4:
                printListLength(size);
                break;
            case 5:
                // Print string at index
                break;
            case 6:
                // Print occurrences of string
                break;
            case 7:
                // Remove occurrences of string
                break;
            case 8:
                // Remove string at index
                break;
            case 9:
                // Reverse list
                break;
            case 10:
                // Clear list
                break;
            case 11:
                // Sort list
                break;
            case 12:
                // Check if list is sorted
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 0);

    return 0;
}
