#ifndef SEAMSTRESS_H
#define SEAMSTRESS_H

#include <iostream>
const double target_ShirtsSewn = 100;
const double target_TrousersSewn = 50;

/// Структура Швея
struct Seamstress {
    std::string Name;
    double ShirtsSewn;
    double TrousersSewn;
    double salary;
    bool automatic_machine;

    Seamstress operator=(const Seamstress& s);

    /// Метод вычисления суммарного процента выработки швеи
    double MonthlyEfficiency();

    /// Метод вычисления заработной платы швеи
    double AccountSalary();

    /// Метод изменения заработной платы швеи
    void NewSalary();

    /// Метод изменения типа машины
    void ChangeMachineType();
};

#endif //SEAMSTRESS_H
