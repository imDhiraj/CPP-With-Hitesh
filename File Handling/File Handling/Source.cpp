#include<iostream>
#include<string>
using namespace std;

//the File createing deleteing and editething operation can be prformed by both vs_code and vs but because it bulid the project it needs 
//some modificantion in fopen like function that deals with system but other then that like remove and rename work as fine as possible

//perfeing vs code over vs is good option for see the change in realtime 


int main() {

	static const char* orignalFile = "OrignalFile.txt";
	static const char* editedFile = "edieted file.exe";

	rename(orignalFile,editedFile);
	//remove(editedFile);

	// FILE* fh = fopen(orignalFile, "w");
	// fclose(fh);
	

	/*FILE* fh;
	fopen_s(&fh, orignalFile, "w");
	fclose(fh);*/
}