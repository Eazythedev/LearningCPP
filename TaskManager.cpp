//
// TaskManager.cpp
// TaskManager
//
// Created by Ezaiah Akyeem/Eazythedev/Erujine
// December 8, 2025
// Console-Based Task Manager

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "Task Manager\n";
    /*
    cout << "Select an option by pressing a number key: " << "\n";
    cout << "1. Add a task" << "\n" <<  "2. Remove a task" << "\n" << "3. View tasks" << "\n" << "0. Close Program " << "\n\n";
    */

    int userInput;
    // string aTask;


        //cin >> userInput;



        vector<string> tasks = { "Wash car", "Do laundry" };
        string inputTask;

        cout << "\n" << "Current tasks:" << "\n\n";
        for (int t = 0; t < tasks.size(); t++) {
            cout << "- " << tasks[t] << "\n";
        }

        cout << "Select an option by pressing a number key: " << "\n";
        cout << "1. Add a task" << "\n" <<  "2. Remove a task" << "\n" << "3. View tasks" << "\n" << "0. Close Program " << "\n\n";

        cin >> userInput;
        
        if (userInput == 1) {
            // Add a task
            cout << "\n" << "Enter name of task: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, inputTask);
            tasks.push_back(inputTask);
            cout << "\n" << "Task added." << "\n\n" << "Current tasks: " << "\n";
        }

        if (userInput == 2) {
            // Remove a task
            cout << "\n" << "Enter name of task to be removed: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, inputTask);
            tasks.erase(remove(tasks.begin(), tasks.end(), inputTask), tasks.end());
            cout << "\n" << "Task removed." << "\n\n" << "Current tasks: " << "\n";
        }

        if (userInput == 3) {
            // View tasks
            cout << "\n" << "Current tasks: " << "\n";
        }
        // Range-based for loop
        /*
        for (string task : tasks) {
            cout << task << "\n";
        }
        */

        if (userInput == 0) {
            return 0;
        }

        for (int t = 0; t < tasks.size(); t++) {
            cout << "- " << tasks[t] << "\n";
        }
    return 0;
}
