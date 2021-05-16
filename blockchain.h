#ifndef Blockchain_h
#define Blockchain_h

#include"block.h"

class Blockchain
{
public:
    Blockchain();
    void addBlock(Block *block);
    void printChain();
private:
    int difficulty;
    vector<Block> chain;
    Block getLastBlock() const;
};

#endif