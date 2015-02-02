/* 
 * File:   main.cpp
 * Author: Justin
 *
 * Created on February 1, 2015, 4:28 PM
 */

#include <iostream>
using namespace std;
//static int n=1;
//int cycleLength(int);
/*int main(int argc, char** argv){
    int i,j;
    cin>>i>>j;
    int z = 0;
    for(int a = i; i <= j; a++){
        int y = cycleLength(a);
        if(y > z)
            z = y;
        n = 1;
    }
    cout<<z<<endl;
    return 0;
}
int cycleLength(int x){
    if(x != 1){
        n++;
        if(x%2 == 0)
            cycleLength(x/2);
        else
            cycleLength(x*3 + 1);
    }
    return n;
}
*/
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int max=0;
    int n;
    for(int d=a;d<=b;d++){
        n=0;
        int x=d;
        while (x!=1){
            if (x%2==0)
                x=x/2;
            else
                x=(x*3)+1;
            n++;	
        }
        if (n>max)
            max=n;
    }
    cout<<n<<endl;
    return 0;
}