#Huffman Tree <br>
	C++ class demonstrating Huffman encoding and decoding by generating a Huffman Tree.<br>
	-The Huffman tree is a set of Symbol, frequency pairs. <br>
	-Each symbol, frequency pair is added to the tree, 
	after all pairs are added the code map is generated by heapifying the set.<br>
	-Heapify : The two pairs with the smallest frequencies are removed from the set, merged into an
	internal pair whose freq = the sum of each pairs frequency.<br> 
	-The merged pair is then added to the set.

##Encoding/Decoding with Code Table
###Demonstration for an example data string
Data:
Hello! I am a Huffman tree

Encoded Data:
0110 101 0101 0101 00101 00100 11 00011 11 100 0100 11 100 11 0110 00010 0011 0011 0100 100 00001 11 00000 0111 101 101 

Decoded Data:
Hello! I am a Huffman tree

Code Table:
| Sym | Code |
| :-- | :-----: |
|   |     11 |
| ! |  00100 |
| H |   0110 |
| I |  00011 |
| a |    100 |
| e |    101 |
| f |   0011 |
| l |   0101 |
| m |   0100 |
| n |  00001 |
| o |  00101 |
| r |   0111 |
| t |  00000 |
| u |  00010 |


