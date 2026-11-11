#include <stdio.h>
int main() {
int arr[100];
int size, i;
int max, min;
// Prompt user for array size
printf("Enter the number of elements in the array: ");
scanf("%d", &size);
// Input array elements
printf("Enter %d elements:\n", size);
for (i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
// Initialize max and min with the first element
max = arr[0];
min = arr[0];
// Traverse the array to find largest and smallest
for (i = 1; i < size; i++) {
if (arr[i] > max) {
max = arr[i]; // Update max if current element is larger
}
if (arr[i] < min) {
min = arr[i]; // Update min if current element is smaller
}}
// Output the results
printf("Largest element = %d\n", max);
printf("Smallest element = %d\n", min);
return 0;
}
