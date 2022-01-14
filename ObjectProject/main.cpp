#include <iostream>
#include <vector>
using namespace std;

//making a class for a planner
class planner {
    public:

    planner (int a, int b, int c, string d){//constructor
        day = a;
        month = b;
        year = c;
        description = d;
    }
    void print (){
        cout<< "date: "<< day<<"." << month << "." << year << "\n";
        cout<< "description: " << description << "\n";
    }
    void changeDate(int a, int b, int c){
        day = a;
        month = b;
        year = c;
    }
    void changeDescription(string d){
        description = d;
    }

    
    string description;    
    int day;
    int month;
    int year;    
};

//making a class for the children class, 'birthdays'

class birthdays: public planner {//the : public planner makes the class a child of planner

    public:
    birthdays (int a, int b, int c, string d, int e, string f): planner (a,b,c,d){
        age = e;
        name = f;
    }
    void print (){
        cout<< "date: "<< day<<"." << month << "." << year << "\n";
        cout<< "description: " << description << "\n";
        cout<< "it is "<< name <<"'s "<< age << " birthday!\n";
    };

    int age;
    string name;
};

//making a class for a profile
class profile {
    public:
    profile (string a){ //making a constructor that sets the values for the profile
        name = a;
    }
    void makePlan(int a, int b, int c, string d){
        cout<< "What type of event do you want to make? There are: general, birthday, [will add more later]\n";
        cin >> choice;
        
        if (choice == "birthday" || choice == "Birthday" || choice == "BIRTHDAY"){
            string f;
            int e;
            cout << "Who's birthday is it?\n";
            cin >> f;
            cout << "How old are hey turning?\n";
            cin >> e;
            birthdays plan (a,b,c,d,e,f);
        }
        else (choice == "general" || choice == "General" || choice == "GENERAL"){
            planner plan(a,b,c,d);
        }
        
        //new idea, plan can be added to a list of plans so the profile can keep track
        list.push_back(plan);
    }
    //function to print events
    void printEvents(){
        for (int i = 0; i < list.size(); i++){
            planner temp = list[i];
            temp.print();
        }
    }
    
    private:
    string name;
    vector <planner> list;
    string choice;
    
    
    };

    
    int main (){

    //test
    //lets say the user imputs that they want to create a profile and their name is bob
    profile a ("bob");
    //now bob wants to add to his calendar that he has a meeting on the 3rd of November 2020
    a.makePlan(3,11,2020, "Meeting");
    //now bob wabts to add to his planner that he has a dentist appointment on the 15th of April 2021
    a.makePlan(15,6,2021, "Dentist Appt.");
    //now bob has his friends brithday coming up
    a.makePlan(10,10,2022, "Getting dinner");
    //printing out dates from the calendar
    a.printEvents();


    };
