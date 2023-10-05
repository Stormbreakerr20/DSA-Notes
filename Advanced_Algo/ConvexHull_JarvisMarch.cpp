#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

#define pp pair<int,int>

// take slope of two lines onhull - point:m1, nextpoint - point:m2
// if m1 - m2 = 0 collinear ret 0,
//  m1-m2 > 0 clockwise angle between onhull ret 1,
// point,nextpoint, m1 - m2 < 0 anticlockwise angle ret -1

//  m1 = (y2-y1)/(x2 - x1) , m2 = (y3-y2)/(x3 - x2) take lcm = m2 - m1 ==> (y3 - y2)*(x2 - x1) - (y2-y1)*(x3-x2) 

int angle(pair<int,int>& onhull,pair<int,int>& next_point,pair<int,int>& point){
    int x1 = onhull.first, y1 = onhull.second;
    int x2 = next_point.first, y2 = next_point.second;
    int x3 = point.first, y3 = point.second;

    int slope_diff = (y3 - y2)*(x2 - x1) - (y2-y1)*(x3-x2) ;

    if(slope_diff == 0) return 0;

    else if(slope_diff > 0) return 1;

    return -1;
}

int dist(pp& a, pp &b){
    return sqrt(pow( a.first - b.first, 2) + pow(a.second - b.second, 2 ));
}


int main()
{   
    int n = nxt();

    vector<pair<int, int>> v(n);

    pp left_most = {INT_MAX, INT_MAX};

    for (int i = 0; i< n; i++)
    {
        v[i] = {nxt(), nxt()};

        if(v[i].first < left_most.first) left_most = v[i];
    }

    vector<pair<int,int>> hull;

    // take left most point on hull
    pp onhull = left_most;
    pp next_point = v[0];

    while(true) {
        hull.push_back(onhull);
        pp next_point = v[0];

        for(auto i:v){

            int angle_dir = angle(onhull, next_point, i );

            // Now if angle_dir = 1 that means i is more convex than next point hence update next_point or onhull == next_point update next_point as i
            // imp case: if dir == 0 and dist(onhull,i) > dist (onhull,next_point) means i is better point to be on hull 
            // Visualize above via drawing on paper

            if(next_point == onhull || angle_dir == 1 || (dist(onhull,i) > dist(onhull,next_point) && angle_dir == 0)){
                next_point = i;
            }

        }
        if(next_point == hull[0]) break;

        onhull = next_point;
        
    }
    cout<<hull.size()<<" POINTS ON HULL : "<<endl;
    for(auto i: hull){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<hull[0].first<<" "<<hull[0].second;

}