#include <vector>
#include <iostream>
#include "Event.h"

class EventTracker {

private:

    vector<Event> eventList;

public:

    void searchEventName(string eventName);
    void compareEventID(Event a, Event b);

    void searchEventDate(string eventDate);

    void searchEventTag(int id, string eventTag);
    
    void insertEvent(string eventName, string eventTags[5], string eventDescription, int eventID, string eventStartTime, string eventDate);

    void printEvents();

    void printEvents(vector<Event> outputList); //for printing results

};
