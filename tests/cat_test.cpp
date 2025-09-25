#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/cat.hpp"
#include "../src/dog.hpp"

TEST_CASE( "#get_name" ) {
  Cat princess = Cat("Princess");
  REQUIRE( princess.get_name() == "Princess" );
}

TEST_CASE( "#play_with_yarn" ) {
  Cat fluffy = Cat("Fluffy");
  REQUIRE( fluffy.play_with_yarn() == "This ball of yarn shall feel the wrath of Fluffy.\n" );
}

TEST_CASE( "#judge_another_pet" ) {
  Cat fluffy = Cat("Fluffy");
  Cat fancy = Cat("Fancy");
  Dog stinky = Dog("Stinky");

  REQUIRE( fluffy.judge_another_pet(&fancy) == "I, Fluffy, judge you, Fancy, to be unworthy.\n" );
  REQUIRE( fluffy.judge_another_pet(&stinky) == "I, Fluffy, judge you, Stinky, to be unworthy.\n" );
}
