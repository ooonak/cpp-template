# cpp-template
Yet another C++ project template...

## Build and test

```
$ conan create .
```

## Do a pre-commit test run on all files

```
$ pre-commit run --all-files
```

You can give clang-tidy 'fix' a try.

```
$ clang-tidy src/main.cpp --fix-errors
```

## Initial bring up

Setup pre-commit file.

```
$ conan new cmake_exe -d name=cpp-template -d version=0.0.1
$ pre-commit install
$ pre-commit sample-config >> .pre-commit-config.yaml
$ pre-commit autoupdate
```

Adjust .pre-commit-config.yaml to your needs.

If you don't already have a .clang-format & .clang-tidy file.

```
$ clang-format -style=google -dump-config > .clang-format
$ clang-tidy --dump-config > .clang-tidy
```

Adjust files to your needs.
