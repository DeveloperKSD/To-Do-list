#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void showmenu()
{
    cout<<"THIS IS A TO-DO LIST!!\n";
    cout<<"ENTER 1 to ADD TASK, 2 to DELETE TASK, 3 to VIEW TASKS, 4 to EXIT\n";
    cout<<"Enter your choice: ";
}

void addTask()
{
    string task;
    cout<<"Enter your task:";
    cin.ignore();
    getline(cin,task);

    ofstream file("tasks.txt",ios::app);
    if(file.is_open())
    {
        file<<task<<endl;
        file.close();
        cout<<"Adding task...\n";
        cout<<"Task added successfully!!\n\n";
    }
    else
    {
        cout<<"ERROR!!\n";
    }
}

void deleteTask()
{
    ifstream file("tasks.txt");
    if(!file)
    {
        cout<<"No Tasks found!!\n\n";
        return;
    }

    vector<string> tasks;
    string task;

    while(getline(file,task))
    {
        tasks.push_back(task);
    }
    file.close();

    if(tasks.empty())
    {
        cout<<"No Tasks found!!\n\n";
        return;
    }

    cout<<"Your ToDo list\n";
    for(size_t i=0;i<tasks.size();i++)
    {
        cout<<i+1<<". "<<tasks[i]<<endl;
    }

    int taskNumber;
    cout<<"Enter the Task Number to delete: ";
    cin>>taskNumber;

    if(taskNumber<1 || taskNumber>tasks.size())
    {
        cout<<"Invalid task Number!!\n\n";
        return;
    }

    ofstream outFile("tasks.txt");
    for(size_t i=0;i<tasks.size();i++)
    {
        if(i+1!=taskNumber)
        {
            outFile<<tasks[i]<<endl;
        }
    }
    outFile.close();
    cout<<"Deleted Successfully!!\n\n";
}

void viewTasks()
{
    ifstream file("tasks.txt");
    if(!file)
    {
        cout<<"No Tasks found!!\n";
        return;
    }
    string task;
    int taskNumber=1;
    cout<<"TO DO LIST\n";
    while(getline(file,task))
    {
        cout<<taskNumber++<<"."<<task<<endl;
    }
    cout<<endl;
    file.close();
}

int main()
{
    int choice;
    do{
        showmenu();
        cin>>choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                deleteTask();
                break;
            case 3:
                viewTasks();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
