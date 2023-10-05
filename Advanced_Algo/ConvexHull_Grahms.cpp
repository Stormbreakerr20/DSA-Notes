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

#define pp pair<int, int>

int angle(pair<int, int> &onhull, pair<int, int> &next_point, pair<int, int> &point)
{
    int x1 = onhull.first, y1 = onhull.second;
    int x2 = next_point.first, y2 = next_point.second;
    int x3 = point.first, y3 = point.second;

    int slope_diff = (y3 - y2)*(x2 - x1) - (y2-y1)*(x3-x2) ;

    if (slope_diff == 0)
        return 0;

    else if (slope_diff > 0)
        return 1;

    return -1;
}

int dist(pp &a, pp &b)
{
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}
double calculate_angle(pair<int, int> temp, pair<int, int> ref)
{
    if (ref.first == temp.first)
    {
        if (temp.second > ref.second)
        {
            return INT_MAX;
        }
        return INT_MIN;
    }
    double a = (temp.second - ref.second);
    double b = ((temp.first - ref.first));
    return (double)a / b;
}

int main()
{
    int n = nxt();

    vector<pair<int, int>> v(n);

    pp left_most = {INT_MAX, INT_MAX};

    for (int i = 0; i < n; i++)
    {
        v[i] = {nxt(), nxt()};

        if (v[i].first < left_most.first)
            left_most = v[i];
        else if (v[i].first  ==  left_most.first && v[i].second < left_most.second)
            left_most = v[i];
    }

    // Polar angle with all
    vector<pair<float, pair<int, int>>> angle_vec;

    for (auto i : v)
    {
        if (i != left_most)
        {
            angle_vec.push_back({calculate_angle(left_most, i), i});
        }
    }

    sort(angle_vec.begin(), angle_vec.end());

    stack<pair<int, int>> s;

    s.push(left_most);
    s.push(angle_vec[0].second);
    s.push(angle_vec[1].second);
    

    for (int i = 2; i < angle_vec.size(); i++)
    {
        pp point = angle_vec[i].second;
        pp np = s.top();
        s.pop();
        pp onhull = s.top();

        int angle_dir = angle(onhull,np,point);
        bool update = 0;
        if(angle_dir == -1 || (dist(onhull,point) > dist(onhull,np) && angle_dir == 0)) update = 1;

        if(update){
            s.push(point);
        }
        else{
            s.push(np);
            s.push(point);
        }
    }
    vector<pair<int, int>> hull;
    while (!s.empty())
    {
        hull.push_back(s.top());
        s.pop();
    }
    sort(hull.begin(), hull.end());

    cout << hull.size()<< " POINTS ON HULL : " << endl;
    for (auto i : hull)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << hull[0].first << " " << hull[0].second;
}