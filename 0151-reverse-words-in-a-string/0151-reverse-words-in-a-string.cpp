class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<std::string> words;

        while (ss >> word) {
            words.push_back(word);
        }
        reverse(words.begin(), words.end());
        string reversedStr;
        for (int i = 0; i < words.size(); ++i) {
            reversedStr += words[i];
            if (i != words.size() - 1) {
                reversedStr += " ";
        }
    }
        return reversedStr;
        
    }
};