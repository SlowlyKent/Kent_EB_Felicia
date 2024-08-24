#include <iostream>
using namespace std;

void listFile(){
	int choice;
	cout << "--------------------------\n";
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
	string direcName;
	cout << "Enter the Directory name: \n";
		cin >> direcName;
	cout << "Current directory: C: \\Users\\UserName\\Documents\n";
	cout << direcName << "Directory Successfully Created\n";
	cout << "Press any key to continue...\n\n";
}
 
 void changeDirec() {
    string dirName;
    int choice;
    cout << "\nCurrent Directory: C:\\Users\\UserName\\Documents" << endl;
    cout << "----------------------------\n";
    cout << "Change Directory"<< endl;
    cout << "----------------------------\n";
    cout << "1. Step by Step Backward\n";
    cout << "2. Goto Root Directory\n";
    cout << "3. Forward Directory\n";
    cout << "Enter the Number: ";
    	cin >> choice;
    cout <<""<<endl;
    cout << "Please enter the Directory Name: ";
    	cin >> dirName;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\\" << dirName << endl;
    cout << "Press any key  to continue...\n\n";
}

void mainMenu() {
    int choice;
    do {
    	cout << "-----------------------\n";
        cout << "\tMAIN MENU\n";
        cout << "-----------------------\n";
        cout << "1. To Display List of Files\n";
        cout << "2. To Create New Directory\n";
        cout << "3. To Change the Working Directory\n";
        cout << "4. Exit\n";
        cout << "Enter the Number: ";
        cin >> choice;

        switch (choice) {
        case 1:
            listFile();
            listOfAllFile();
            break;
        case 2:
            
		}


int main (){
	

	return 0;
}
















