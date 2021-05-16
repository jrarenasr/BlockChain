#include "transaction.h"

Transaction::Transaction(double amount, string sender, string receiver, time_t time)
{
      this->amount = amount;
      this->sender = sender;
      this->receiver = receiver;
      this->timestamp = time;
}

double Transaction::getAmount(){
      return amount;   
}

string Transaction::getSender(){
      return sender;
}      

string Transaction::getReceiver(){
      return receiver;
}

time_t Transaction::getTimestamp(){
      return timestamp;
}
