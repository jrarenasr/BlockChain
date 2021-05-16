#include "blockchain.h"
#include "transaction.h"

Blockchain::Blockchain()
{
    this->difficulty=DIFICULTY;
    this->chain.emplace_back(Block(0,new Transaction(0.0,"Genesis","Genesis",time(NULL))));
}

void Blockchain::addBlock(Block *block)
{
    block->setPrevHash(getLastBlock().getHash());
    block->mineBlock(this->difficulty);
    this->chain.push_back(*block);
}

Block Blockchain::getLastBlock() const
{
    return this->chain.back();
}

void Blockchain::printChain()
{
    vector<Block>::iterator it;
    for (it = this->chain.begin(); it != this->chain.end(); ++it) {
        cout << "   Sender: "   << it->getData()->getSender()    << 
                " - Receiver: " << it->getData()->getReceiver()  << 
                " - Amount: "   << it->getData()->getAmount()    << 
                " - Time: "     << it->getData()->getTimestamp() << endl;
    }    
}

