#include "Seamstress.h"

Seamstress Seamstress::operator=(const Seamstress &s) {
    salary = s.salary;
    Name = s.Name;
    ShirtsSewn = s.ShirtsSewn;
    TrousersSewn = s.TrousersSewn;
    automatic_machine = s.automatic_machine;
    return *this;
}

double Seamstress::MonthlyEfficiency() {
    double shirts_percentage = ShirtsSewn / (target_ShirtsSewn / 100);
    double trousers_percentage = TrousersSewn / (target_TrousersSewn / 100);
    return salary + salary * ((shirts_percentage + trousers_percentage) / 100);
}

double Seamstress::AccountSalary() {
    double res = MonthlyEfficiency();
    if (automatic_machine)
        return res * 1.1; // Бонус 10% за автоматическую машину
    return res;
}

void Seamstress::NewSalary() {
    salary = AccountSalary();
}

void Seamstress::ChangeMachineType() {
    automatic_machine = !automatic_machine;
}
