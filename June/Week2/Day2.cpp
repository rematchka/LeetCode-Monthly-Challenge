class Solution {
public:
    bool isSubsequence(string s, string t) {
      int m=s.size(),n=t.size();

       int j = 0; // For index of str1 (or subsequence 

       // Traverse str2 and str1, and compare current character  
       // of str2 with first unmatched char of str1, if matched  
       // then move ahead in str1 
       for (int i=0; i<n&&j<m; i++) 
           if (s[j] == t[i]) 
             j++; 

       // If all characters of str1 were found in str2 
       return (j==m); 

    }
};