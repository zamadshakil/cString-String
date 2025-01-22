#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str[] = "Hello\n";
	char str2[] = " World";


	cout << " " << strlen(str) << " " << endl;
	cout << " " << strlen(str2) << " ";
	//check if both are same or not
	(strcmp(str, str2) == 0) ? cout << "Same Strings" : cout << "Not Same";
	return 0;
}