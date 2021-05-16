#include"blockchain.h"

using namespace std;

int main()
{
    
    Blockchain * blockChain = new Blockchain();

    blockChain->addBlock(new Block(1,new Transaction(1000.0,"George","Liza",time(NULL))));
    blockChain->addBlock(new Block(2,new Transaction(1000.0,"Liza","Frank",time(NULL))));
    blockChain->addBlock(new Block(3,new Transaction(1000.0,"Frank","Mary",time(NULL))));

    blockChain->printChain();

    return 0;
}
