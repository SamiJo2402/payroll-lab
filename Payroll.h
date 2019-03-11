//
// Created by SamiJ on 3/10/2019.
//

#ifndef PAYROLLLAB_PAYROLL_H
#define PAYROLLLAB_PAYROLL_H

#include "Employee.h"
#define MAX 10

class Payroll {
private:
    Employee *payroll;
public:
    Payroll();
    ~Payroll();
    void addEmployee(Employee e);
    void deleteEmployee(Employee e);
    void printPayroll();
    void setfirstEmp();
    void setlastEmp();
};


#endif //PAYROLLLAB_PAYROLL_H
