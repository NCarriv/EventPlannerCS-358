#include <string>
using namespace std;

class Event {

private:

    string name;
    string tags[5]; //can hold 5 tags
    string description; 
    int id;  //used for searching

    string startTime; //format of "xx:xx"
    string date; //format of "xx/xx/xxxx"
    
public:

    //constructors
   Event();
    Event(string eventName, string eventTags[], string eventDescription, 
        int eventID, string eventStartTime, string eventDate);

    //getters and setters
    string getName();
    void setName(string eventName);

    string getTag(int index);
    void setTag(int index, string newTag);

    string getDescription();
    void setDescription(string eventDescription);

    int getID();
    void setID(int eventID);

    string getStartTime();
    void setStartTime(string time);
    
    string getDate();
    void setDate(string eventDate);


};