# Self-Management-and-Analysis-Planner
This program is the answer to help your daily life structured and well-managed.
![Screenshot (28)](https://user-images.githubusercontent.com/56747506/67136800-e1720a00-f255-11e9-999d-874a92882d56.png)


## Table of contents
* [General Info](#general-info)
* [Technologies](#technologies)
* [Setup](#setup)
* [Team](#team)

## General Info
This program use basic C language.

## Technologies
This program is created with :
* Code::Block version 17.12

## Setup
Compile this code from Main Code
* [Main Code](#main-code)

## Main Code
![Alt Text](http://g.recordit.co/RsTa2yu3os.gif)
Header Descriptions :
1) main.c = contains the main menu of the program
2) menu.h = contains all menus of the program
3) declaration.h = contains declaration of modular program, plan count of each day, and struct used in the other header
4) displayPlans.h = contains the program code for displaying the plans
5) addMenu.h = contains the program code for creating plans
6) editMenu.h = contains the program code for modifying the content of the plans
7) deleteMenu.h = contains the program code for deleting the plans
8) countRead.h = contains the program code to read all the files used in the program

## countRead
![Alt Text](http://g.recordit.co/iFTi002IQL.gif)
Its functions to read all the .dat files of count and plan files of each day. the program run at the start of main program.

## Declaration
![Alt Text](http://g.recordit.co/vfIILjxmn9.gif)
Declaration consists of plan struct that has the content of the plan, declaration of other modular program, and the count variables.
## Menu
![Alt Text](http://g.recordit.co/oTrEGHavL8.gif)
Consists of every menu used in the program except the main menu. the menu redirects the user input to another modular program.

## Add Menu
![Alt Text](http://g.recordit.co/PmA8vLvft0.gif)
Consists of adding plan mechanism, every plan added is saved into the array of struct.

## Edit Menu
![Alt Text](http://g.recordit.co/ShEaTCrui9.gif)
Consists of edit plan mechanism, it works by calling the intended array of struct and edit the content.

## Delete Menu
![Alt Text](http://g.recordit.co/TloFMOMfI2.gif)
Consists of delete plan mechanism, it works by reducing the count and moved the other plan into the deleted plan

## Display Menu
![Alt Text](http://g.recordit.co/kGDBowua0T.gif)
Consists the code for displaying the plan, it is printed in tabular format and use loop to print all the plan

## Team
* Ariq Mahira (1806187575)
* Variscia Putri (1806228316)

## References
* https://www.codewithc.com/mini-project-in-c-personal-diary-management-system/
* https://fresh2refresh.com/c-programming/c-file-handling/
* https://fresh2refresh.com/c-programming/c-passing-struct-to-function/
* https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/array-of-c-string
* https://overiq.com/c-programming-101/array-of-strings-in-c/
