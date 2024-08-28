#include<bits/stdc++.h>
using namespace std;
void Asteroid(vector<int>asteroids) {
    stack<int>st;
    st.push(asteroids[0]);
    for(int i=0;i<asteroids.size();i++) {
        if(st.top() >= 0 && asteroids[i] < 0) {
            asteroids[i] = asteroids[i] * -1;            
        }
        else if(st.top() < 0 && asteroids[i] >= 0 ){
            st.top() = st.top() * -1;            
        }
        if(asteroids[i] > st.top()) {
            st.pop();
            st.push(asteroids[i]);
        }
    }
}
int main()
{
    return 0;
}