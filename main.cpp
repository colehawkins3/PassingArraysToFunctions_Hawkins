//PassingArraysToFunctions_Hawkins
//Stephen_Hawkins 2/17/20

#include <iostream>
using namespace std;

void printArray(int[], int); //prototype
void sortArrayAsc(int[],int); 
void sortArrayDsc(int[],int);
void populateArray(int[],int);

int main() 
{
 int numbers[8] = {23, 46, 12, 24, 1}; //5 of 8 possible values
 numbers[5] = 500; //assign 500 to the 6th element
 numbers[6] = 1000;
 numbers[7] = 89;


 //get the size of numbers now that it has data
 int numbers_array_size = sizeof(numbers) / sizeof(int);
 cout << "This array has " << numbers_array_size << " values\n";

//call the printArray pass as argument numbers, numbers_array_size
printArray(numbers, numbers_array_size);
sortArrayAsc(numbers,numbers_array_size);
sortArrayDsc(numbers, numbers_array_size);
populateArray(numbers, numbers_array_size);

 return 0;
}
//Function defintion
void printArray(int arrayVals[], int size)
{
 cout << "\nPrinted values: " <<endl;
for(int i = 0; i < size; i++)
  {
  cout << arrayVals[i] <<endl;
  }

}
//using Bubble Sort to sort array ascending
void sortArrayAsc(int arrayVals[], int size)
{
  int temp = 0; //needed for swap process
  for(int left = 0; left < size; left++)
  {
    for(int right = left+1; right < size; right++)
    {
      //swapping here
      if(arrayVals[left] > arrayVals[right])
      {
        temp = arrayVals[left];
        arrayVals[left] = arrayVals[right];
        arrayVals[right] = temp;
      }
    }
  }
printArray(arrayVals, size);
}
//using Bubble Sort to sort array ascending
void sortArrayDsc(int arrayVals[], int size)
{
  int temp = 0; //needed for swap process
  for(int left = 0; left < size; left++)
  {
    for(int right = left+1; right < size; right++)
    {
      //swapping here
      if(arrayVals[left] < arrayVals[right])
      {
        temp = arrayVals[left];
        arrayVals[left] = arrayVals[right];
        arrayVals[right] = temp;
      }
    }
  }
printArray(arrayVals, size);
}

/*Dr_T Challenges Expand Program
1. write a void sortArrayDsc function, DESC and print new sorted
2. write a void populateArray(int[], int);
3. accept new values int main() numbers array
4. accept 8 integers via int arrayVals populateArray
5. sort the array DESC
6. print the array values entered to the screen in DESC order
*/
void populateArray(int arrayVals[], int size)
{
  cout << "\nLet enter " << size << " values : \n";
  for(int i = 0; i < size ; i++)
  {
   cout << "\nEnter number " << (i + 1) << " of " << size << ":";
   cin >> arrayVals[i];
  }
  sortArrayDsc(arrayVals,size);
}