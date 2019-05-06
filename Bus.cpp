#include "Bus.hpp"

Bus::Bus()
{
}

Bus::Bus(string country, int time, int daycost, int fare, int timeincountry, int timeabroad, int daycostGrn, int daycostVal, int onedaycost) :Pass(country, time)
{
    this->timeincountry = timeincountry;
    this->timeabroad = timeabroad;
    this->onedaycost = onedaycost;
}

Bus::~Bus()
{
}

void Bus::SetTimeincountry(int timeincountry)
{
    this->timeincountry = timeincountry;
}

void Bus::SetTimeabroad(int timeabroad)
{
    this->timeabroad = timeabroad;
}

void Bus::SetOneDayCost(int onedaycost)
{
    this->onedaycost = onedaycost;
}

int Bus::GetTimeincountry()
{
    return timeincountry;
}

int Bus::GetTimeabroad()
{
    return timeabroad;
}

int Bus::GetOneDayCost()
{
    return onedaycost;
}

int Bus::SetTravelPrice(const char *currency)
{
    if (strcmp(currency, "USD") == 0)
    {
        this->onedaycost = onedaycost *= 26;
    }
    if (strcmp(currency, "EUR") == 0)
    {
        this->onedaycost = onedaycost *= 29;
    }
    if (strcmp(currency, "RUR") == 0)
    {
        this->onedaycost = onedaycost /= 4;
    }
    if (strcmp(currency, "UAH") == 0)
    {
        this->onedaycost = onedaycost;
    }
    return onedaycost;
}

int Bus::CostOfPass()
{
    int n = this->GetTimeincountry();
    int passcost = n * onedaycost;
    //string currency = this->GetCurrency();
    const char *currency = "USD";
    if (strcmp(currency, "USD") == 0)
    {
        passcost = passcost *= 26;
    }
    if (strcmp(currency, "EUR") == 0)
    {
        passcost = passcost *= 29;
    }
    if (strcmp(currency, "RUR") == 0)
    {
        passcost = passcost /= 4;
    }
    if (strcmp(currency, "UAH") == 0)
    {
        passcost = passcost;
    }
    return passcost;
}
