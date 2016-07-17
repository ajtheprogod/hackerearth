//
//  roy_trending_topics.cpp
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
struct z_score
{
    int new_z;
};
int main()
{
    map<int,int> map;
    priority_queue<pair<int,int> > pq;
    struct z_score zlist[100000];
    int n;
    cin>>n;
    int topic_id;
  //  cin>>topic_id;
    int i;
    
    int old_z,p,l,c,s;
    for(i=1;i<=n;i++)
    {
        cin>>topic_id>>old_z>>p>>l>>c>>s;
        zlist[topic_id].new_z=50*p+5*l+10*c+20*s;
        pq.push(make_pair(zlist[topic_id].new_z-old_z,topic_id));
    }
    for(i=1;i<=5;i++)
    {

        cout<<pq.top().second<<" "<<zlist[pq.top().second].new_z<<endl;
        pq.pop();
    }
   
    
    return 0;
}