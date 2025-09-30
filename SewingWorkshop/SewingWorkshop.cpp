#include "SewingWorkshop.h"
#include <assert.h>

void SewingWorkshop::AddSeamstress(Seamstress s) {
   Seamstresses.push_back(s);
}

void SewingWorkshop::FireSeamstress(const std::string& Name) {
    assert(!Seamstresses.empty());
    assert(Name != "");
    for (int i = 0; i < Seamstresses.size(); i++) {
        if (Seamstresses[i].Name == Name) {
            Seamstresses.erase(Seamstresses.begin() + i);
            return;
        }
    }
}

void SewingWorkshop::PrintSeamstressesSalary(){
    assert(!Seamstresses.empty());
    std::cout << "Работники швейного цеха:" << std::endl;
    for (auto s : Seamstresses) {
        std::cout << "Швея: "<< s.Name << " Месячная выплата: " << s.AccountSalary() << std::endl;
    }
}

std::pair<Seamstress,double> SewingWorkshop::FindMostEfficientSeamstress() {
    assert(!Seamstresses.empty());
    double Efficiency_max = 0;
    Seamstress most_efficient_seamstress;

    for (auto s : Seamstresses) {
        double temp = s.MonthlyEfficiency();
        if (temp > Efficiency_max) {
            Efficiency_max = s.MonthlyEfficiency();
            most_efficient_seamstress = s;
        }
    }
    return {most_efficient_seamstress,Efficiency_max};
}

void SewingWorkshop::PrintMostEfficientSeamstress(){
    std::cout << "Самая эффективная работница цеха:" << std::endl;
    std::pair<Seamstress,double> best_seamstress = FindMostEfficientSeamstress();
    std::cout << "Швея: "<< best_seamstress.first.Name << " Суммарный процент выработки: " << best_seamstress.second << std::endl;
}

double SewingWorkshop::AccountTotalSalary() {
    double total_salary = 0;
    for (auto s : Seamstresses) {
        total_salary += s.AccountSalary();
    }
    return total_salary;
}

void SewingWorkshop::PrintTotalSeamstressesSalary() {
    std::cout << "Суммарная заработная плата всех швей: " << AccountTotalSalary() << std::endl;
};

std::vector<std::string> SewingWorkshop::FindSeamstressesWithAutomaticMachine() {
    std::vector<std::string> res;
    for (auto s : Seamstresses) {
        if (s.automatic_machine)
            res.push_back(s.Name);
    }
    return res;
}

void SewingWorkshop::PrintSeamstressesWithAutomaticMachine() {
    std::cout << "Швеи, работающие на автоматических машинах: " << std::endl;
    for (auto name : FindSeamstressesWithAutomaticMachine()) {
        std::cout << name << std::endl;
    }
}
