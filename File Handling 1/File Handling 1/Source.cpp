#define _CRT_SECURE_NO_WARNINGS  //this can do remove the error of fopen_s error for visaul studio 
#include <iostream>
#include<string>
using namespace std;
constexpr int maxbuffer = 1028;//this is very imp aspect for memory optimation like saving your pc form crashs 
//this put an limit on using memory on use will complieing


int main() {
    const char* filename = "newWorld.exe";
    const char* info = " dhiraj pandurang kumbhar ";

    //1.opening/creating an file
    //2.write file with w

 //   FILE* fh = fopen(filename, "w");

 //   for (int i = 0; i < 500; i++) {
 //       
 //// this loop can be used to write info in file whatever written in fputs in that loop only for one time without repeating an values 
 //       fputs(info, fh);
 //   }
 
  //3.apennd the file with some when ever it runs 
 
 ////fopen(filename, "a");

    ////for (int i = 0; i < 5000; i++) {
    ////    
    ////    //but this loop can be used to append the info in file whatever written in fputs in that loop every time the lopp run doesnt care what ever it is
    ////    fputs(info, fh);
    ////}
    ////fclose(fh);


    //3.this can give look/ read the file content
    

    //////char buf[maxbuffer];                //this part can make able to read the file in cmd what ever have witten in that file while get desplayed
    //////                                        //over cmd because of fgets function that read the file and the data from it
    //////FILE* fh = fopen(filename, "r");

    //////while (fgets(buf, maxbuffer, fh)) {
    //////    fputs(buf, stdout);
    //////}
    //////fclose(fh);

    return 0;
}