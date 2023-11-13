# C++ tasks for my school
Here I store all C++ tasks issued by my teacher.  
I use the `DD.MM.YYYY` date format. Function names, variables, comments etc. are in English, but everything printed on the console is written in Polish (except bash scripts). I can translate if you need to. 

## ⚠️ IMPORTANT
**Please do not just copy and paste my code if you want to use it for school**. I've decided to make it open source only to help people learn off examples.  
(I hope my teacher won't accuse me of stealing my own code if he finds this lol)

## Compiling
I prepared scripts that should handle problems and tell you instructions if you've set up anything wrong.
### For Windows (EXE)
I would love to use Linux as the primary platform for compilation but our teacher only uses Windows.  
#### On Linux
Install the `mingw-w64` package.
Arch:
```
sudo pacman -S mingw-w64
```
Debian:
```
sudo apt install mingw-w64
```

After it finishes installing use.
```
./exe-linux path/to/your/file.cpp
```
to get a Windows EXE file.
You can test it using `wine`.

#### On Windows
Install https://www.msys2.org/.
Then open it and run
```
pacman -S mingw-w64-x86_64-toolchain
```
in the terminal.
You will be prompted which packages to install, press enter to use the default value. Then press Y to proceed.
After it finishes installing, navigate to your project directory using `cd path/to/your/folder` (Msys2 only has access to files inside the `C:\msys64` dir).
Then use
```
./exe-win path/to/your/file.cpp
```
to get a .exe file.

### For Linux
#### On Linux
Make sure you have the `gcc` package installed. Then run:
```
g++ path/to/file.cpp
```
#### On Windows
TODO
