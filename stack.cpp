// Jordan Ganga
// stack

#include <iostream>
using namespace std;

int top = -1, stack[100];

void create(int limit)
{
    int stack;
    stack = (limit);
    top = -1;
}

void push(int val, int limit)
{
    int n = limit;
    if(top >= n-1)
        cout << "This Stack is full.\n\n" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
   if(top <= -1)
      cout << "This Stack is empty.\n\n" << endl;
   else
    {
      cout << "The popped element is " << stack[top] << ".\n\n" << endl;
      top--;
    }
}

void clear()
{
    delete stack;
    top = -1;
}

void display()
{
    cout<<"Stack elements are: ";
    for(int i=top; i>=0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << "\n\n";
}

int main()
{
    int ch, limit = 0, val;
    cout << "To start this program, please select Option 1." << endl;
    while(1)
    {
        cout << "\n1) Create a stack." << endl;
        cout << "2) Push array in stack."  << endl;
        cout << "3) Pop array from stack." << endl;
        cout << "4) Clear arrays in the stack."  << endl;
        cout << "\n\nEnter choice: "<<endl;
        cin >> ch;
        switch(ch)
        {
            case 1: // Create Option
            {
                if (limit >=  1)
                    cout << "\nA Stack is already been chosen." << endl;
                else
                {
                    cout << "\nEnter the limit of the array: " << endl;
                    cin >> limit;
                    cout << "\n\n" << endl;
                    while (limit <= 0)
                    {
                        cout << "\nInvalid Number. \nPlease enter another number:" <<  endl;
                        cin >> limit;
                    }
                    create(limit);
                }
                break;
            }
            case 2: // Push Option
            {
                cout << "\nEnter value to be pushed:"<<endl;
                cin >> val;
                cout << endl;
                push(val, limit);
                display();
                break;
            }
            case 3: // Pop Option
            {
                pop();
                display();
                break;
            }
            case 4: // Clear Stack
            {
                clear();
                display();
                cout << "\n\n" << endl;
                break;
            }
            default:
            {
                cout<<"\nInvalid Choice.\nPlease select 1-4."<<endl;
            }
        }
    }
    return 0;
}

