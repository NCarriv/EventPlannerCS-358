#include "EventTracker.h"

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

    //order based on earliest found  --TODO: not sure if this works the way I hope it does
    

    //print temp array
    printEvents(temp);
}