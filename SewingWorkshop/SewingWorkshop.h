#ifndef SEWINGWORKSHOP_H
#define SEWINGWORKSHOP_H

#include "Seamstress.h"
#include <iostream>
#include <string>
#include <vector>

/// Структура Швейный цех
struct SewingWorkshop {
    std::vector<Seamstress> Seamstresses = std::vector<Seamstress>();

    // Принять сотрудника
    void AddSeamstress(Seamstress);

    // Уволить сотрудника
    void FireSeamstress(const std::string&);

    // Вывести всех сотрудников в формате: имя - заработная плата
    void PrintSeamstressesSalary();

    // Найти самую эффективную швею и ее суммарный процент выработки
    std::pair<Seamstress,double> FindMostEfficientSeamstress();

    // Вывести самую эффективную швею и ее суммарный процент выработки
    void PrintMostEfficientSeamstress();

    // Найти общую заработную плату всех швей
    double AccountTotalSalary();

    // Найти швей с автоматическими машинами
    std::vector<std::string> FindSeamstressesWithAutomaticMachine();

    // Вывести швей с автоматическими машинами
    void PrintSeamstressesWithAutomaticMachine();

    // Вывести общую заработную плату всех швей
    void PrintTotalSeamstressesSalary();
};

#endif //SEWINGWORKSHOP_H
