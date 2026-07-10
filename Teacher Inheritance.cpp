#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    int age;
    string institute;

public:
    void setname(string n) { name = n; }
    void setage(int a) { age = a; }
    void setinstitute(string i) { institute = i; }

    string getname() { return name; }
    int getage() { return age; }
    string getinstitute() { return institute; }

    void data() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your institute: ";
        cin >> institute;
    }

    void display() {
        cout << "\n---Teacher Info---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Institute: " << institute << endl;
    }
};

class HumanitiesTeacher : public Teacher {
private:
    string Department;
    string CourseName;
    string Designation;

public:
    void setDepartment(string d) { Department = d; }
    void setCourseName(string c) { CourseName = c; }
    void setDesignation(string desig) { Designation = desig; }

    string getDepartment() { return Department; }
    string getCourseName() { return CourseName; }
    string getDesignation() { return Designation; }

    void inputData() {
        data();              
        Department = "humanities";
        cout << "Enter course name: ";
        cin >> CourseName;
        cout << "Enter designation: ";
        cin >> Designation;
    }

    void display() {
        cout << "\n---Humanities Teacher---\n";
        cout << "Name: " << getname() << endl;
        cout << "Age: " << getage() << endl;
        cout << "Institute: " << getinstitute() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Course: " << getCourseName() << endl;
        cout << "Designation: " << getDesignation() << endl;
    }
};

class ScienceTeacher : public Teacher {
private:
    string Department;
    string CourseName;
    string Designation;

public:
    void setDepartment(string d) { Department = d; }
    void setCourseName(string c) { CourseName = c; }
    void setDesignation(string desig) { Designation = desig; }

    string getDepartment() { return Department; }
    string getCourseName() { return CourseName; }
    string getDesignation() { return Designation; }

    void inputData() {
        data();
        Department = "science";
        cout << "Enter course name: ";
        cin >> CourseName;
        cout << "Enter designation: ";
        cin >> Designation;
    }

    void display() {
        cout << "\n---Science Teacher---\n";
        cout << "Name: " << getname() << endl;
        cout << "Age: " << getage() << endl;
        cout << "Institute: " << getinstitute() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Course: " << getCourseName() << endl;
        cout << "Designation: " << getDesignation() << endl;
    }
};

class MathsTeacher : public Teacher {
private:
    string Department;
    string CourseName;
    string Designation;

public:
    void setDepartment(string d) { Department = d; }
    void setCourseName(string c) { CourseName = c; }
    void setDesignation(string desig) { Designation = desig; }

    string getDepartment() { return Department; }
    string getCourseName() { return CourseName; }
    string getDesignation() { return Designation; }

    void inputData() {
        data();
        Department = "maths";
        cout << "Enter course name: ";
        cin >> CourseName;
        cout << "Enter designation: ";
        cin >> Designation;
    }

    void display() {
        cout << "\n---Maths Teacher---\n";
        cout << "Name: " << getname() << endl;
        cout << "Age: " << getage() << endl;
        cout << "Institute: " << getinstitute() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Course: " << getCourseName() << endl;
        cout << "Designation: " << getDesignation() << endl;
    }
};

int main() {
    HumanitiesTeacher ht;
    cout << "-- Enter Humanities Teacher details --\n";
    ht.inputData();
    ht.display();

    ScienceTeacher st;
    cout << "\n-- Enter Science Teacher details --\n";
    st.inputData();
    st.display();

    MathsTeacher mt;
    cout << "\n-- Enter Maths Teacher details --\n";
    mt.inputData();
    mt.display();

    return 0;
}