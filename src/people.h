#pragma once

#include "src/api.h"
using namespace std;

class people {
    private:
        int pid;
        string pname;
        string network_ip;
    public:
        people(int arg_pid, string arg_pname, string arg_network_ip);
        ~people();
        void update_ip(string arg_network_ip);
        void update_name(string arg_pname);
};

people::people(int arg_pid, string arg_pname, string arg_network_ip) {
    pid = arg_pid;
    pname = arg_pname;
    network_ip = arg_network_ip;
}

void people::update_ip(string arg_network_ip) {
    network_ip = arg_network_ip;
}

void people::update_name(string arg_pname) {
    pname = arg_pname;
}