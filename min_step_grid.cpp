int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int c=0,i,s=0;
int x,y;
    for(i=1;i<A.size();i++){
        x=abs(A[i]-A[i-1]);
        y=abs(B[i]-B[i-1]);
        c=max(difx,dify);
	s=s+c;
    }
    return count;
}