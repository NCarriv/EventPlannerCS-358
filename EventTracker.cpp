#include "EventTracker.h"
#include <algorithm>

using namespace std;

void EventTracker::searchEventName(string eventName){
    
    //create temp array 
    vector<Event> temp; 

    //go through list, find() eventName in each event
    for (Event event : temp){
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
}

void EventTracker::compareEventID(Event a, Event b){
    a.getID() < b.getID();
}