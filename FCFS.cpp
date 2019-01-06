#include<iostream>
 
using namespace std;
 
int main()
{

int wt[100],bt[100],tat[100],n,i,j,avt=0,avw=0;
cout<<"###################################"<<endl;
cout <<"\t\t FCFS Algorithm"<<endl;
cout<<"###################################"<<endl;
cout <<"Enter Number Of Processes:";
cin>>n;

cout<<"Enter Burst Time For Each Proccess"<<endl;
for(i=0;i<n;i++)
{
cout<<"bt["<<i+1<<"]:";
cin>>bt[i];
}
//wait time for first procces is 0 
wt[0]=0;
//find wait time 
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
{
wt[i]+=bt[j];
}
}

//find turnaround time
cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;

for(i=0;i<n;i++){
tat[i]=wt[i]+bt[i];
avt+=tat[i];
avw+=wt[i];
cout<<"P["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
}
cout<<"Turnaround Time avg="<<avt/n<<endl;
cout <<"Wait Time avg="<<avw/n<<endl;
