/*
 * By: Irvin Favors
 * F22-CISC220-010
 * MainJokes.cpp
 */


#include "bst.hpp"
#include "TreeInterface.hpp"
#include <iostream>
using namespace std;

int main() {
	TreeInterface *tree = new TreeInterface("TestingBST.txt");

	cout << endl;
	tree->tree->printTreePre();
	tree->tree->printTreeIO();
	tree->tree->printTreePost();
	cout << "##############################################################"<<endl;

	cout <<endl<<endl<< "********* Testing Find ************" << endl;
	cout << "Inserting  Bellatrix: " << endl;
	tree->tree->find("Bellatrix","Boris");
	cout << endl;

	cout << "Finding Grotesque: " << endl;
	tree->tree->find("Grotesque","Griselda");
	cout << endl;

	cout << "Finding Poltergeist: " << endl;
	tree->tree->find("Poltergeist","Penelope");
	cout << endl;

	cout << "Finding Evil: " << endl;
	tree->tree->find("Evil","Edward");
	cout << endl;
	cout << "##############################################################"<<endl;


	cout <<endl<<endl<< "********* Testing Insert ************" << endl;
	cout << "Inserting Vladimir Vladislov: " << endl;
	tree->tree->insert("Vladislov","Vladimir", 323, "What song does Dracula hate most? You Are My Sunshine.");
	cout << endl;
	cout << endl << "***Printing IO ***" << endl;
	tree->tree->printTreeIO();

	cout << endl << endl<<"Inserting Nelly Nobody: " << endl;
	tree->tree->insert("Nobody","Nelly", 761, "We all Albert Einstein was a genius... but his brother Frank was a monster!");
	cout << endl;
	cout << endl << "***Printing IO ***" << endl;
	tree->tree->printTreeIO();

	cout << endl << endl<<"Inserting Morty Mortician: " << endl;
	tree->tree->insert("Mortician","Morty", 513, "Why did the Monster's grandma knit him a third sock?  Because she heard he grew another foot!");
	cout << endl;
	cout << endl << "***Printing IO ***" << endl;
	tree->tree->printTreeIO();




	cout <<endl<<endl<< "********* Testing Removing ************" << endl;

	cout << "Removing No Children (Arachnea Adams)"<<endl;
	tree->tree->remove("Adams","Arachnea");
	tree->tree->printTreeIO();
	cout << endl<<endl<<"************************************" << endl;


	cout << "Removing Node with One Kid (Fabian Fearful)"<<endl;
	tree->tree->remove("Fearful","Fabian");
	tree->tree->printTreeIO();
	cout << endl<<endl<<"************************************" << endl;

	cout << "Removing Node with two kids (Jason Jinx)"<<endl;
	tree->tree->remove("Jinx","Jason");
	tree->tree->printTreeIO();
	cout << endl<<endl<<"************************************" << endl;


	cout << "Ready to Delete?"<< endl;
	string ans;
	cin >> ans;
	if (ans == "yes" || ans == "Yes"){
		tree->tree->clearTree();
		delete tree;
	}



	cout <<"************************************" << endl;
	TreeInterface *joketree = new TreeInterface("Jokes2.txt");
	joketree->Interface();
	return 0;
}
