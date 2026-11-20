#include "EventTracker.h"


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