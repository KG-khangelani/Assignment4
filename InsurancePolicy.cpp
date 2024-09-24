//
// Created by user on 2024/09/24.
//

#include <iostream>
#include <string>
#include "InsurancePolicy.h"

using namespace std;

InsurancePolicy::InsurancePolicy()
{
    policyNr = 0;
    policyHolder = "";
    annualRate = 0.0;
}

InsurancePolicy::InsurancePolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

InsurancePolicy::~InsurancePolicy()
{
    cout << "Destructor called" << endl;
}

void InsurancePolicy::setPolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

int InsurancePolicy::get_pNr() const
{
    return policyNr;
}

string InsurancePolicy::get_pHolder() const
{
    return policyHolder;
}

double InsurancePolicy::get_aRate() const
{
    return annualRate;
}

void InsurancePolicy::showPolicy(ostream &out) const {
    out << "Policy Number: " << get_pNr() << endl;
    out << "Policy Holder: " << get_pHolder() << endl;
    out << "Annual Rate: " << get_aRate() << endl;
}