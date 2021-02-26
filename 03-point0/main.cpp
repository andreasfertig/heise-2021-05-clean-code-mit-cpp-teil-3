// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <compare>

struct Point
{
    int x{0};
    int y{0};

    constexpr bool operator==(const Point&) const noexcept  = default;
    constexpr auto operator<=>(const Point&) const noexcept = default;
};

constexpr Point a{2, 3};
constexpr Point b{2, 3};
constexpr Point c{3, 3};

static_assert(a == b);
static_assert(not(a != b));
static_assert(not(a == c));
static_assert(a != c);

static_assert(a < c);
static_assert(c > a);

static_assert(a <= c);
static_assert(c >= a);

static_assert(a <= b);
static_assert(a >= b);

int main()
{
    {
        // C++17
        Point p1{};
        Point p2{4};
        Point p3{4, 5};
        Point p4{0, 5};
    }

    {  // C++20
        Point p4{.y = 5};
    }
}