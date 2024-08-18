class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int i=0;
        while(i<n){
            char curr=chars[i];
            int count=0;
            while(i<n && curr==chars[i]){
                count++;
                i++;
            }
            chars[index]=curr;
            index++;
            if(count>1){
                string cnt=to_string(count);
                for(auto x:cnt){
                    chars[index]=x;
                    index++;
                }
            }
        }
        return index;
    }
};