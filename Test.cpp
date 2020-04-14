
#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;

#include <string>
    TEST_CASE("Test for addFather & addMother function") {
     family::Tree T ("Yosef");   
    T.addFather("Yosef", "Yaakov")   // Tells the tree that the father of Yosef is Yaakov.
	 .addMother("Yosef", "Rachel")   // Tells the tree that the mother of Yosef is Rachel.
	 .addFather("Yaakov", "Isaac")
	 .addMother("Yaakov", "Rivka")
	 .addFather("Isaac", "Avraham")
	 .addFather("Avraham", "Terah");
        //father
    CHECK(T.find("Father") == "Yaakov");
    CHECK(T.find("Father") == "Issac");
    CHECK(T.find("Father") == "Avraham");
    CHECK(T.find("Father") == "Terah");

    CHECK(T.find("FAther") == "Yaakov");
    CHECK(T.find("FATHER") == "Issac");
    CHECK(T.find("FatheR") == "Avraham");
    CHECK(T.find("FATHEr") == "Terah");
        //mother
    CHECK(T.find("Mother") == "Rachel");
    CHECK(T.find("Mother") == "Rivka");
    CHECK(T.find("Mother") == "Rachel");

    CHECK(T.find("Mother") == "Rachel");
    CHECK(T.find("MOTHER") == "Rivka");
    CHECK(T.find("MoTHer") == "Rachel");
    

    
 
}
 TEST_CASE("Test for addFather function") {

    family::Tree T ("Yosef"); // Yosef is the "root" of the tree (the youngest person).
	T.addFather("Yosef", "Yaakov");
    CHECK(T.find("Father") == "Yaakov");
 
}
 TEST_CASE("Test for addFather function") {

        family::Tree T ("Yosef"); // Yosef is the "root" of the tree (the youngest person).
	T.addFather("Yosef", "Yaakov");
    CHECK(T.find("Father") == "Yaakov");
 
}
 TEST_CASE("Test for addMather function") {

        family::Tree T ("Yosef"); // Yosef is the "root" of the tree (the youngest person).
	T.addFather("Yosef", "Yaakov");
    CHECK(T.find("Father") == "Yaakov");
 
}
 TEST_CASE("Test for relation function") {

        family::Tree T ("Yosef"); // Yosef is the "root" of the tree (the youngest person).
	T.addFather("Yosef", "Yaakov");
    CHECK(T.find("Father") == "Yaakov");
 
}
    