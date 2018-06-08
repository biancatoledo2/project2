///////////////////////////////////////////////////////////////////////////////
// project2.hpp
//
// Implementations of algorithms for counting vowels, longest "oreo" problem,
// and longest repeated substring problem.
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cctype>
#include <fstream>
#include <random>
#include <string>

bool read_text_file(std::string& result, const std::string& path) {

  std::ifstream f(path);
  if (!f) {
    return false;
  }

  result.clear();

  for (char ch; f.get(ch);) {
    result.push_back(ch);
  }

  return true;
}

std::string random_string(int seed, int size) {

  assert(size >= 0);

  std::string s;

  std::mt19937 gen(seed);
  std::uniform_int_distribution<> dist(0x00, 0xFF);

  for (int i = 0; i < size; ++i) {
    char ch;
    do {
      ch = dist(gen);
    } while (!isprint(ch));

    s.push_back(ch);
  }

  return s;
}

int vowel_count(const std::string& s) {
  // TODO: replace this comment, and bogus return statement, with an actual
  // implementation of the function.
  return 0;
}

std::string longest_oreo(const std::string& s) {
  assert(s.size() > 0);

  // TODO: replace this comment, and bogus return statement, with an actual
  // implementation of the function.
  return "";
}

std::string longest_repeated_substring(const std::string& s) {
  assert(s.size() > 0);

  // TODO: replace this comment, and bogus return statement, with an actual
  // implementation of the function.
  return "";
}
