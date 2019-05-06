#include "Abroad.hpp"

Abroad::Abroad()
{
}

Abroad::Abroad(string country, int time, int daycost, int fare, string currency) : Pass(country, time)
{
    this->daycost = daycost;
    this->fare = fare;
    this->currency = currency;
}

Abroad::~Abroad()
{
}

void Abroad::SetCurrency(string currency)
{
    this->currency = currency;
}
string Abroad::GetCurrency()
{
    return currency;
}

void Abroad::SetCost(int coust)
{
    this->daycost = coust;
}

int Abroad::GetCost()
{
    return fare;
}

void Abroad::SetFare(int fare)
{
    this->fare = fare;
}

int Abroad::GetFare()
{
    return fare;
}

int Abroad::CostOfPass()
{
    int n = this->GetTime();
    int passcost = n * daycost;
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

int Abroad::FullAmount()
{
    int n = this->GetTime();
    int amount = n * daycost + fare;
    const char *currency = "USD";
    if (strcmp(currency, "USD") == 0)
    {
        amount = amount *= 26;
    }
    if (strcmp(currency, "EUR") == 0)
    {
        amount = amount *= 29;
    }
    if (strcmp(currency, "RUR") == 0)
    {
        amount = amount /= 4;
    }
    if (strcmp(currency, "UAH") == 0)
    {
        amount = amount;
    }
    return amount;
}

int  Abroad::SetTravelPrice(const char *currency)
{
    if (strcmp(currency, "USD") == 0)
    {
        this->fare = fare *= 26;
    }
    if (strcmp(currency, "EUR") == 0)
    {
        this->fare = fare *= 29;
    }
    if (strcmp(currency, "RUR") == 0)
    {
        this->fare = fare /= 4;
    }
    if (strcmp(currency, "UAH") == 0)
    {
        this->fare = fare;
    }
    return fare;
}
