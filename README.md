# CppTemplate

[![Linux build status](https://img.shields.io/travis/chronoxor/CppTemplate/master.svg?label=Linux)](https://travis-ci.org/chronoxor/CppTemplate)
[![OSX build status](https://img.shields.io/travis/chronoxor/CppTemplate/master.svg?label=OSX)](https://travis-ci.org/chronoxor/CppTemplate)
[![Cygwin build status](https://img.shields.io/appveyor/ci/chronoxor/CppTemplate/master.svg?label=Cygwin)](https://ci.appveyor.com/project/chronoxor/CppTemplate)
[![MinGW build status](https://img.shields.io/appveyor/ci/chronoxor/CppTemplate/master.svg?label=MinGW)](https://ci.appveyor.com/project/chronoxor/CppTemplate)
[![Windows build status](https://img.shields.io/appveyor/ci/chronoxor/CppTemplate/master.svg?label=Windows)](https://ci.appveyor.com/project/chronoxor/CppTemplate)

C++ Template Library contains initial templates for a new C++ library project.

[CppTemplate API reference](http://chronoxor.github.io/CppTemplate/index.html)

# Contents
  * [Features](#features)
  * [Requirements](#requirements)
  * [How to build?](#how-to-build)
    * [Clone repository with submodules](#clone-repository-with-submodules)
    * [Linux](#linux)
    * [OSX](#osx)
    * [Windows (Cygwin)](#windows-cygwin)
    * [Windows (MinGW)](#windows-mingw)
    * [Windows (MinGW with MSYS)](#windows-mingw-with-msys)
    * [Windows (Visaul Studio 2015)](#windows-visaul-studio-2015)

# Features
* Cross platform
* Benchmarks
* Examples
* Tests
* (Doxygen)[http://www.doxygen.org] API documentation
* Continuous integration ((Travis CI)[https://travis-ci.com], (AppVeyor)[https://www.appveyor.com])

# Requirements
* Linux
* OSX
* Windows 7 / Windows 10
* [CMake](http://www.cmake.org)
* [GIT](https://git-scm.com)
* [GCC](https://gcc.gnu.org)

Optional:
* [Clang](http://clang.llvm.org)
* [Clion](https://www.jetbrains.com/clion)
* [MinGW](http://mingw-w64.org/doku.php)
* [Visual Studio 2015](https://www.visualstudio.com)

#How to build?

## Clone repository with submodules
```
git clone https://github.com/chronoxor/CppTemplate.git CppTemplate
cd CppTemplate
git submodule update --init --recursive --remote
```

## Linux
```
cd build
unix.sh
```

## OSX
```
cd build
unix.sh
```

## Windows (Cygwin)
```
cd build
cygwin.bat
```

## Windows (MinGW)
```
cd build
mingw.bat
```

## Windows (Visaul Studio 2015)
```
cd build
vs.bat
```
