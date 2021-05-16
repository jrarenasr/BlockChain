#include"block.h"
#include<sstream>

Block::Block(int index,Transaction *data)
{
    this->nonce=-1;
    this->timestamp=time(nullptr);
    this->data=data;
}

string Block::getHash()
{
    return this->hash;
}

void Block::setPrevHash(string hash)
{
    this->prevHash = hash;
}

Transaction *Block::getData()
{
    return this->data;
}

void Block::mineBlock(int difficulty)
{
    string str="";
    
    for(int i=0;i<difficulty;++i)
    {
        str=str+"0";
    }

    cout << "Minning...";
    do
    {
        this->nonce++;
        this->hash=calculateHash();

    }while(this->hash.substr(0,difficulty)!=str);

    cout<<" Block mined." << endl;
}

string Block::calculateHash() const
{
    stringstream ss;
    ss << this->index << this->timestamp << this->data << this->nonce << this->prevHash;
    return sha256(ss.str());
}
