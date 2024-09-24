//
// Created by user on 2024/09/24.
//

#include "CarInsurance.h"


using namespace std;

CarInsurance::CarInsurance() {
    excess = 0;
}

CarInsurance::CarInsurance(int pNr, string pHolder, double aRate, double eValue) : InsurancePolicy(pNr, pHolder, aRate) {
    excess = eValue;
}

double CarInsurance::get_excess() const
{
    return excess;
}

void CarInsurance::set_excess()
{
    cout << "Enter the excess amount: ";
    cin >> excess;
    cout << "Excess amount set to: " << excess << endl;
}

void CarInsurance:: setPolicy(int pNr, string pHolder, double aRate, double eValue)
{
    InsurancePolicy::setPolicy(pNr, pHolder, aRate);
    excess = eValue;
}

void CarInsurance::showPolicy(ostream &out) const {
    InsurancePolicy::showPolicy(out);
    out << "Excess Amount: " << get_excess() << endl;
}