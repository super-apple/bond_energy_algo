//
// This code generates a set of simple predicates
//
// Author: Zhigang Lu

#include <iostream>
#include <stdlib.h>

using namespace std;

// main() func
int main () {
	cout << "UNIVERSITY=UofA\tUNIVERSITY=Flinders\tUNIVERSITY=TORRENS\tUNIVERSITY=UniSA" << endl;
	cout << "PROGRAM=PhD\tPROGRAM=BSE\tPROGRAM=MSE\tPROGRAM=MA\tPROGRAM=BCS\tPROGRAM=MCI\tPROGRAM=MCS" << endl;
	cout << "TUITIONFEE<20\tTUITIONFEE>=5\tTUITIONFEE<5\tTUITIONFEE>=20\tTUITIONFEE<25\tTUITIONFEE<15\tTUITIONFEE<30\tTUITIONFEE>23\tTUITIONFEE>=25\tTUITIONFEE>=30\tTUITIONFEE>=15\tTUITIONFEE<=23" << endl;
	cout << "ENROLMENT<10\tENROLMENT<=15\tENROLMENT>5\tENROLMENT>=10\tENROLMENT<20\tENROLMENT>=25\tENROLMENT>=20\tENROLMENT<=5\tENROLMENT<25\tENROLMENT>15";

	return 0;
}