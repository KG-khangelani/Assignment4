#include <iostream>
#include <string>
#include "InsurancePolicy.h"

using namespace std;

class CarInsurance: public InsurancePolicy
{
    public:
        void setPolicy(int pNr, string pHolder, double aRate, double eValue);
        void showPolicy(ostream & out)const;
private:
        double excess;
};

void CarInsurance:: setPolicy(int pNr, string pHolder, double
aRate, double eValue)
{
    policyNr = pNr;
    policyholder = pHolder;
    annualRate = aRate; excess
                                = eValue;
}