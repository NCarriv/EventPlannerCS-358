#include "EventTracker.h"
#include <algorithm>

using namespace std;

void EventTracker::searchEventName(string eventName){
    
    //create temp array 
    vector<Event> temp; 

    //go through list, find() eventName in each event
    for (Event event : eventList){
        //int searchIndex = event.getName().find(eventName);
        string name = event.getName();

        //if searhced is in string, include
        if (event.getName().find(eventName) != string::npos){
            //set event's id equal to index found
            event.setID(name.find(eventName));

            //add to temp array (to be sorted later?)
            temp.push_back(event);
        }
    }

    //order based on earliest found -- credit: copilot  TODO: make sure there's a test for this
    sort(temp.begin(), temp.end(), compareEventID);

    //print temp array
    printEvents(temp);

    //reset event ids
    resetID(temp);
}

//helper function
void EventTracker::compareEventID(Event a, Event b){
    a.getID() < b.getID();

}


void EventTracker::filterEventTag(string eventTag){  //only filters for one tag at the moment, future feature
    
    //create temp array 
    vector<Event> temp; 

    for (Event event : eventList){
        //for each tag, compair
        for(int i = 0; i < eventList.size(); i++){
            
            //itterate through each event's tag list
            for(int j = 0; j < 5; j++){
                string tag = event.getTag(j);

                if (tag._Equal(eventTag)){
                    //add to temp array
                    temp.push_back(event);

                    //add one to ID for sorting, for future feature
                    event.setID(event.getID() + 1);
                }
            }
        }

    }

    //sort array by how many tags you have, listed in ID -- for future feature, I think

    //print temp array
    printEvents(temp);

    //reset event ids
    resetID(temp);
}

//helper function, reset the used IDs for the events
void EventTracker::resetID(vector<Event> usedList){
    for (Event event : usedList){
        event.setID(0000);
    }
}


void EventTracker::insertEvent(string eventName, string eventTags[5], string eventDescription,
    int eventID, string eventStartTime, string eventDate) {

    Event newEvent;
    newEvent.setName(eventName);
    
    for (int i = 0; i < 5; i++) {
        newEvent.setTag(i, eventTags[i]);
    }

    newEvent.setDescription(eventDescription);
    newEvent.setID(eventID);
    newEvent.setStartTime(eventStartTime);
    newEvent.setDate(eventDate);
    
    eventList.push_back(newEvent);
}


void EventTracker::printEvents() {

    for (int i = 0; i < eventList.size(); i++) {

        cout << "Event Name: " << eventList[i].getName() << "\n";
        cout << "Event Description: " << eventList[i].getDescription() << "\n";
        cout << "Event Date: " << eventList[i].getDate();
        cout << ", Event Start Time: " << eventList[i].getStartTime() << "\n";
        cout << "Event ID: " << eventList[i].getID() << "\n";

        cout << "Event Tags: ";
        for (int i = 0; i < 5; i++) {
            
            if (eventList[i].getTag(i).empty() == false) {
                cout << eventList[i].getTag(i) << ", ";
            }
            
        }
        cout << "\n";

    }

}

void EventTracker::printEvents(vector<Event> outputList) {

    for (int i = 0; i < outputList.size(); i++) {

        cout << "Event Name: " << outputList[i].getName() << "\n";
        cout << "Event Description: " << outputList[i].getDescription() << "\n";
        cout << "Event Date: " << outputList[i].getDate();
        cout << ", Event Start Time: " << outputList[i].getStartTime() << "\n";
        cout << "Event ID: " << outputList[i].getID() << "\n";

        cout << "Event Tags: ";
        for (int i = 0; i < 5; i++) {
            
            if (outputList[i].getTag(i).empty() == false) {
                cout << outputList[i].getTag(i) << ", ";
            }
            
        }
        cout << "\n";

    }

}