#include <iostream>
#include <vector>

using namespace std;

void two_sum(vector<int> &v_vector , int i_target){
    bool b_match = false;
    for (int i = 0; i < v_vector.size(); i++) {
        for (int j = 0; j < v_vector.size(); j++) {
            if(v_vector[i]+v_vector[j]==i_target && !b_match){
                b_match = true;
                cout<<"Hit! The number "<<v_vector[i]<<" at position "<< i << " in the vector adds with number " << v_vector[j] << " at position " << j << " adds to " << i_target << endl;
            }
        }
    }
    if(!b_match){
        cout << "No match can be found with the numbers";
    }
}

int main()
{
    int i_anwser;
    int i_number;
    vector<int> v_vector = {89, 3, 2, 10, 22, 11};
    cout<<"The vector contains 89, 3, 2, 10, 22, 11\n";
    cout<<"Enter a number:\n";
    cin>>i_number;
    
    two_sum(v_vector, i_number);

    return 0;
}
