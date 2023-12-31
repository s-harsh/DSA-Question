class Solution
{
    public:
    int solve(vector<int>&person,int n,int k, int index){
        if(person.size()==1){
            return person[0];
        }
        index=(index+k)%(person.size());
        person.erase(person.begin()+index);
        return solve(person,n,k,index);
    }
    int josephus(int n, int k)
    {
       int index=0;
       vector<int>person;
       for(int i=1;i<=n;i++){
           person.push_back(i);
       }
       k=k-1;
       return solve(person,n,k,index);
    }
};
