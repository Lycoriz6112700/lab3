#include <iostream>
using namespace std;
int main ()
{
    string x ,y ;
    int N, count;
    count =0 ;
    cout << "Enter the first test: ";
    cin >> x ;
    cout << "Enter the second test: ";
    cin >> y ;
    cout << "Enter N: ";
    cin >> N;
    while (count < N)
    {
        if(count%2 ==0){
            cout<< x << " ";
}else{
    cout<< y << " ";
    }
    count = count+1;

} 
return 0;
}