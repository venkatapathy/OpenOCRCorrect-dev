sudo apt-get update
sudo apt-get install build-essential libgl1-mesa-dev
sudo apt-get install qt5-default
sudo apt-get install tesseract-ocr
sudo apt-get install libleptonica-dev
sudo apt install libtesseract-dev
qmake qpadfinal.pro
make clean
make
