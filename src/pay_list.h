#pragma once

#include "src/api.h"
using namespace std;

class pay_list {
    private:
        people person;
        map<int, int> return_pay_table; // <pid, pay>  How much does pid_A have to pay to someone else.
    public:
        pay_list(people arg_person, int arg_to_pay_pid, int to_pay);
        ~pay_list();
        void put_to_pay_data();
        pay_list get_to_pay_data();
};