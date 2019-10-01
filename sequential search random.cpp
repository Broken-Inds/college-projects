// Jordan Ganga
// sequential search random

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    int i,num_of_elements, select;
    bool found = false;
    random_shuffle(&arr[0], &arr[50]-1);
    num_of_elements = 50;
    i = 0;
    cout << "This Array Set is from 1 - 50." << endl;
    cout << "Enter the value to search: ";
    cin >> select;
    for (i = 0; i < num_of_elements; i++)
    {
        if (select == arr[i])
        {
            found = true;
            cout << "The value is found at index arr[" << i << "]" << endl;
            cout << "This took " << i + 1<< " searches.";
            break;
        }
    }
    if (!found)
        {
            cout << "Key not found!" <<  endl;
            cout << "This took " <<  i << " searches." << endl;
        }
    return 0;
}
