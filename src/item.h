#pragma once

#include "src/api.h"
#include "src/people.h"
using namespace std;

class item {
    private:
        int iid;
        string iname;
        map<int, int> pay_table; // <pid, pay>  How much did the person pay for this item.
        vector<people> people_list;
    public:
        item(int arg_iid, string arg_name, map<int, int> arg_people_pay, vector<people> arg_people);
        ~item();
        void modify_data(map<int, int> arg_people_pay, vector<people> arg_people);
};

item::item(int arg_iid, string arg_name, map<int, int> arg_people_pay, vector<people> arg_people) {
    iid = arg_iid;
    iname = arg_name;
    pay_table = arg_people_pay;
    people_list = arg_people;
}

void item::modify_data(map<int, int> arg_people_pay, vector<people> arg_people) {
    pay_table = arg_people_pay;
    people_list = arg_people;
}