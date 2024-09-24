//
// Created by user on 2024/09/24.
//

#ifndef ASS4_CARINSURANCE_H
#define ASS4_CARINSURANCE_H
#include <string>
#include <iostream>
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


#endif //ASS4_CARINSURANCE_H
