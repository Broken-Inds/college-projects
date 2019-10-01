// Jordan Ganga
// linked list

#include<iostream>
using namespace std;

class node

{
    public:
        string name,id;
        int age;
        node *next;
        void add();
        void takeout();
        void look();
        void display();

    node(string n,string i,int a)
    {
        name=n;
        id=i;
        age=a;
        next=NULL;
    }

};

class Linkedlist{
   private:
       node *list;

   public:
       Linkedlist(){
           list = NULL;
       }

void add() // adds the information for the linked list
{
    string s,i;
    int a;
    cout << "\nEnter the student's information below.\n";
    cout << "Student's Name : ";
    cin >> s;
    cout << "Student's ID : ";
    cin >> i;
    cout << "Student's Age : ";
    cin >> a;

    node *t = new node(s,i,a);

    //adding front
    t->next=list;
    list=t;
}

void takeout()
{
    string a;
    cout << "\nEnter the Student's ID so their info can be removed. \n";
    cout << "Student's ID : ";
    cin >> a;

    node *prev=NULL,*temp=list;
    while(temp!=NULL)
    {
        if(temp->id==a)
        {
           cout<<"\nFound.\n";
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"\nInformation not found.\n";
    }
    else if(prev==NULL)
    {
        cout<<"And Deleted.\n";
        list=list->next;
    }
    else
    {
        cout<<"And Deleted.\n";
        prev->next=temp->next;
    }
}

void look()
{
    string a;
    cout << "\nEnter Student's ID to search for their information.\n";
    cout << "Student's ID : ";
    cin >> a;

    node *temp=list;
    while(temp!=NULL)
    {
        if(temp->id==a)
        {
            //diplyaing result
            cout << "\n------------------------------\n";
            cout << "Name : " << temp->name << endl;
            cout << "ID : " << temp->id << endl;
            cout << "Age : " << temp->age << endl;
            cout << "\n------------------------------\n";
            break;
        }

        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout << "\nInformation not found.\n";
    }
}

void display()
{
    node *temp=list;
    if(temp==NULL)
        cout<<"\nSCHOOL LIST IS EMPTY\n\n";
    while(temp!=NULL)
    {
        //displaying
        cout << "\n------------------------------\n";
        cout << "Name : " << temp->name << endl;
        cout << "ID : " << temp->id << endl;
        cout << "Age : " << temp->age << endl;
        cout << "\n------------------------------\n";

        temp=temp->next;
    }
}
};

int main()
{
    Linkedlist list;
    cout << "Student Information (Linked List)\n\n";
    while(1)
    {
        int choice;
        cout << "\n1. Add a node." << endl;
        cout << "2. Delete a node." << endl;
        cout << "3. Search a node." << endl;
        cout << "4. Display a node." << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
            case 1:
            {
                list.add();
                break;
            }
            case 2:
            {
                list.takeout();
                break;
            }
            case 3:
            {
                list.look();
                break;
            }
            case 4:
            {
                list.display();
                break;
            }
            default:
                cout << "Wrong choice!" << endl;
                break;
        }
    }
}
