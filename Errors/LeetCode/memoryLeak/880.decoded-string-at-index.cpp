//decoded-string-at-index

class Solution {
public:
    string decodeAtIndex(string S, int K) {
        
        string copy = "";
        
        for(int c : S) {
            if(! isdigit(c) ){
                copy += c;
            }
             
            else if(isdigit(c)){
                for(int k =0; k<c-1; k++) {
                    copy += copy;
                }
            }
        }
        
        return copy;
        
    }
};
