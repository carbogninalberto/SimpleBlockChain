#pragma once
#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
	Blockchain();

	void AddBlock(Block bNew);
	Block getBlock(uint32_t index);

private:
	uint32_t _nDifficulty;
	vector<Block> _vChain;

	Block _GetLastBlock() const;
};