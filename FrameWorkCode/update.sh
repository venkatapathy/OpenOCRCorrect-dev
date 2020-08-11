make clean
rm -f qpadfinal
rm -f Makefile
git pull -Xtheirs
qmake qpadfinal.pro
make
