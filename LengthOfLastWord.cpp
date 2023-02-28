class Solution {
public:
    int lengthOfLastWord(string s) {
      stack<char> s1;
      int count=0;
      for(int i=0;i<s.size();i++){
          s1.push(s[i]);
      }
//here we push all the element of the string to stack

/*
now we will pop() all the blank spaces from the top of stack so 
that we reach the last later of the last word.
*/

    while(s1.top()==' ')s1.pop();

/*
now we run the while loop util the stack is empty in the case of 
only one word is there or the blank space comes which seperate the two words.

*/

      while(!s1.empty()&&s1.top()!=' '){
        count++;
        s1.pop();
          
    }
// now we itterate the count to count the length of the last word and return  it.

    return count;

    }
};