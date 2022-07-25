#pragma once

#include "src/api.h"
#include "src/item.h"
#include "src/people.h"
#include "src/pay_list.h"
using namespace std;

class group {
    private:
        int gid;
        unsigned int number_of_people;
        vector<item> item_list;
        vector<people> people_list;
        vector<pay_list> pay_table;
    public:
        group(int arg_gid);
        ~group();
        void add_people_to_group(people arg_people);
        int create_item(string arg_name, map<int, int> arg_people_pay, vector<people> arg_people);
        void put_item_data(int arg_iid, map<int, int> arg_people_pay, vector<people> arg_people);
        item* get_item_data(int arg_iid);
        vector<pay_list> pay_list_return();
};

group::group(int id) {
    gid = id;
    number_of_people = 0;
}

void group::add_people_to_group(people arg_people) {
    number_of_people += 1;
    people_list.push_back(arg_people);
}

int group::create_item(string arg_name, map<int, int> arg_people_pay, vector<people> arg_people) {
    int new_iid = item_list.size();
    
    item new_item(new_iid, arg_name, arg_people_pay, arg_people);
    item_list.push_back(new_item);
    return new_iid;
}

void group::put_item_data(int arg_iid, map<int, int> arg_people_pay, vector<people> arg_people) {
    item_list[arg_iid].modify_data(arg_people_pay, arg_people);

    
}

item* group::get_item_data(int arg_iid) {
    item* ptr_item;
    
    ptr_item = &item_list[arg_iid];
    return ptr_item;
}

vector<pay_list> group::pay_list_return() {
    // un-finish

}
