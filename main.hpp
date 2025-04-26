#include <iostream>
#include <fstream>
using namespace std;

void writeFile(string filename)
{
    int num, ID;
    string Ename, Department;
    double salary;
    
    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    cout << "Enter the number of Employees: ";
    cin >> num;
 
    for (int i=0; i<num;i++) {
         cout << "Enter ID Number: ";
         cin >> ID;
         cout << "Enter Employee Name and Department: ";
         cin >> Ename;
         cout << "Enter Department: ";
         cin >> Department;
         cout << "Enter Salary: ";
         cin >> salary;
         ofs << num << '\t' << ID << '\t' << Ename << "\t" << Department << "\t" << salary << endl;
    }
    ofs.close();
}





void readFile(string filename)
{

    int num, ID;
    string Ename, Department;
    double salary;
    double total, average;

    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    for (int i = 0; i < num; i++) {
        ifs >> ID >> Ename >> Department >> salary;
        total += salary;  
        
    
        average = total / (i + 1);

     
        cout << "ID: " << ID
             << " Employee Name: " << Ename
             << " Department: " << Department
             << " Salary: " << salary
             << " Total: " << total
             << " Average: " << average << endl;
    }
    ifs.close();
}