#ifndef Transaction_h
#define Transaction_h

#define DIFICULTY 4

#include <stdio.h>
#include <string>
#include <vector>
#include <time.h>
#include<iostream>
using namespace std;

class Transaction
{
    private:
        double amount;
        string sender;
        string receiver;
        time_t timestamp;
    public:
        Transaction();
        Transaction(double amount, string sender, string receiver, time_t time);
        double getAmount();
        string getSender();
        string getReceiver();
        time_t getTimestamp();
};

#endif
