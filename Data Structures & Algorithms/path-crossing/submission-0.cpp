class Solution {
public:
    bool isPathCrossing(string path) {
        int n=path.size();
       int x = 0, y = 0;
        unordered_set<string> s1;
        s1.insert("0,0");

    for(int i=0;i<n;i++){
           if(path[i] == 'N') {
    y++;
}
else if(path[i] == 'S') {
    y--;
}
else if(path[i] == 'E') {
    x++;
}
else if(path[i] == 'W') {
    x--;
}
        string pos = to_string(x) + "," + to_string(y);
if(s1.find(pos)!=s1.end()){
    return true;
}
s1.insert(pos);

        }
return false;


    }
};