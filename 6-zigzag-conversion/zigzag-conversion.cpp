class Solution {
public:
   string convert(string s, int numRows) {
    bool direction = false;
    int rows = 0;
    vector<string> zigzag(numRows);
    
    if(numRows == 1){
        return s;
    }

    for(int i = 0; i < s.size(); i++){
        zigzag[rows] += s[i];

        if(rows == numRows - 1){
            direction = false;
        }

        if(rows == 0){
            direction = true;
        }

        if(direction){
            rows++;
        }
        else{
            rows--;
        }
    }

    string result = "";

    for(int i = 0; i < numRows; i++){
        result += zigzag[i];
    }

    return result;
}
};