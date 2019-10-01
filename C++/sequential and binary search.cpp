// Jordan Ganga
// sequential and binary search

#include <iostream>
using namespace std;

//function for sequential search
void seq(int array[25],int length)
{
   //variables
   int search, i;

   //prompt for search number
   cout << "Enter a number to search: "<<endl;
   cin >> search;

   //performing linear search
   for(i = 0; i<length; i++)
   {
       //if element found
       if(array[i] == search)
       {
           cout << search << " is found at " << (i+1) << "." << endl;
           break;
       }
   }
   //if element not found
   if(i == length)
   {
       cout << search << " is not found." << endl;
   }
}

void bin(int array[25],int length)
{
   //variables
   int search, first, last, middle;

   //prompt for search number
   cout << "Enter a number to search: " << endl;
   cin >> search;

   //assigns first index as zero
   first = 0;

   //assigns last index as last position
   last = length - 1;

   //finding middle index
   middle = (first + last)/ 2;

   //performing binary search
   while(first <= last)
   {
       //if middle element is less than search
       if(array[middle] < search)
       {
           //assigns first index as middle index+1
           first = middle + 1;
       }
       //if element found
       else if(array[middle] == search)
       {
           cout << search << " is found at " << (middle + 1) << "." << endl;
           break;
       }
       //if middle element is greater than search
       else
       {
           //assigns last index as middle index-1
           last = middle - 1;
       }
       middle = (first+last) / 2;
   }
   //if element not found
   if(first > last)
   {
       cout << search << " is not found" << "." << endl;
   }
}

int main()
{
   //unsorted array for sequential search
   int seqArray[] = {2,4,3,6,8,9,7,10,12,34,22,21,5,1,25,33,23,24,54,43,26,27,19,17,15};

   //sorted array for binary search
   int binArray[] = {1,2,3,4,5,6,7,8,9,10,12,15,17,19,21,22,23,24,25,26,27,33,34,43,54};
   char repeat = 'y';
   int choice,length = 25;

   //repeat until repeat is y
   while(repeat == 'y')
   {
       //menu
       cout << "1. Sequential Search " << endl;
       cout << "2. Binary Search " << endl;

       //inputs choice
       cout << "Enter your choice : ";
       cin >> choice;
       switch(choice)
       {
           //if sequential search selected
           case 1:
               seq(seqArray, length);
               break;
           //if binary search selected
           case 2:
               bin(binArray, length);
               break;
           //if wrong choice selected
           default:
               cout << "Wrong choice!" << endl;
               break;
       }
       //prompt for continue or not
       cout << "Do you want to continue? (y/n)"<<endl;
       cin >> repeat;
   }
}
