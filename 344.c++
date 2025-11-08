class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int st=0,end=n-1;
        while(st<=end){
            int a=s[st];
            s[st]=s[end];
            s[end]=a;
            end--;
            st++;
        }
    }
};
