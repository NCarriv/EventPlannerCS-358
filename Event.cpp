#include "Event.h"
using namespace std;

//constructors
Event::Event(){
    name = "unknown";
    description = "input description";
    id = 0000;

    startTime = "xx:xx";
    date = "xx/xx/xxxx";
}
Event::Event(string eventName, string eventTags[], string eventDescription, 
    int eventID, string eventStartTime, string eventDate){

    name = eventName;
        
    for(int i=0; i < tags->length(); i++){
        tags[i] = eventTags[i];
    }
        
    description = eventDescription;
    id = eventID;

    startTime = eventStartTime;
    date = eventDate;
}

//getters and setters
string Event::getName(){
     return name;
}
void Event::setName(string eventName){
    name = eventName;
}

string Event::getTag(int index){
    //valid input?
    if (index < 0 || tags->length() <= index){
        return nullptr;
    }
        
    return tags[index];
}
void Event::setTag(int index, string newTag){
    //valid input?
    if (index >= 0 && tags->length() > index){
        tags[index] = newTag;
    }
}

string Event::getDescription(){
    return description;
}
void Event::setDescription(string eventDescription){
    description = eventDescription;
}

int Event::getID(){
    return id;
}
void Event::setID(int eventID){
    id = eventID;
}

string Event::getStartTime(){
    return startTime;
}
void Event::setStartTime(string time){
    startTime = time;
}

string Event::getDate(){
    return date;
}
void Event::setDate(string eventDate){
    date = eventDate;
}
