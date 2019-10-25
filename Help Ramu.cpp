#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c1,c2,c3,c4;
        int cabs[1005],rickshaw[1005];
        cin>>c1>>c2>>c3>>c4;
        int no_of_cabs,no_of_rickshaw;
        cin>>no_of_rickshaw>>no_of_cabs;
        for(int i=0;i<no_of_rickshaw;i++)
        {
            cin>>rickshaw[i];
        }
        for(int i=0;i<no_of_cabs;i++)
        {
            cin>>cabs[i];
        }
        int rick=0;
        for(int i=0;i<no_of_rickshaw;i++)
        {
            rick += min(c1*rickshaw[i],c2);
        }
        rick=min(rick,c3);
          int cab=0;
        for(int i=0;i<no_of_cabs;i++)
        {
            cab += min(c1*cabs[i],c2);
        }
        cab=min(cab,c3);
        int final_ans=min(c4,cab+rick);
        cout<<final_ans<<endl;
    }
}
