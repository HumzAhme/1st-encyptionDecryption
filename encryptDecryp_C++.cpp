#include<cstdlib>
#include <iostream>
#include<iomanip>
#include<string.h> 
/* Encryption and Decryption applicable to characters, numbers & majority of the special-characters.
    A few special-characters have their limitations which are NOT encryptable here due to 
       end of their list in the embedded character board in computers' memory on a 
        certain special-character. As this program involved adding and subtracting
          the given Text to make the individual alphabets ahead or behind from 
           their actual value, hence those last special-characters on the 
            list do not have any charcters ahead of them which thus give
             an unidentified character as an encrypted message which is
              practically impossible to decrypt as it doesn't actually
               exist.*/
               
using namespace std;

int main()
{
    int inpt,Opt, lpr=0, lpr1=0, encrypter=-2; //inpt = the character at an array position
    string Text,OText;

    cout<<"Entre a String of Words to be Encrypted or Decrypted: \n\n\t";
    getline(cin,Text); // Text = message to be encrypted or decrypted
    
    cout<<"\n\nDo you require to Encrypt or Decrypt this inputted Text? "<<endl;
    cout<<"Kindly press '1' to encrypt or '2' to decrypt as per your requirements. \n\n\t";
    
    do{
    cin>>Opt;          // Opt = option to encrypt or decrypt
    switch(Opt) {
    
    case 1:
    
    for(inpt=0;(Text[inpt]!='\0');inpt++) //Set of Encryption Keys from here:
        {
          if (Text[inpt]==' ')
          {cout<<" ";
            continue;}
            
           else 
           Text[inpt]=Text[inpt]+encrypter;}  
       cout<<"\nYour Encrypted String of Words is as follows: \n\n  "<<Text<<endl<<endl;
       cout<<"\nWould U like to Encrypt or Decrypt Some/Any other message? ";
       cout<<"\n\nIf NOT, enter '998'. If YES, press any Number (EXCEPT 998) and enter.  ";
       cin>>lpr1; // lpr1 = used as a users' choice to run the loop of encrypting or decrypting again or to End the programs' execution.
       if (lpr1!=998)
       {    cout<<"Enter a String of Words to be Encrypted or Decrypted. \n\n\t";
            cin.ignore();
            getline(cin, Text);   // taking Text again from the user for encryption or decryption.
            
           cout<<"\n\nKindly press '1' to encrypt or '2' to decrypt as per your requirements. \n\n\t";}
           
       else
       {cout<<"\nYOU HAVE TERMINATED THE PROGRAM!";
       exit(998);}
       continue;

    case 2:
    for(inpt=0;(Text[inpt]!='\0');inpt++)  //Set of Decryption Keys from here:
        {
          if (Text[inpt]==' ')
          {cout<<" ";
            continue;}

           else 
           Text[inpt]=Text[inpt]-encrypter;}  
       cout<<"\nYour Decrypted String of Words is as follows: \n\n  "<<Text<<endl<<endl;
       cout<<"\nWould U like to Encrypt or Decrypt Some/Any other message? ";
       cout<<"\n\nIf NOT, enter '998'. If YES, press any Number (EXCEPT 998) and enter.  ";
       cin>>lpr1;      // lpr = used as a users' choice to run the loop of encrypting or decrypting again or to End the programs' execution.
       if (lpr1!=998)
       {    cout<<"Enter a String of Words to be Encrypted or Decrypted. \n\n\t";
            cin.ignore();       // Ignoring or excreminating the previous input value in 'Text' of the user.
            getline(cin, Text);   // taking Text again from the user for encryption or decryption.
            
           cout<<"\n\nKindly press '1' to encrypt or '2' to decrypt as per your requirements. \n\n\t";}
           
       else
       {cout<<"\nYOU HAVE TERMINATED THE PROGRAM!";
       exit(998);}
       continue;
       default:
       cout<<"\nU have NOT correctly opted for the 2 possible domains. Kindly select between the provided domains only. \n\n";
       cout<<"You had to press '1' for Encrypting your message OR '2' for Decrypting the provided String of words.\n";
       cout<<"Would you need to Encrypt or Decrypt a message?\nIf NOT, then enter '998'\nIf YES, then press any number (EXCEPT 998) and press enter.\t";
       cin>>lpr;
       if (lpr!=998)
       {cout<<"\n\nKindly press '1' to encrypt or '2' to decrypt as per your requirements. \n\n\t";}
       else
       {cout<<"\nYOU HAVE TERMINATED THE PROGRAM!";}
       
             }
    }
      while(lpr!=998);
    
    return 0;
    }
