# This is libcity.

## AUTHOR
 Radek Pazdera <radek.pazdera@gmail.com>

## BUILD
To build the library write

  make

This will build both the staticaly and dynamicaly linked versions
and also extract headers from source tree into include/.

## BUILD with tipi.build
To build and hack on libcity, you can build, install dependencies and run all tests with any of : 
 -  `tipi . -t macos`
 -  `tipi . -t linux`
 -  `tipi . -t windows`

## INSTALL with tipi.build
`libcity` can be easily used with the [tipi.build](https://tipi.build) dependency manager, by adding the following to a `.tipi/deps`:

```json
{
  "CallForSanity/libcity": { }
}
```

## DOCUMENTATION
Documentation can be extracted from the source codes with doxygen.

  make doc

Will create documentation into doc/ folder.

## INSTALL
In order to install this library to your Unix-like operating
system you can use the generic Makefile.

Write

  make

to compile the code and

  sudo make install

to install the binaries to /usr/local/bin and header files to
/usr/local/include.

You might have to hack the Makefile to make it work on some
platforms (like Windows, Mac OS and others), but the code itself
should be platform-independent.

## TESTING
Unit tests for the library are available in the test/ subdirectory. The
UnitTest++ framework is required to run them. Specify path to frameworks
library and headers in Makefile.

In order to be able to build tests correctly, UnitTest++ framework
must be installed or an include and link path must be set in the
Makefile. See UNITTESTCPP_LIB and UNITTESTCPP_INCLUDE_DIR variables.

## LICENSE
  Copyright (C) 2011 Radek Pazdera <radek.pazdera@gmail.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
