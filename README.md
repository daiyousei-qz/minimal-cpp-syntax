# least-cpp-syntax README

Because of the complexity of the C++ language, it is hard for a syntax highlighter to function correctly and accurately with regex matching. In most cases, however, a language server would be hooked up to parse the source code and recolor the majority of tokens with sementic highlighting, discarding whatever a syntax highlighter offers. As the language server has more knowledge of the intrinsic structure of the source code, it could color the source code far more accurately. On this basis, this extension intends to provide only a basic set of syntax highlighting that complements a sementic highlighing provider, achieving:

1. Simplicity. Only to colorize a fraction of the C++ language has to offer.
2. Performance. Of course, it's simple!
3. Robustness. Less corner cases that could break the syntax rules.

## Features

Syntax highlighting for:

- Comments
- Keywords
- Number literals
- String literals
- Preprocessor directives

## Requirements

None

## Extension Settings

TODO:

This extension contributes the following settings:

* `myExtension.enable`: enable/disable this extension
* `myExtension.thing`: set to `blah` to do something

## Known Issues

TODO:

## Release Notes

### 0.0.1
Initial release of Least C++ Syntax.

## Credits

Syntax rules in this extension are heavily influenced by [better-cpp-syntax](https://github.com/jeff-hykin/better-cpp-syntax)

Also, thanks for the community maintaining the awesome [cppreference](https://en.cppreference.com/w/)!