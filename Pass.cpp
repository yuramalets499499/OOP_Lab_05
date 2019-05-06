#include "Pass.hpp"

Pass::Pass()
{
}

Pass::Pass(string country, int time)
{
    this->country = country;
    this->time = time;
}

Pass::~Pass()
{
}

void Pass::SetCountry(string country)
{
    this->country = country;
}

string Pass::GetCountry()
{
    return country;
}

void Pass::SetTime(int time)
{
    this->time = time;
}

int Pass::GetTime()
{
    return time;
}
