class Solution {
public:
    string longestPalindrome(string s) {
        
        int len = s.size();
    //odd
    int st = 0;
    int max_len = 1;
    for(int i = 0 ; i < len ; i++)
    {
        int l = i , r = i;
        while(l >= 0 && r < len)
        {
           if(s[l] == s[r])
           {
              l--;
              r++;
           }
           else
           {
              break;
           }
        }
        int size = r - l - 1;
        if(max_len < size)
        {
            max_len = size;
            st = l + 1;
        }
    }
    //even
    for(int i = 0 ; i < len - 1 ; i++)
    {
        int l = i , r = i + 1;
        while(l >= 0 && r < len)
        {
           if(s[l] == s[r])
           {
              l--;
              r++;
           }
           else
           {
              break;
           }
        }
        int size = r - l - 1;
        if(max_len < size)
        {
            max_len = size;
            st = l + 1;
        }
    }
    return s.substr(st , max_len);
    }
};