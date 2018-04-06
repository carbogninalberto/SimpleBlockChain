#include "Blockchain.h"

int main() {
	cout << "< LILA BLOCKCHAIN >" << endl;
	Blockchain bChain = Blockchain();

	cout << "Mining block 1..." << endl;
	bChain.AddBlock(Block(1, "Block 1 Data"));

	bChain.getBlock(1).GetTTime();

	cout << "Mining block 2..." << endl;
	bChain.AddBlock(Block(2, "Block 2 Data"));

	bChain.getBlock(2).GetTTime();

	cout << "Mining block 3..." << endl;
	bChain.AddBlock(Block(3, "Block 3 Data"));

	bChain.getBlock(3).GetTTime();

	char a;
	cout << "[use 'q' to exit] >";
	cin >> a;
	return 0;
}