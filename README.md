# StenSaxPase

Rock paper scissors game by Martin Östman
This will require wxWidgets to be installed on your system

Originally it was built in codeblocks 12.11

In Windows, compile wxWidgets with ming
wxWidgets 3.0.5 compiled with
mingw32-make -f makefile.gcc MONOLITHIC=0 SHARED=0 UNICODE=1 BUILD=release CFLAGS="-ffunction-sections -fdata-sections -O2 -Os" CXXFLAGS="-ffunction-sections -fdata-sections -O2 -Os" LDFLAGS="-Wl,--gc-sections"

In Linux should work with wxGTK3 (wxWidgets-3.0.5.tar.gz) package

If compiling in Linux this commad should work:
g++ StenSaxPaseMain.cpp StenSaxPaseMain.h StenSaxPaseApp.cpp StenSaxPaseApp.h `wx-config --cxxflags --libs` -o StenSaxPaase
