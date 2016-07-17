//
//  main.cpp
//  hackerearth
//
//  Created by Joy Panikulam on 7/17/16.
//  Copyright © 2016 Joy Panikulam. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //printf("Hello World!\n");
    priority_queue<int> q;
    int n;
    cin>>n;
    int arr[100000]={0};
    
    int i;
    for(i=0;i<n;i++){

        cin>>arr[i];
        q.push(arr[i]);
        if(i<2)
            cout<<"-1\n";
        else{
            int high1=q.top();
            q.pop();
            int high2=q.top();
            q.pop();
            int high3=q.top();
            cout<<high1*high2*high3<<endl;
            q.push(high2);
            q.push(high1);
            
        }
    }
    
    return 0;
}
