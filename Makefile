all: block.o blockchain.o sha256.o transaction.o main.o
	g++ -o mycoin block.cpp blockchain.cpp sha256.cpp transaction.cpp main.cpp
mycoin: block.o blockchain.o sha256.o transaction.o main.o
clean:
	$(RM) block.o blockchain.o sha256.o transaction.o main.o

