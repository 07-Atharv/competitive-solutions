    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // These string is used for the storing the result of the string 
        string temp="";
        //stack is used for the storing the strings in the lifo manner
        stack<string>st;
        int n=S.size();
        for(int i=0;i<n;i++)
        {
            //store the current word
                if(S[i]!='.')
                {
                    temp = temp + S[i];
                }
                //push the current word in the stak and flush the string
                else
                {
                    st.push(temp);
                    temp="";
                }
            
        }
        //to store the last word because there is dot and not satisfying condition
        st.push(temp);
        
        string final="";
        //till the stack is empty
        while(!st.empty())
        {
            //take the top element and add it to ans
            string str=st.top();
            st.pop();
            //store the ans in final string
            final+=str+".";
        }
        //we dont want last dot so we remove the last word from the string using the pop back inbuilt method
        final.pop_back();
        //at last return the string
        return final;
    } 