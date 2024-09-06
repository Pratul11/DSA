#include<bits/stdc++.h>
using namespace std;

class Twitter {
public:
    pair<int,int>post;
    vector<pair<int,int>>posts;
    vector<int>news;
    vector<vector<int>>follows;
    map<int,vector<int>>mp;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        post.first = userId;
        post.second = tweetId;
        posts.push_back(post);   
    }
    
    vector<int> getNewsFeed(int userId) {
        for(int i=0;i<posts.size();i++) {
            news.push_back(posts[i].second);
        }
        return news;
    }
    
    void follow(int followerId, int followeeId) {
        follows[followerId].push_back(followeeId);
        for(int i=0;i<follows.size();i++) {
            for(int j=0;j<follows[i].size();j++) {
                cout<<follows[i][j]<<" ";
            }
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */


int main()
{
    vector<int>ans;
    Twitter t;
    t.postTweet(1,5);
    t.postTweet(2,6);
    ans = t.getNewsFeed(1);
    t.follow(1,3);
    t.follow(1,4);
    // for(auto it:ans) {
    //     cout<<it<<" ";
    // }
    // t.getNewsFeed(1);
    return 0;
}