#include <stdio.h>
#include <stdlib.h>

// CHANGE CODE BELOW THIS LINE

// Create an array from 1 to 100
void createArray(int arr[], int size) {
    
}

// shuffle that array
void shuffleArray(int arr[], int size) {
   
}

// Replace value of any random index with 0
void replaceRandomNumber(int arr[], int size) {
    
}

// Find out the missing number in array of 0 to 100 (which is replaced by 0)
int findMissingNumber(int arr[], int size) {
   
}

// Sort that array
void sortArray(int arr[], int size) {

}


// CHANGE CODE ABOVE THIS LINE
int main() {
    runTestCase();
    return 0;
}

void runTestCase() {
    int arr[100];
    int missingNumber;

    createArray(arr, 100);
    printf("Generated Array: ");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    
    shuffleArray(arr, 100);
    printf("\n\nShuffled Array: ");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    
    replaceRandomNumber(arr, 100);
 
    missingNumber = findMissingNumber(arr, 100);
    printf("\n\nMissing number: %d", missingNumber);
    
    sortArray(arr, 100);
    printf("\n\nSorted Array: ");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


