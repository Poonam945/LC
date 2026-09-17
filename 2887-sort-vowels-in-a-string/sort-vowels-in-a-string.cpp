class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<s.size();i++){
            //counts
            //in lower we will store count of a e i o u
            //in upper .......................A E I O U
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';//to indicate that here is vowel.

            }
           else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                lower[s[i]-'a']++;//lower wale ke index pe jake usko increamnt krdo..jo element aya hai
                  s[i]='#';//to indicate that here is vowel.


            }
        }
          //sorting in ascending.. A ki ascii value is less than a..
          //so first we will store upper wale;
         
         string vowel;
         //upper
         for(int i=0;i<26;i++){
            char c='A'+i;
            while(upper[i])
            {
                vowel+=c;
                upper[i]--;
                
            }

         }

         //lower
        for(int i=0;i<26;i++){
            char c='a'+i;
            while(lower[i])
            {
                vowel+=c;
                lower[i]--;
                
            }
;
         }

         //now original string ke ander ye value insert krni hai..# me insert krni h

         int first=0, second=0;//second point kr rha hai vowel ko.. jo sort bnke ayi
        while(second<vowel.size()){
        
                 if(s[first]=='#'){
                    s[first]=vowel[second];
                    second++;

                  }
                  first++;

        }
      return s;
        
    }
};