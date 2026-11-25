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

    void filterEventTag(string eventTag);
    void resetID(vector<Event> usedList);
    
    void insertEvent(string eventName, string eventTags[5], string eventDescription, int eventID, string eventStartTime, string eventDate);

    void printEvents();

    void printEvents(vector<Event> outputList); //for printing results

};
