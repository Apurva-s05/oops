/*                       creating a file
#include <fstream>
#include <iostream>
using namespace std;


int main() {

	// Create an ofstream (Output File Stream) object.
	ofstream oFile;

	// Create a file (if it doesn't exist) and open it.
	oFile.open("my-note.txt");

	// Write on the file.
	oFile << "Hi! \n";
	oFile << "I love to travel. \n";
	oFile << "I am " << 20 << " years old. \n";

	// Close the opened file.
	oFile.close();

*/

/*                       Read a file and print in the output                                   */

#include <fstream>
#include <iostream>
using namespace std;


int main() {
	string str;

	// Create ifstream (Input File Stream) object.
	ifstream iFile;

	// Open the file.
	iFile.open("my-note.txt");

    //eof:EOF=End Of File	
	while(!iFile.eof()) {            //condition will be true until the end of file is reached
		getline(iFile, str);		// Reads a line.
		cout << str << endl;		// Prints the line.
	}

	// Close the opened file.
	iFile.close();

	return 0;
}
