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

    protected:
    string description;    
    int day;
    int month;
    int year;    
    string type;
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

    private:
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
            cout << "How old are they turning?\n";
            cin >> e;
            birthdays plan (a,b,c,d,e,f);
            bdays.push_back(plan);
        }
        else if (choice == "general" || choice == "General" || choice == "GENERAL"){
            planner plan(a,b,c,d);
            general.push_back(plan);
        }
        
    }
    //function to print events
    void printEvents(){
        for (int i = 0; i < general.size(); i++){
            planner temp = general[i];
            temp.print();
        }
        for (int i = 0; i < bdays.size(); i++){
            birthdays temp = bdays[i];
            temp.print();
        }
    }
    
    private:
    string name;
    vector <planner> general;
    vector <birthdays> bdays;
    string choice;
    
    
    };

    
    int main (){
    string answer;
    string name;
    bool isEnd = false;
    int day;
    int month;
    int year;
    string d;

    cout<< "Would you like to make a planner?\n";
    cin >> answer;
    if (answer == "y" || answer == "yes" || answer == "Yes"){
        cout << "What is your name?\n";
        cin>> name;
        profile a (name);
        while (isEnd != true){
            cout<< "Would you like to add an event? \n";
            cin >> answer;
             if (answer == "y" || answer == "yes" || answer == "Yes"){
                 cout<< "Input day: \n"; 
                 cin >> day;
                 cout<< "Input month: \n";
                 cin >> month;
                 cout<< "Input year: \n";
                 cin >> year;
                 cout << "Input description: \n";
                 cin >> d;
                 a.makePlan(day, month, year, d);
             }
             else {isEnd = true;}
        };
        a.printEvents();
    };

    };
