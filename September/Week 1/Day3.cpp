/*
If the original string has a repeating substring, the repeating substring can be no larger than 1/2 the length of the original string. Ex: “abcabc” would be “abc”.
By doubling the input string and removing the first and last character, i.e. “abcabcabcabc” => “bcabcabcab”, if the original string “abcabc” can be found in “bcabcabcab”, it means that “abcabc” is made up by repeating one of its a substring.

Algorithm
Construct a string pattern adding the input string str twice.
Remove the first and last characters in the pattern.
Find for str in the pattern, if the match is found return True else return False.


eturn s in (s + s )[1: -1]
Eg:

str: abab. Repeat str: abababab. Remove the first and last characters: bababa. Check if abab is a substring of bababa.
str: aba. Repeat str: abaaba Remove first and last characters: baab. Check if aba is a substring of baab.
Mathematical Proof:

Let P be the pattern that is repeated K times in a string S.

S = P*K.

Let N be the newly created string by repeating string S

N = S+S.

Let F be the first character of string N and L be the last character of string N

N = ( F+ P*(K-1) )+ (P*(K-1) + L)

N = F+ P(2K-2)+ L

If K = 1. i.e a string repeated only once

N = F+L. //as N != S So False

If K ≥ 2.

N = F+k'+ N
*/

class Solution {

public:

    bool repeatedSubstringPattern(string s) {

     // s+=s;   

    string pattern = s.substr(1) + s.substr(0,s.length()-1);

    return pattern.find(s) != string::npos;

    }

};
