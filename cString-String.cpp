#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char dest[120] = "Hello\n";
	char str2[] = " World";


	cout << " " << strlen(dest) << " " << endl;
	cout << " " << strlen(str2) << " ";
	//check if both are same or not
	(strcmp(dest, str2) == 0) ? cout << "Same Strings" : cout << "Not Same";
	
	// Concatenation of two cStrings
	//strncat_s(dest, str2, 12);

	//copy c string
	//strcpy_s(dest, str2);
	//cout << dest;

	//copy particular lenght of characters, 
	strncpy_s(dest, str2, 3);
	cout << dest;
	


	return 0;

}