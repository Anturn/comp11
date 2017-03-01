//
//  pat.cpp  -- draw a checkerboard pattern
//  version1: draws 8 rows of 8 chars alternating X and -
//  Goal: allow user to enter two strings and 
//		the number of pairs per line
//		the number lines per set
//		the number sets per image
//
//  tools: loops and functions(with arguments)
//  updated by: Rui Qin
//  date: 2/10/2016

#include <iostream>

using namespace std;
void lotOflines(string s1, string s2,int reps,int pairsofrows);

int  main()
{       string a,b;
        int reps,pairsofrows;

        cout << "two strings" << endl;
        cin >> a >> b ;

        cout << "number of pairs of strings per row" <<endl;
        cin >> reps;

        cout << "numner of pairs of rows?" << endl;
        cin >> pairsofrows;


        lotOflines(a,b,reps,pairsofrows);
        return 0;
}

void lotOflines(string s1, string s2,int reps,int pairsofrows)
{       int n;
        int m;

        for ( n=1;n<=pairsofrows;n++){
                for (m=1;m<=reps;m++){
                        cout << s1 << s2;
                }       cout << endl;

                for (m=1;m<=reps;m++){
                        cout << s2 << s1;
                }       cout << endl;
        }
}








