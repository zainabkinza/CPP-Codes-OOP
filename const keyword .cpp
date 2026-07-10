#include <iostream>
#include <cstring>
using namespace std;

class Employee {
    private:
        char* EmployeeName;
        const int EmployeeId;

    public:
        Employee(const char* name, int id): EmployeeId(id) {
            EmployeeName = new char[50]; 
            strcpy(EmployeeName, name);
        }

        void setEmployeeName(const char* name) {
            strcpy(EmployeeName, name);  
        }

        char* getEmployeeName() {return EmployeeName;}

        int getEmployeeId() {return EmployeeId;}

        ~Employee() { delete[] EmployeeName; }
};

int main() {
    Employee E1("Ali", 10);
    Employee E2("Sara", 11);
    Employee E3("Bilal", 12);

    cout << E1.getEmployeeName() << " " << E1.getEmployeeId() << endl;
    cout << E2.getEmployeeName() << " " << E2.getEmployeeId() << endl;
    cout << E3.getEmployeeName() << " " << E3.getEmployeeId() << endl;

    E1.setEmployeeName("Ahmed");
    E2.setEmployeeName("Ayesha");
    E3.setEmployeeName("Usman");

    cout << "\nAfter update:\n";
    cout << E1.getEmployeeName() << " " << E1.getEmployeeId() << endl;
    cout << E2.getEmployeeName() << " " << E2.getEmployeeId() << endl;
    cout << E3.getEmployeeName() << " " << E3.getEmployeeId() << endl;

    return 0;
}