# TDD

## google test の準備

```
$ git clone https://github.com/google/googletest.git
$ cd googletest/
$ mkdir build
$ cd build/
$ cmake ..
$ make
```

とすると

```
googletest/build/googlemock/gtest/libgtest_main.a
googletest/build/googlemock/gtest/libgtest.a
```

に必要なライブラリがビルドされる。

## fizz buzz のテスト

プロジェクトの最上位ディレクトリで

```
$ mkdir build
$ cd build/
$ cmake ..
$ make
```
とすると

```
build/fizz_buzz/fizz_buzz_test
```

が生成される。

プロジェクト最上位から build ディレクトリに移動して下記のようにテストを行う。

```
$ make;./fizz_buzz/fizz_buzz_test
[100%] Built target fizz_buzz_test
Running main() from gtest_main.cc
[==========] Running 7 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 7 tests from FizzBuzzTest
[ RUN      ] FizzBuzzTest.Test3
[       OK ] FizzBuzzTest.Test3 (0 ms)
[ RUN      ] FizzBuzzTest.Test5
[       OK ] FizzBuzzTest.Test5 (0 ms)
[ RUN      ] FizzBuzzTest.Test15
[       OK ] FizzBuzzTest.Test15 (0 ms)
[ RUN      ] FizzBuzzTest.Test4
[       OK ] FizzBuzzTest.Test4 (0 ms)
[ RUN      ] FizzBuzzTest.Test9
[       OK ] FizzBuzzTest.Test9 (0 ms)
[ RUN      ] FizzBuzzTest.Test10
[       OK ] FizzBuzzTest.Test10 (0 ms)
[ RUN      ] FizzBuzzTest.Test30
[       OK ] FizzBuzzTest.Test30 (0 ms)
[----------] 7 tests from FizzBuzzTest (0 ms total)

[----------] Global test environment tear-down
[==========] 7 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 7 tests.
```
