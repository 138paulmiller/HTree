#include "htree.h"


int main()
{
	std::cout << "\nHTree\n"; 
	HTree h;
	std::string data = "Mary had a little lamb";
	std::cout <<"\nData:\n" << data << "\n"; 
	data= h.encodeData(data);

	std::cout <<"\nEncoded Data:\n" << data << "\n"; 

	data = h.decodeData(data);
	std::cout << "\nDecoded Data:\n" << data << "\n\n"; 
	h.print();
	std::cout << "\n";
	return 0;
}

