#pragma once
#include "Pass.hpp"

class Bus : public Pass
{
private:
    int timeincountry;
    int timeabroad;
    int onedaycost;
    
public:
    Bus();
    Bus(string country, int time, int daycost, int fare, int timeincountry, int timeabroad, int daycostGrn, int daycostVal, int onedaycost);
    ~Bus();
    
    void SetTimeincountry(int timeincountry);
    int GetTimeincountry();
    
    void SetTimeabroad(int timeabroad);
    int GetTimeabroad();
    
    void SetOneDayCost(int onedaycost);
    int GetOneDayCost();
    
    int  SetTravelPrice(const char *currency)override;
    int CostOfPass()override;
    
};

