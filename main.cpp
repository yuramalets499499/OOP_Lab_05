#include<iostream>
#include <string>
#include "Abroad.hpp"
#include "Pass.hpp"
#include "Bus.hpp"
using namespace std;
void Sort(int *sum);

int main()
{
    system("color F0");
    Abroad **abroad = new Abroad*[4];
    abroad[0] = new Abroad("France", 10, 20, 10, "USD");
    abroad[1] = new Abroad("Russia", 14, 30, 20, "USD");
    abroad[2] = new Abroad("USA", 7, 45, 15, "USD");
    abroad[3] = new Abroad("Ukraine", 8, 20, 7, "USD");
    
    int sum[4];
    for (int i = 0; i < 4; i++)
    {
        sum[i] = abroad[i]->CostOfPass();
        cout << "Cost of pass " << abroad[i]->GetCountry() << " = " << sum[i] << endl;
    }
    cout << endl;
    Sort(sum);
    for (int i = 3; i >= 0; i--)
    {
        cout << "Cost of pass " << abroad[i]->GetCountry() << " = " << sum[i] << endl;
    }
    cout << endl;
    for (int i = 3; i >= 0; i--)
    {
        sum[i] = abroad[i]->FullAmount();
        cout << "Amaunt cost of pass in " << abroad[i]->GetCountry() << " = " << sum[i] << endl;
    }
    
    delete abroad[0];
    delete abroad[1];
    delete abroad[2];
    delete abroad[3];
    delete[] abroad;
    system("pause");
    return 0;
}
void Sort(int *sum)
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        int k = i;
        while (k > 0 && sum[k - 1] > sum[k])
        {
            temp = sum[k - 1];
            sum[k - 1] = sum[k];
            sum[k] = temp;
            k -= 1;
        }
    }
}
