template <class ItemType>
void BinarySearchTree<ItemType>::balanceTree(string filename){
	ifstream fileIn;
	ofstream fileOut(filename.c_str());
	int numNodes = getNumberOfNodes();
	BinaryNode<ItemType>* p = rootPtr;
	printFile(fileOut, p);
	fileOut.close();
	clear();
	fileIn.open(filename.c_str(), ios::in);
	rootPtr = readFullTree(fileIn, numNodes);
	fileIn.close();
}