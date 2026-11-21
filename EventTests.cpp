#include <gtest/gtest.h>
#include "Event.h"

//this test checks to see if creating a blank event actually works
//also checks to see if the getters return the correct values for a blank event
TEST(EventTest, HandlesCreationEmpty) {
    Event event;
    event = Event();

    string expectedName = "unknown";
    EXPECT_EQ(event.getName(), expectedName);

    string expectedDescription = "input description";
    EXPECT_EQ(event.getDescription(), expectedDescription);

    for(int i = 0; i < 5; i++) {
        EXPECT_EQ(event.getTag(i), "");
    }


    int expectedID = 0000;
    EXPECT_EQ(event.getID(), expectedID);

    string expectedStartTime = "xx:xx";
    EXPECT_EQ(event.getStartTime(), expectedStartTime);

    string expectedDate = "xx/xx/xxxx";
    EXPECT_EQ(event.getDate(), expectedDate);

}

//tests event creating with given paramteters.
TEST(EventTest, HandlesCreationWithParameters) {

    string name = "And HIS NAME IS JOHN CENA";
    string tags[5] = {"Oh", "My", "God", "Yes", "Please"};
    string description = "Something something idk John Cena Fortnite";
    int id = 1234;
    string startTime = "12:00";
    string date = "01/01/2024";

    Event event(name, tags, description, id, startTime, date);

    EXPECT_EQ(event.getName(), name);
    EXPECT_EQ(event.getDescription(), description);
    EXPECT_EQ(event.getID(), id);
    EXPECT_EQ(event.getStartTime(), startTime);
    EXPECT_EQ(event.getDate(), date);

    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(event.getTag(i), tags[i]);
    }
}

//test should handle if the setters actually work
TEST(EventTest, HandlesSetters) {
    
    Event event;
    event = Event();

    string newName = "Josh";
    event.setName(newName);
    EXPECT_EQ(event.getName(), newName);

    string newDescription = "I've Come to make an announcement, Shadow the Hedgehog is a bi-";
    event.setDescription(newDescription);
    EXPECT_EQ(event.getDescription(), newDescription);

    int newID = 5678;
    event.setID(newID);
    EXPECT_EQ(event.getID(), newID);

    string newStartTime = "14:30";
    event.setStartTime(newStartTime);
    EXPECT_EQ(event.getStartTime(), newStartTime);

    string newDate = "02/02/2024";
    event.setDate(newDate);
    EXPECT_EQ(event.getDate(), newDate);

    string newTag = "NewTag";
    event.setTag(0, newTag);
    EXPECT_EQ(event.getTag(0), newTag);

    newTag = "AnotherTag";
    event.setTag(4, newTag);
    EXPECT_EQ(event.getTag(4), newTag);
}

