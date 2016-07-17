//
//  priorityqueue_pair.cpp
//  hackerearth
//
//  Created by Joy Panikulam on 7/17/16.
//  Copyright © 2016 Joy Panikulam. All rights reserved.
//

#include <iostream>
#include <queue>
#include <map>
using namespace std;
int arr[100000]={0};
int coun[100000]={0};
int main()
{
    map<int,int> map;
    priority_queue<pair<int,int> > pq;
    
    int n;
    cin>>n;
    int m;
    cin>>m;
    int i;
    int k=0;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if ( map.find(arr[i]) == map.end() ) {
            map[arr[i]]=k;
            coun[k]++;
            k++;
        }
        else {
            coun[map[arr[i]]]++;
        }
        pq.push(make_pair(coun[map[arr[i]]],arr[i]));
        cout<<pq.top().second<<" "<<pq.top().first<<endl;
    }
    
    return 0;
}
