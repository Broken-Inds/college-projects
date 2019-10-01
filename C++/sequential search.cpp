// Jordan Ganga
// sequential search

#include <iostream>
using namespace std;

int main()
{
    int arr[50] = {7,25,42,1,6,43,20,9,31,50,13,22,44,16,2,28,37,40,18,34,47,4,39,24,33,11,49,26,29,10,45,15,35,32,48,3,36,19,21,14,46,5,8,23,30,12,41,27,38,17};
    int i,num_of_elements, select;
    bool found = false;
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
            cout << "This took " << select << " searches.";
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
