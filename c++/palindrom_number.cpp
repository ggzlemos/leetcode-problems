#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        string str_number = to_string(x);
        int counter = 0;
        int reverse_counter = str_number.length()-1;

        while (counter < str_number.size()){
            if(str_number[counter] != str_number[reverse_counter]){
                return false;
            }

            counter++;
            reverse_counter--;
        }

        return true;       
    }
};