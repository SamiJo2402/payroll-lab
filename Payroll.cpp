//
// Created by SamiJ on 3/10/2019.
//

#include "Payroll.h"

Payroll::Payroll()
{
    payroll = new Employee[MAX];
}

Payroll::~Payroll()
{
    delete[] payroll;
}

void Payroll::addEmployee(Employee e)
{
    //mary add vectors
}

void Payroll::deleteEmployee(Employee e)
{
    //Sam's brain not working code very bad pls dont look ;(
    Employee temp = payroll[0];
    int index = 0;
    for(int i = 0; i<MAX; i++)
    {
        temp = payroll[i];
        if(temp.compareTo(e)) //maybe we need to write a compare to i dunno I needed food when I wrote this
        {
            index = i;
            break;
        }
    }

    payroll[index].~Employee();
}

void Payroll::printPayroll()
{
}