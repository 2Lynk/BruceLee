#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/* in the maxiRecursive function we ask for the vector, highestnumber and currentstep
to be given as arguments. By default the highestNumber and currentStep are both 0.

First off we check if the current step is not equal to the size of the vector,
if it is this means we have reached the last number and we have checked the whole
vector and we can print our highest number.
If its not equal then we check if the number in the vector at the currentstep is 
higher then the highestnumber, if it is, we set the highestnumber to the number 
in the vector at the currenstep (the new highestnumber) and we recursivly call 
this function again. 
If it is not higher we increment the currenstep variable with 1 and recursivly call 
this function again to check for the highest number.

*/
int maxiRecursive(vector<int> &v_vector, int i_highestNumber, int i_currentStep){
	 if(i_currentStep != v_vector.size()){
	 	if(v_vector.at(i_currentStep) > i_highestNumber){
	 		i_highestNumber = v_vector.at(i_currentStep);
	 		maxiRecursive(v_vector, i_highestNumber, i_currentStep);
	 	}else{
	 		i_currentStep++;
	 		maxiRecursive(v_vector, i_highestNumber, i_currentStep);
	 	}
	 }else{
	 	cout << "The highest number is: " << i_highestNumber << endl;
	 }    
}

/* In this function we ask for the vector and vectorsize to be givin as arguments
Then we first check if the given vectorsize is lower then or equal to 0
if so we reply that this is a invalid size for the vector.

If the vector size is valid, we check if the size of the vector is not equal to the
given vector size, if this is true we ask the user to put in a number, we push 
that number into the vector and we recursively call this function again to fill
the next number in the vector.

if the vector size is the same as the given size of the vector this would mean
its full and we can call the function maxiRecursive with the vector to look for
the highest number in the vector.
*/
vector<int> fillVectorRecursive(vector<int> v_vector, int i_vectorSize){
	if(i_vectorSize <= 0){
		cout << "Error, the vector can't have a size of or less then 0" << endl;
	}else if(v_vector.size() != i_vectorSize){
		int i_number = (cin >> (cout << "Number " << v_vector.size()+1 << ": ", i_number), i_number);
		v_vector.push_back(i_number);
		fillVectorRecursive(v_vector, i_vectorSize);
	}else{
		maxiRecursive(v_vector, 0, 0);
	}
}

/* In the main function we ask for the size of the vector to be declared
We can use this later to keep track of the amount of numbers we have to put in
then we call the function fillVectorRecursive to fill the vector recursivly */
int main(){
   int i_vectorSize = (cin >> (cout << "Vector size: ", i_vectorSize), i_vectorSize);
   vector<int> v_vector;
   fillVectorRecursive(v_vector, i_vectorSize);
}
