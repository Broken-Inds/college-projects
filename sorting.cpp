// Jordan Ganga
// selection, insertion, and bubble sorting.

#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
    for(int i = 0; i < 10; i++)
    {
        cout << array[i] <<" ";
    }

}

void selectionSort(int array[], int n)
{
    int startScan, minIndex, minValue;
    int selection_comparison = 0;
    int selection_swaps = 0;
    cout << "Doing selection sort ...." << endl;
    for (startScan = 0; startScan < (n - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int i= startScan + 1; i < n; i++)
            {
                selection_comparison++;
                if (array[i] < minValue)
                {
                    selection_swaps++;
                minValue = array[i];
                minIndex = i;
                }
            }
        selection_swaps++;
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
    cout<<"Comparisons : "<<selection_comparison<<endl;
    cout<<"Swaps : "<<selection_swaps<<endl;
}

void insertionSort(int array[], int n)
{
   int i, key, j;
   int insertion_comparison = 0;
   int insertion_swaps = 0;
   cout << "Doing insertion sort ...." << endl;
   for (i = 1; i < n; i++)
   {
      j = i;
      insertion_comparison++;
      while ((j > 0) && (array[j - 1] > array[j]))
        {
            if(array[j-1]>array[j]){
            insertion_comparison++;
        }
        key = array[j - 1];
        array[j - 1] = array[j];
        array[j] = key;
        j--;

        insertion_swaps++;//increment swap variable when actually swap is done
    }
   }
   cout << "Comparisons : " << insertion_comparison << endl;
   cout << "Swaps : " << insertion_swaps << endl;
}

void bubbleSort(int array[], int n)
{
    bool swap;
    int temp;
    int bubble_comparison = 0;
    int bubble_swaps = 0;
    cout << "Doing bubble sort ...." << endl;
    do{
        swap = false;
        for (int i = 0; i < (n-1); i++)
        {
            bubble_comparison++;
            if (array[i] > array[i + 1])
            {
                bubble_swaps++;
                temp = array[i];
                array[i] = array[i + 1];
                array[i+1]=temp;
                swap = true;
            }
        }
    }
    while (swap);
    cout << "Comparisons : " << bubble_comparison << endl;
    cout << "Swaps : " << bubble_swaps << endl;
}

int main()
{
   const int length = 10;
   //unsorted array for sequential search
   int unArray[] = {5,26,2,10,8,24,6,44,42,3};

   // partially sorted array for binary search
   int psArray[] = {2,4,6,7,8,10,11,15,35,16};
   char repeat = 'y';
   int choice, option;

    while(repeat == 'y')
   {
       //menu
       cout << "Choose a set of Array"<<endl;
       cout << "1. Unsorted Array " << endl;
       cout << "2. Partially Sorted Array  " << endl;

       //inputs choice
       cout << "\nEnter your choice : ";
       cin >> choice;
       switch(choice)
       {
           case 1:
           while(true)
            {
                cout << "\nUnsorted Array-----------" << endl;
                cout << endl;
                cout << endl;
                //repeat until repeat is y
                while(repeat == 'y')
                {
                    //sub menu
                    int unArray[] = {5,26,2,10,8,24,6,44,42,3};
                    cout << "\n1. For Selection Sort." << endl;
                    cout << "2. For Insertion Sort." << endl;
                    cout << "3. For Bubble Sort." << endl;

                    // input option
                    cout << "Enter your option : ";
                    cin >> option;
                    switch(option)
                    {
                        case 1:
                            printArray(unArray, length);
                            cout << endl;
                            selectionSort(unArray, length);
                            printArray(unArray, length);
                            cout << endl << endl;
                            break;
                        case 2:
                            printArray(unArray, length);
                            cout << endl;
                            insertionSort(unArray, length);
                            printArray(unArray, length);
                            cout << endl << endl;
                            break;
                        case 3:
                            printArray(unArray, length);
                            cout << endl;
                            bubbleSort(unArray, length);
                            printArray(unArray, length);
                            cout << endl << endl;
                            break;
                        default:
                            cout << "Wrong choice!" << endl;
                            break;
                    }
                    cout << "\nDo you to try a different sorting algorithm? (y/n)"<<endl;
                    cin >> repeat;
                }
                    cout<<"\nThank you"<<endl;
                    break;
            }
            break;
        case 2:
        while(true)
            {
                cout << "\nPartially Sorted Array-----------" << endl;
                cout << endl;
                cout << endl;
                //repeat until repeat is y
                while(repeat == 'y')
                {
                    //sub menu
                    int psArray[] = {2,4,6,7,8,10,11,15,35,16};
                    cout << "\n1. For Selection Sort." << endl;
                    cout << "2. For Insertion Sort." << endl;
                    cout << "3. For Bubble Sort." << endl;

                    // input option
                    cout << "Enter your option : ";
                    cin >> option;
                    switch(option)
                    {
                        case 1:
                            printArray(psArray, length);
                            cout << endl;
                            selectionSort(psArray, length);
                            printArray(psArray, length);
                            cout << endl << endl;
                            break;
                        case 2:
                            printArray(psArray, length);
                            cout << endl;
                            insertionSort(psArray, length);
                            printArray(psArray, length);
                            cout << endl << endl;
                            break;
                        case 3:
                            printArray(psArray, length);
                            cout << endl;
                            bubbleSort(psArray, length);
                            printArray(psArray, length);
                            cout << endl << endl;
                            break;
                        default:
                            cout << "Wrong choice!" << endl;
                            break;
                    }
                    cout << "\nDo you to try a different sorting algorithm? (y/n)"<<endl;
                    cin >> repeat;
                }
                    cout<<"\nThank you"<<endl;
                    break;
            }
        }
        cout << "\nDo you want to try a different set of Array? (y/n)"<<endl;
        cin >> repeat;
    }
    cout<<"\nThank you"<<endl;

   return 0;
}
