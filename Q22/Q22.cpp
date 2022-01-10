#include <iostream>
using namespace std;

int maximum(int *aptr, int *bptr, int *cptr)
{
    return (*aptr > *bptr) ? (*aptr > *cptr ? *aptr : *cptr) : (*bptr > *cptr ? *bptr : *cptr);
}

int minimum(int *aptr, int *bptr, int *cptr)
{
    return (*aptr < *bptr) ? (*aptr < *cptr ? *aptr : *cptr) : (*bptr < *cptr ? *bptr : *cptr);
}

int main()
{
    int a, b, c;
    int *aptr, *bptr, *cptr;
    aptr = &a;
    bptr = &b;
    cptr = &c;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;
    cout << "The greatest among a, b, c is " << maximum(aptr, bptr, cptr) << endl;
    cout << "The smallest among a, b, c is " << minimum(aptr, bptr, cptr) << endl;
    return (0);
}