#include "htree.h"


int main(int argc, char**argv)
{
	std::cout << "\nHTree"
				<< "\nencode - Prompts to encode new data string"
				<< "\ndecode - Decodes encoded string"
				<< "\nprint  - Prints code table\n" 
				<< "\nexit  - Exits program\n"; 
	HTree h;
	std::string encodedData,decodedData, input;
	if(argc == 2)
		input = argv[1];


	do
	{
		std::cout << ">";
		std::getline(std::cin,input);
		if(input == "encode")
		{
			std::cout << "Data:";
			std::getline(std::cin,input);
			encodedData= h.encodeData(input);
			std::cout <<"\nEncoded:\n" << encodedData << "\n"; 
		}
		else if(input == "decode")
		{
			decodedData= h.decodeData(encodedData);
			std::cout <<"\nDecoded:\n" << decodedData << "\n"; 
		}
		else if(input == "print") 
		{
			h.print();
			std::cout << "\n";
		}
	}while(input != "exit");
	return 0;
}

