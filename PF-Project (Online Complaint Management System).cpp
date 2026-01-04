# include <iostream>
# include <fstream>
# include <string>
using namespace std;
void createComplaint(){
    ofstream file("complaint.txt",ios::app)
    string id,name,complaint;
    cout<<"Enter name :" <<endl;
    getline(cin,name);
    cout<<"Enter ID of complaint :" <<endl;
    cin>>complaint;
    cin.ignore();
 cout<<"Enter your complaint :" <<endl;
getline(cin,complaint);
file<<name <<"," <<id <<"," <<complaint <<endl;
file.close();
}
void readComplaint(){
    ifstream file("complaint.txt")
    string line;
    while(getline(file,line))
    {cout<<line <<endl;}
    file.clos();
}
void updateComplaint(){
    ifstream file("complaint.txt")
    ofstream temp("temp.txt")
    string id,line,cid, name, complaint;
  cout<<"Enter your complaint ID to update :" <<endl;
  cin>>id;
  cin.ignore();
  bool found=false;
  while(file,line){
  size_t pos1=line.find(',');
  size_t pos2=line.find(',',pos1+1);
  cid=line.substr(0,pos1);
  if(cid==id)
  {found=true;
cout<<"Enter new name :" <<endl;
getline(cin,name);
cout<<"Enter new complaint :" <<endl;
getline(cin,complaint);
temp<<name, <<"," <<id <<"," <<complaint <<emdl;
} 
else{
temp<<line;}
}

file.close();
temp.close();
remove("complaint.txt");
rename("temp.txt,complaint.txt");
if(!found)
cout<<"ID id not found :" <<endl;
}


void deleteComplaint(){
    ifstream file("complaint.txt")
    ofstream temp("temp.txt")
    string id,line,cid;
  cout<<"Enter your complaint ID to delete :" <<endl;
  cin>>id;
  cin.ignore();
  bool found=false;
  while(file,line){
  size_t pos=line.find(',');
  cid=line.substr(0,pos);
  if(cid==id)
  {found=true;
continue;}
temp<<line <<endl;}
file.close();
temp.close();
remove("complaint.txt");
rename("temp.txt,complaint.txt");
if(!found)
cout<<"ID id not found :" <<endl;
  }
  int main()
  {}
