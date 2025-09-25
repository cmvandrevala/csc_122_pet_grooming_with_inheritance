#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/dog.hpp"

TEST_CASE( "#get_name" ) {
  Dog fido = Dog("Fido");
  REQUIRE( fido.get_name() == "Fido" );
}

TEST_CASE( "#speak" ) {
  Dog bruno = Dog("Bruno");
  REQUIRE( bruno.speak() == "Bruno says woof woof! That means thank you!\n" );
}

TEST_CASE("#fetch_stick") {
  Dog rex = Dog("Rex");
  REQUIRE( rex.fetch_stick() == "I am running after the stick! Life's as extreme as you wanna make it!!!!!\n" );
}
