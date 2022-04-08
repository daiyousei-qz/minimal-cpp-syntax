# Change Log

## [0.0.1]

- Initial release

## [0.0.2]

- Fix "if constexpr" and "if consteval"
- Add support for a number of pragma commands
- Add exprimental support for a basic set of identifiers to color dependent names in template definitions. Note such coloring could be incorrect. For example, in `a.Foo()`, we color `Foo` as functions but they actually can be function pointer variables.