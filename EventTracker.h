#include <vector>
#include <iostream>
#include "Event.cpp"

class EventTracker {

private:

    vector<Event> eventList;

public:

    void searchEventName(string eventName);

    void searchEventDate(string eventDate);

    void searchEventTag(int id, string eventTag);
    
    void insertEvent(string eventName, string eventTags[5], string eventDescription, int eventID, string eventStartTime, string eventDate);

    void printEvents();

    void printEvents(vector<Event> outputList); //this is for printing the results of the searches

};
