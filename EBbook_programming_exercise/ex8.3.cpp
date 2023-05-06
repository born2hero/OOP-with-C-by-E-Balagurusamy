/*
plan-
    1-database of employees (class employees)
        -name
        -id
    2-number of classes
    3-staff class-
        data-code name
    4-staff to teacher
        data-subject publication
    5-staff to typist
        data-speed
    6-staff to officer
        data-grade
    7-typist to regular
    8-typist to casual
        data-daily wages
    9-functions to retrieve data of individuals
        -get data
        -set data
    10-function accept
    11-function display
*/

#include <iostream>

class Employees
{
private:
    int employeeID;
    std::string employeeName;

public:
    Employees();
    Employees(int employeeID, std::string employeeName) : employeeID(employeeID), employeeName(employeeName){};
    // ~Employees();

    int getemployeeID() const { return employeeID; }
    void setemployeeID(int employeeID_) { employeeID = employeeID_; }

    std::string getEmployeeName() const { return employeeName; }
    void setEmployeeName(const std::string &employeeName_) { employeeName = employeeName_; }
    void displayEmployees(void)
    {
        std::cout << "Employee Id: " << employeeID << "\n";
        std::cout << "Employee Name: " << employeeName << "\n";
    }
};

Employees::Employees()
{
    employeeID = 101;
    employeeName = "EMPLOYEE";
}

class Staff : public Employees
{
private:
    std::string codeName;

public:
    Staff();
    Staff(int employeeID, std::string employeeName, std::string codeName) : codeName(codeName) {}
    // ~Staff() {}

    std::string getCodeName() const { return codeName; }
    void setCodeName(const std::string &codeName_) { codeName = codeName_; }

    void displayStaff()
    {
        std::cout << "Code Name: " << codeName << "\n";
    }
};

Staff::Staff()
{
    codeName = "ABC";
}

class Teacher : public Staff
{
private:
    std::string subjectPublication;

public:
    Teacher();
    // ~Teacher() {}

    std::string getSubjectPublication() const { return subjectPublication; }
    void setSubjectPublication(const std::string &subjectPublication_) { subjectPublication = subjectPublication_; }

    void displayTeacher()
    {
        std::cout << "Subject Publication is: " << subjectPublication << "\n";
    }
};
Teacher::Teacher()
{
    subjectPublication = "XYZ";
}

class Typist : public Staff
{
private:
    int speed;

public:
    Typist();
    // ~Typist() {}

    int getSpeed() const { return speed; }
    void setSpeed(int speed_) { speed = speed_; }

    void displayTypist()
    {
        std::cout << "Typing speed: " << speed;
    }
};

Typist::Typist()
{
    speed = 20;
}

class Officer : public Staff
{
private:
    std::string grade;

public:
    Officer();
    // ~Officer() {}

    std::string getGrade() const { return grade; }
    void setGrade(const std::string &grade_) { grade = grade_; }
};

Officer::Officer()
{
    grade = "A";
}

class Regular : public Typist
{
private:
public:
    Regular() {}
    // ~Regular() {}
};

class Casual : public Typist
{
private:
    int dailyWages;

public:
    Casual();
    // ~Casual() {}

    int getDailyWages() const { return dailyWages; }
    void setDailyWages(int dailyWages_) { dailyWages = dailyWages_; }
};

Casual::Casual()
{
    dailyWages = 2000;
}
// void accept(){}
int main()
{
    Employees emp1;
    emp1.displayEmployees();
    Typist t1;
    t1.displayEmployees();
    t1.displayStaff();
    t1.displayTypist();
}