#include <iostream>

using namespace std;

int main()
{
    int number, space,star, flag=1;
    cout<<"Enter the number of star in one side : ";
    cin>>number;
    // cout<<"Number "<<number;
    int total = 2*number-1;
    star = 1;
    space = number-star;
    // cout<<"Total "<<total;

    for(int i=0; i<total; i++){
        for(int k=0; k<space; k++){
            cout<<" ";
        }
        for(int j=0; j<star; j++){
            cout<<"*";
        }

        // cout<<"star "<<star;
        // cout<<"Space "<<space;
        if(star < total && flag){
            star = star + 2;
            flag = 1;
        } else {
            star = star - 2;
            flag = 0;
        }

        if(space > 0 && flag){
            space = space - 1;
        } else {
            space = space + 1;
        }
        cout<<endl;
    }

    return 0;
}
