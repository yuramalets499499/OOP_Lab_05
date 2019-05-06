#pragma once
#include "Pass.hpp"

class Abroad : public Pass
{
private:
    int daycost;//варт≥сть за одну добу
    int fare;//варт≥сть проњзду
    string currency;
public:
    Abroad();
    Abroad(string country, int time, int daycost, int fare, string currency);
    ~Abroad();
    
    void SetCost(int cost);
    int GetCost();
    void SetFare(int fare);
    int GetFare();
    void SetCurrency(string currency);
    string GetCurrency();
    
    int CostOfPass()override;
    int FullAmount();
    int SetTravelPrice(const char *currency) override;
};
