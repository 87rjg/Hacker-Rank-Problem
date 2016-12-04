/**The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

Laura plants a Utopian Tree sapling with a height of 1 meter at the onset of spring. How tall will her tree be after N growth cycles?

Input Format

The first line contains an integer,T , the number of test cases. 
T subsequent lines each contain an integer,N , denoting the number of cycles for that test case.
**/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int growth(int n)
    {
    int height=1;
    if(n==0)
        return height;
    while(n>0)
        {
        height=height*2;
        n--;
        if(n>0)
            {
            height=height+1;
            n--;
        }
    }
    return height;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
     cout<<growth(n)<<endl;
        }
    return 0;
}
