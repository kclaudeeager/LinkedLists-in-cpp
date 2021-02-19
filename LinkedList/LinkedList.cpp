// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* Kwizera Claude                        219003851
* Kwizera Gashirabake Ermine            219000989
* Berimana Gloria                       219008901
* Isingizwe Clarisse                    219000467
*/
#include <iostream>
#include "LinkedList.h"


int main()
{
	std::cout << "Mwakoze kuza \n";
	LinkedList l;
	l.insertBack(3);
	l.insertFront(4);
	l.insertFront(5);
	l.insertFront(5);
	l.insertFront(5);
	l.insertBack(7);
	l.insertBack(5);
	l.insertFront(1);
	l.insertFront(1);
	l.insertFront(1);
	l.insertFront(1);
	//l.removeAll(1);
	l.removeAll(5);
	l.delConsecutiveDuplicates();
	
	l.printList();
	std::cout << std::endl <<"the size of the list becomes : "<< l.size()<<std::endl;
	
	/*l.printList();
	l.reverse();
	std::cout << l.size() << "\n";
	l.printList();
	l.Remove(3);
	l.printList();
	std::cout << l.size() << "\n";
	l.Remove(7);
	l.printList();
	std::cout << l.size() << "\n";
	l.Remove(5);
	l.printList();
	std::cout << l.size() << "\n";*/
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file