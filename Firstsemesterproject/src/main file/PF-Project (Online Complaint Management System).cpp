#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void createComplaint() {
    ofstream file("complaints.txt",ios::app);
    string id, name, complaint;
    cout<<"Enter Complaint ID:";
    cin>>id;
    cin.ignore();
    cout <<"Enter Name:";
    getline(cin, name);
    cout <<"Enter Complaint:";
    getline(cin, complaint);
    file<<id <<"," <<name << "," << complaint <<endl;
    file.close();
}void viewComplaints(){
    ifstream file("complaints.txt");
    string line;
    while(getline(file, line)){
        cout<<line <<endl;}
  file.close();
}void updateComplaint(){
    ifstream file("complaints.txt");
    ofstream temp("temp.txt");
    string id, line, cid,name,complaint;
    cout<<"Enter Complaint ID to update:";
    cin>>id;
    cin.ignore();
    bool found=false;
    while(getline(file,line)) {
        size_t pos1=line.find(',');
        size_t pos2=line.find(',', pos1 + 1);
        cid =line.substr(0,pos1);
        if(cid== id){
            found= true;
cout<<"Enter New Name:";
            getline(cin,name);
            cout<<"Enter New Complaint:";
            getline(cin,complaint);
            temp<<id <<"," <<name <<"," <<complaint <<endl;
        } else {
          temp<<line <<endl;
        }
  }
    file.close();
    temp.close();
    remove("complaints.txt");
    rename("temp.txt", "complaints.txt");
    if(!found) cout <<"Complaint ID not found.\n";
}

void deleteComplaint(){
    ifstream file("complaints.txt");
    ofstream temp("temp.txt");
    string id,line,cid;
    cout<<"Enter Complaint ID to delete:";
    cin >> id;
    bool found =false;
    while(getline(file, line)){
        size_t pos= line.find(',');
        cid =line.substr(0, pos);
        if(cid == id){
            found= true;
            continue;
        }
        temp<<line <<endl;
    }
    file.close();
    temp.close();
    remove("complaints.txt");
    rename("temp.txt", "complaints.txt");
    if(!found) cout<<"Complaint ID not found.\n";
}

int main(){
    int choice;

    
    do{
        cout << "\nComplaint Management System\n";
        cout << "1. Create Complaint\n";
        cout << "2. View Complaints\n";
        cout << "3. Update Complaint\n";
        cout << "4. Delete Complaint\n";

cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch (choice) {
            case 1:createComplaint(); break;
            case 2:viewComplaints(); break;
            case 3:updateComplaint(); break;
            case 4:deleteComplaint(); break;
        }
    } while(choice!=5);
    return 0;}