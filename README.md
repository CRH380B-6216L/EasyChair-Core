# EasyChair Core

[![Linux (clang)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-linux-clang.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-linux-clang.yml)
[![Linux (gcc)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-linux-gcc.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-linux-gcc.yml)
<br/>
[![MacOS](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-macos.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-macos.yml)
<br/>
[![Windows (Cygwin)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-cygwin.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-cygwin.yml)
[![Windows (MSYS2)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-msys2.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-msys2.yml)
[![Windows (MinGW)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-mingw.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-mingw.yml)
[![Windows (Visual Studio)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-vs.yml/badge.svg)](https://github.com/CRH380B-6216L/easychair-core/actions/workflows/build-windows-vs.yml)

EasyChair Core 是 EasyChair 模拟联合国会议主持软件的通用库。

## 特性
* 可跨平台编译（支持 Linux, MacOS, Windows）
* Benchmarks
* Examples
* Tests
* 基于 [Doxygen](http://www.doxygen.org) 的完整 API 文档
* Continuous integration ([Travis CI](https://travis-ci.com), [AppVeyor](https://www.appveyor.com))

## 系统需求
* Linux 或 MacOS 或 Windows
* [cmake](https://www.cmake.org)
* [gcc](https://gcc.gnu.org)
* [git](https://git-scm.com)
* [gil](https://github.com/chronoxor/gil.git)
* [python3](https://www.python.org)

可选：
* [clang](https://clang.llvm.org)
* [CLion](https://www.jetbrains.com/clion)
* [Cygwin](https://cygwin.com)
* [MSYS2](https://www.msys2.org)
* [MinGW](https://mingw-w64.org/doku.php)
* [Visual Studio](https://www.visualstudio.com)

## 通过代码构建

### 安装 [gil (git links) 工具](https://github.com/chronoxor/gil)
```shell
pip3 install gil
```

### 配置代码仓库
```shell
git clone https://github.com/CRH380B-6216L/easychair-core.git
cd CppTemplate
gil update
```
### 在以下的系统环境中构建

#### Linux
```shell
cd build
./unix.sh
```

#### MacOS
```shell
cd build
./unix.sh
```

#### Windows (Cygwin)
```shell
cd build
unix.bat
```

#### Windows (MSYS2)
```shell
cd build
unix.bat
```

#### Windows (MinGW)
```shell
cd build
mingw.bat
```

#### Windows (Visual Studio)
```shell
cd build
vs.bat
```

## 声明
* 本产品基于 MIT 协议开源。
* 本产品由 Ivan Shynkarenka 提供的 [CppTemplate](https://github.com/chronoxor/CppTemplate) 跨平台代码模板创建。基于 MIT 协议开源。