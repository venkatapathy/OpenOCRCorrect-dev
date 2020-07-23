make clean
rm -f qpadfinal Makefile
git pull origin verifier-version
qmake qpadfinal.pro
make
