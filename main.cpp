#include "htree.h"


int main(int argc, char**argv)
{
	std::cout << "\nHTree\n"; 
	HTree h;
	std::string data;
	if(argc == 2)
		data = argv[1];
	else
		data  = "Hello! I am a Huffman tree";
	std::cout <<"\nData:\n" << data << "\n"; 
	data= h.encodeData(data);

	std::cout <<"\nEncoded Data:\n" << data << "\n"; 

	data = h.decodeData(data);
	std::cout << "\nDecoded Data:\n" << data << "\n\n"; 
	h.print();
	std::cout << "\n";
	return 0;
}

