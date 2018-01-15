/************************************************************************************************************************************/
/** @file		printBoard.cpp
* 	@brief		x
* 	@details	x
*
* 	@author		Justin Reina, Firmware Engineer, Misc. Company
* 	@created	1/9/18
* 	@last rev	1/9/18
*
* 	@section	Opens
* 			none current
*
* 	@section	Legal Disclaimer
* 			All contents of this source file and/or any other Misc. Product related source files are the explicit property of
* 			Misc. Company. Do not distribute. Do not copy.
*/
/************************************************************************************************************************************/
#include "stdafx.h"
#include <iostream>
#include <vector>
#include "stdcomments.h"
using namespace std;

//Typedefs
typedef int Board;

//Constants
const int N = 5;															/* 2D dimension of board <N,N>							*/
const int NUM_OPTIONS = 8;

//Protos
int recurse(void);
void printBoard(void);

//Data
Board board = { 0 };														/* init to empty										*/


/************************************************************************************************************************************/
/**	@fcn		int main(void)
*  @brief		x
*  @details		x
*  @return		(int) status of operation
*/
/************************************************************************************************************************************/
int main(void) {

	//Algorithm
	int result = recurse();

	//Print Results
	printBoard();

    return EXIT_SUCCESS;
}

/************************************************************************************************************************************/
/**	@fcn		int recurse(Board brd)
*  @brief		find the lowest cost path available
*  @details		x
*/
/************************************************************************************************************************************/
int recurse(void) {

	/** options (A-H) 
	 *	A: +1,+2
	 *	B: +2,+1
	 *	C: +2,-1
	 *	D: +1,-2
	 *	E: -1,-2
	 *	F: -2,-1
	 *	G: -2,+1
	 *	H: -1,+2
	 */	
	int n_options[NUM_OPTIONS] = { 0 };

	//for each option

	return EXIT_FAILURE;
}



/************************************************************************************************************************************/
/**	@fcn		void printBoard(void)
*  @brief		print the board to the console
*  @details		x
*/
/************************************************************************************************************************************/
void printBoard(void) {

	int i, j;


	//For each column
	for(i=0; i<N; i++) {
		cout << "[" << i << "]: ";											/* print header											*/

		//For each row
		for (j = 0; j < N; j++) {
			
			if (j) {
				cout << ", ";
			}
			
			cout << board[i][j];											/* print <R,C>											*/
		}
		cout << endl;														/* print EOL											*/
	}

	cout << "Complete." << endl;

	return;
}

