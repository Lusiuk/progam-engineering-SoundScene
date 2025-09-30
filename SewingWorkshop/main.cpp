#include <iostream>
#include "SewingWorkshop.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    SewingWorkshop myworkshop;
    myworkshop.AddSeamstress({"Анна Иванова", 120, 45, 100, true});
    myworkshop.AddSeamstress({"Мария Петрова", 95, 52, 100, false});
    myworkshop.AddSeamstress({"Елена Сидорова", 110, 48, 100, true});
    myworkshop.AddSeamstress({"Ольга Николаева", 85, 40, 100, false});
    myworkshop.AddSeamstress({"Ирина Васильева", 130, 55, 100, true});

    myworkshop.PrintSeamstressesSalary();
    std::cout << std::endl;
    myworkshop.PrintMostEfficientSeamstress();
    std::cout << std::endl;
    myworkshop.PrintTotalSeamstressesSalary();
    std::cout << std::endl;
    myworkshop.PrintSeamstressesWithAutomaticMachine();

    return 0;
}