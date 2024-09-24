//
// Created by user on 2024/09/24.
//

#include <string>
#ifndef ASS4_INSURANCEPOLICY_H
#define ASS4_INSURANCEPOLICY_H

using namespace std;

class InsurancePolicy
{
    public:
        InsurancePolicy();
        InsurancePolicy(int pNr, string pHolder, double aRate);
        ~InsurancePolicy();
        void setPolicy(int pNr, string pHolder, double aRate);
        int get_pNr()const;
        string get_pHolder()const;
        double get_aRate()const;

        void showPolicy(ostream & out)const;
    private:
        int policyNr;
        string policyHolder;
        double annualRate;
};


#endif //ASS4_INSURANCEPOLICY_H
