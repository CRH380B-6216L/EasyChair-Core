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

EasyChair Core �� EasyChair ģ�����Ϲ��������������ͨ�ÿ⡣

## ����
* �ɿ�ƽ̨���루֧�� Linux, MacOS, Windows��
* Benchmarks
* Examples
* Tests
* ���� [Doxygen](http://www.doxygen.org) ������ API �ĵ�
* Continuous integration ([Travis CI](https://travis-ci.com), [AppVeyor](https://www.appveyor.com))

## ϵͳ����
* Linux �� MacOS �� Windows
* [cmake](https://www.cmake.org)
* [gcc](https://gcc.gnu.org)
* [git](https://git-scm.com)
* [gil](https://github.com/chronoxor/gil.git)
* [python3](https://www.python.org)

��ѡ��
* [clang](https://clang.llvm.org)
* [CLion](https://www.jetbrains.com/clion)
* [Cygwin](https://cygwin.com)
* [MSYS2](https://www.msys2.org)
* [MinGW](https://mingw-w64.org/doku.php)
* [Visual Studio](https://www.visualstudio.com)

## ͨ�����빹��

### ��װ [gil (git links) ����](https://github.com/chronoxor/gil)
```shell
pip3 install gil
```

### ���ô���ֿ�
```shell
git clone https://github.com/CRH380B-6216L/easychair-core.git
cd CppTemplate
gil update
```
### �����µ�ϵͳ�����й���

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

## ����
* ����Ʒ���� MIT Э�鿪Դ��
* ����Ʒ�� Ivan Shynkarenka �ṩ�� [CppTemplate](https://github.com/chronoxor/CppTemplate) ��ƽ̨����ģ�崴�������� MIT Э�鿪Դ��