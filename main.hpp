#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string filename)
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
    ofs << num << endl;
 
    for (int i=0; i<num;i++) {
         cout << "Enter ID Number: ";
         cin >> ID;
         cout << "Enter Employee Name and Department: ";
         cin >> Ename;
         cout << "Enter Department: ";
         cin >> Department;
         cout << "Enter Salary: ";
         cin >> salary;
         ofs << ID << '\t' << Ename << "\t" << Department << "\t" << salary << endl;
    }
    ofs.close();
    return num;
}





int readFile(string filename)
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
    while(ifs >> ID >> Ename >> Department >> salary) {
        total += salary;  
        
    
        average = total / num;

     
        cout << "ID: " << ID
             << " Employee Name: " << Ename
             << " Department: " << Department
             << " Salary: " << salary
             << " Total: " << total
             << " Average: " << average << endl;
    }
    ifs.close();
    return num;
}