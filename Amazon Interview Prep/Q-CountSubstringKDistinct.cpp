#include <iostream>
#include <cstring>

int countKDistinct(std::string str, int k)
{
    int n = str.length();

    int result = 0;

    int count[26];

    for(int i = 0; i < n; i++){
        int dist_count = 0;

        memset(count, 0, sizeof(count));

        for (int j = i; j<n; j++){

            if(count[str[j] - 'a'] == 0)
                dist_count++;

             count[str[j] - 'a']++; 
  
            // If distinct character count becomes k, 
            // then increment result. 
            if (dist_count == k) 
                result++; 
            if(dist_count > k) break;
        }
    }
    
    return result;
}

int main() 
{ 
    std::string str = "abcbaa"; 
    int k = 3; 
    std::cout << "Total substrings with exactly "
         << k <<" distinct characters :"
         << countKDistinct(str, k) << std::endl; 
    return 0; 
} 