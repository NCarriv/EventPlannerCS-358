add_test([=[EventTest.HandlesCreationEmpty]=]  C:/Users/baumannr5054/EventPlannerCS-358/build/Debug/unit_tests.exe [==[--gtest_filter=EventTest.HandlesCreationEmpty]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EventTest.HandlesCreationEmpty]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:\Users\baumannr5054\EventPlannerCS-358\EventTests.cpp:6]==]
    WORKING_DIRECTORY [==[C:/Users/baumannr5054/EventPlannerCS-358/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[EventTest.HandlesCreationWithParameters]=]  C:/Users/baumannr5054/EventPlannerCS-358/build/Debug/unit_tests.exe [==[--gtest_filter=EventTest.HandlesCreationWithParameters]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EventTest.HandlesCreationWithParameters]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:\Users\baumannr5054\EventPlannerCS-358\EventTests.cpp:33]==]
    WORKING_DIRECTORY [==[C:/Users/baumannr5054/EventPlannerCS-358/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[EventTest.HandlesSetters]=]  C:/Users/baumannr5054/EventPlannerCS-358/build/Debug/unit_tests.exe [==[--gtest_filter=EventTest.HandlesSetters]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EventTest.HandlesSetters]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[C:\Users\baumannr5054\EventPlannerCS-358\EventTests.cpp:56]==]
    WORKING_DIRECTORY [==[C:/Users/baumannr5054/EventPlannerCS-358/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
set(unit_tests_TESTS [==[EventTest.HandlesCreationEmpty]==] [==[EventTest.HandlesCreationWithParameters]==] [==[EventTest.HandlesSetters]==])
