// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp4Act6
#include "Functions.h"


int main()
{
    //  In your main function, show your header, seed the rand function and begin a do while loop.
    WriteHeader();
    srand(time(0));
    int keyCap = 38;
    int randSeed = rand() % keyCap;
    string userEncodeDecode = "test";

    char playLoop = 'y';
    do {
        //    •	Ask the user whether they want to Encode or Decode a secret message.
        //      Hint : To encode / decode you’ll need to access each character in the string, 
        //      adjust it, and then either return the changed string or use a stringstream 
        //      object to obtain the new string.
        cout << "would you like to ENCODE or DECODE a message. Please answer in all caps:\n";
        cin >> userEncodeDecode;
        cin.ignore();
        if (userEncodeDecode == "ENCODE"){
            int encoderKey = GetCodeInteger(randSeed);
            //    o	 Encode,
            //    	Call AskForString, which returns the secret message to be encoded.
            //      Require that all letters be upper case, and that no punctuation be used.
            string userMessage = AskForString();
            //    	Call Encoder, passing the codeInteger and secret message, and returning the 
            //      encrypted message.
            //    	Display the message, the encrypted message, and the codeInteger, or encryption key.
            Encoder(userMessage, encoderKey);

        }else if ((userEncodeDecode == "DECODE")){
            int encoderKey = GetCodeInteger(randSeed);
            //    o	Decode,
            //    	Call AskForEncryptedMessage, which returns the encrypted message to be decoded.
            string userMessage = AskForEncryptedMessage();
            //    	Call Decoded, passing the codeInteger and encrypted message, and returning the 
            //      decoded message.
            //    	Display the encrypted message, the decoded message and the codeInteger, or 
            //      encryption key.
            Decoder(userMessage, encoderKey);
        }else{
            cout << "you did not correctly select either ENCODE or DECODE\n";
        }

        //    •	Ask the user if they wans to try another secret message.If yes, loop yup to the 
        //      beginning of the do - while loop, otherwise, drop out of the loop.
        cout << "Would you like to run ENCODER/DECODER again(y/n): ";
        cin >> playLoop;
        cin.ignore();
        cout << "\n";
    } while (playLoop == 'y');
    //    •	When the user has finished, display a good - bye message.
    //Also write a Header function and a Goodbye function.
    WriteGoodbye();
    //    5 pts Delete the intermediate files, zip your project and upload it to this activity in Brightspace.
    return 0;
}

