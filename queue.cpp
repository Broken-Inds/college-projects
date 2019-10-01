// Jordan Ganga
// queue

#include <iostream>
using namespace std;

int queue[5], n = 5, front = - 1, rear = - 1;

void insert()
{
    int val;
    if (rear == n - 1)
        cout << "\nThis Queue is full. \n\n" << endl;
    else
    {
        if (front == - 1)
        front = 0;
        cout << "\nInsert a element in queue : " << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void remove()
{
    if (front == - 1 || front > rear)
    {
        cout << "\nThis Queue is empty.";
        return;
    }
   else
    {
        cout << "\nElement deleted from queue is : " << queue[front] << endl;
        front++;;
    }
}

void clear()
{
    delete queue;
    front = - 1;
    rear = - 1;
}

void display()
{
    if (front == - 1)
    cout << "\nQueue is empty" << endl;
    else
    {
        cout << "\nQueue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main()
{
    int ch;
    cout << "This Queue Limit is 5.\n" << endl;
    while(1)
    {
        cout << "\n\n1) Insert element to queue." << endl;
        cout << "2) Delete element from queue." << endl;
        cout << "3) Clear all the elements in this queue." << endl;
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
            case 1:
            {
                insert();
                display();
                break;
            }
            case 2:
            {
                remove();
                display();
                break;
            }
            case 3:
            {
                clear();
                display();
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }
    }
    return 0;
}
