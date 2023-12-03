add_test([=[MainTests.isdigit]=]  [==[/home/jacob/code/advent_of_code/1/c++/tests/adventcode1_tests.exe]==] [==[--gtest_filter=MainTests.isdigit]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MainTests.isdigit]=]  PROPERTIES WORKING_DIRECTORY [==[/home/jacob/code/advent_of_code/1/c++/tests]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  adventcode1_tests.exe_TESTS MainTests.isdigit)
