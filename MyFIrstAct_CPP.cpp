#include <iostream>
using namespace std;

void listFile(){
	int choice
	cout << "\tLIST FILE DETAILS\n";
	cout << "--------------------------\n";
	cout << "1. List All Files \n";
	cout << "2. List of Extension Files \n";
	cout << "3. List of Name Wise\n";
	cout << "Enter your Choice: ";
		cin >> choice;
}

void listOfAllFile(){
	cout << "\nList of All(*.*) Files \n";
	cout << "file1.txt\nfile2.cpp\nreport.doc\nimage.jpg\n(continues...)\n";
	cout << "\nTotal Files: 4\n";
	cout << "Press any key  to continue...\n\n";
	
}

void createDirec(){
	String direcName;
	cout << "Enter the Directory name: \n";
		cin >> direcName;
	cout << "Current directory: C: \\Users\\UserName\\Documents\n";
	cout << direcName << "Directory Successfully Created\n";
	cout << "Press any key to continue\n";
}

int main (){
	listFile();
	listOfAllFile();
	createDirec();
	

	return 0:
}
















