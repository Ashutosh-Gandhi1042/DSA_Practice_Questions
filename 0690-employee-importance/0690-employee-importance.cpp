/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,int>mp1;
        for(int i=0;i<employees.size();i++)
        {
            mp1[employees[i]->id]=i;
        }
        stack<int>s1;
        int res=0;
        s1.push(mp1[id]);

        while(!s1.empty())
        {
            int x=s1.top();
            res+=employees[x]->importance;
            s1.pop();
            for(int i=0;i<employees[x]->subordinates.size();i++)
            {
                s1.push(mp1[employees[x]->subordinates[i]]);
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna