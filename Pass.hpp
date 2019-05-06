/*24
 —творити базовий клас ѕ”“≤¬ ј (задаютьс€ пункт призначенн€ та тривал≥сть).
 —творити пох≥дн≥ класи ¬≤ƒѕќ„»Ќќ  «ј  ќ–ƒќЌќћ (задаютьс€ варт≥сть за 1 добу у валют≥,
 варт≥сть проњзду у валют≥)та ј¬“ќЅ”—Ќ»… “”– ¬—≈–≈ƒ»Ќ≤  –јѓЌ» ≤ «ј  ќ–ƒќЌ
 (задаютьс€ тривал≥сть всередин≥ крањни, варт≥сть за 1 добу в гривн€х,
 тривал≥сть за кордоном, варт≥сть за 1 добу у валют≥). ƒл€ заданих приклад≥в пут≥вок
 ≥ курс≥в валют обчислити варт≥сть кожноњ з них у гривн€х, впор€дкувати пут≥вки
 за спаданн€м вартост≥ ≥ обчислити сумарну варт≥сть.ƒл€ перев≥рки використати
 масив вказ≥вник≥в на обТЇкти базового класу, €ким присвоњти адреси обТЇкт≥в пох≥дних клас≥в.
 */

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pass
{
private:
    string country;
    int time;
    
public:
    Pass();
    Pass(string country, int time);
    ~Pass();
    
    void SetCountry(string country);
    string GetCountry();
    void SetTime(int time);
    int GetTime();
    
    virtual int SetTravelPrice(const char *currency) = 0;
    virtual int CostOfPass() = 0;
};

