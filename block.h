#ifndef Block_h
#define Block_h

#include "transaction.h"
#include"sha256.h"
 
class Block
{
    public:
        Block(int index,Transaction *data);
        string getHash();
        string getPrevHash();
        void setPrevHash(string);
        void mineBlock(int difficulty);
        Transaction *getData();
 
    private:
        int index;
        long nonce;
        Transaction *data;
        string hash;
        string prevHash;                
        time_t timestamp;
        string calculateHash() const;
        string duration(int seconds);
};

#endif