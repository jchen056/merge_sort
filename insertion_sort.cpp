#include <iostream>
#include <string>
using namespace std;

void InsertionSort(int* numbers, int numbersSize) {
  //Variable i is the index of the first unsorted element. Since the element at index 0 is already sorted, i starts at 1.
   for (int i = 1; i < numbersSize; i++) {
      int j = i;
      //Variable j keeps track of the index of the current element being inserted into the sorted part. If the current element is less than the element to the left, the values are swapped
      while (j > 0 && numbers[j] < numbers[j - 1]) {
         // Swap numbers[j] and numbers [j - 1]
         int temp = numbers[j];
         numbers[j] = numbers[j - 1];
         numbers[j - 1] = temp;
         j--;
      }
   }
}

string ArrayToString(int* array, int arraySize) {
   // Special case for empty array
   if (0 == arraySize) {
      return string("[]");
   }
   
   // Start the string with the opening '[' and element 0
   string result = "[" + to_string(array[0]);
   
   // For each remaining element, append comma, space, and element
   for (int i = 1; i < arraySize; i++) {
      result += ", ";
      result += to_string(array[i]);
   }
   
   // Add closing ']' and return result
   result += "]";
   return result;
}

int main() {
   // Create an array of numbers to sort
   int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11 };
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
      
   // Display the contents of the array
   cout << "UNSORTED: " << ArrayToString(numbers, numbersSize) << endl;
      
   // Call the InsertionSort function
   InsertionSort(numbers, numbersSize);
      
   // Display the sorted contents of the array
   cout << "SORTED:   " << ArrayToString(numbers, numbersSize) << endl;
}
