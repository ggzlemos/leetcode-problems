#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        unordered_map <char, int> dict;
        int answer = 0;

        dict.insert({'I', 1});  
        dict.insert({'V', 5}); 
        dict.insert({'X', 10}); 
        dict.insert({'L', 50}); 
        dict.insert({'C', 100}); 
        dict.insert({'D', 500}); 
        dict.insert({'M', 1000}); 

        for (int i = 0; i < s.length(); i++){
            if(s[i] == 'I'){
                if (s[i+1] == 'V')
                {
                    answer = answer + 4;
                    i++;
                }
                else if (s[i+1] == 'X')
                {
                    answer = answer + 9;
                    i++;
                }

                else{
                    answer++;
                }
                
            }
            
            else if (s[i] == 'X'){
                if (s[i+1] == 'L')
                {
                    answer = answer + 40;
                    i++;
                }
                else if (s[i+1] == 'C')
                {
                    answer = answer + 90;
                    i++;
                }
                else{
                    answer = answer + 10;
                }
                    
            }

            else if (s[i] == 'C'){
                if (s[i+1] == 'D')
                {
                    answer = answer + 400;
                    i++;
                }
                else if (s[i+1] == 'M')
                {
                    answer = answer + 900;
                    i++;
                }
                else{
                    answer = answer + 100;
                }
                    
            }    

            else{
                answer = answer + dict[s[i]];
            }       
        }
        return answer;        
    }
};