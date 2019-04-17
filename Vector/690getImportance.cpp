/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int e_num = employees.size();
        Employee *e;
        for(int j = 0; j < e_num; ++j){
            if(id == employees[j]->id){
                e = employees[j];
                break;
            }
        }
        if(e->subordinates.empty())return e->importance;
        vector<int> subs = e->subordinates;
        int sub_num = subs.size();
        int total = e->importance;
        for(int i = 0; i < sub_num; ++i){
            total += getImportance(employees, subs[i]);
        }
        return total;
    }
};
