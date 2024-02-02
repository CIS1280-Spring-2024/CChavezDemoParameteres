// Function definitions
#include "Functions.h"
void WriteHeader()
{
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\n";
    cout << "Welcome to ENCODER/DECODER\n\n";
}

int GetCodeInteger(int randSeed)
{
    int randSeedGCI = randSeed;
    int encoderKey = -1;
    char encoderKeySet = 'n';
    //  The function gives the user the option to input 
    //  a codeInteger or have it randomly determined by the program.
    //  If the user inputs an integer, 
    //  the program checks that it is in the valid range.If not, display a message and loop back 
    //  to input a new key.
    do {
        cout << "What encoder key would you like to use?\nYou can choose any number between 1 and 37.\nIf you enter 0 an encoder key will be randomly generated for you.\n";
        cin >> encoderKey;
        cin.ignore();

        if (encoderKey <= 37)
        {
            if (encoderKey >= 1) {
                cout << "You have set your encoder key to " << encoderKey << "!\n";
                encoderKeySet = 'y';
            }
            else if (encoderKey == 0){
                cout << "You have set your encoder key to a random value of " << randSeedGCI << "!\n";
                encoderKey = randSeedGCI;
                encoderKeySet = 'y';
            }
        }
        else {
            cout << "You did not input a valid encoder key.\n";
        }
    } while (encoderKeySet == 'n');

    return encoderKey;
}
string AskForString()
{
    string userMessage = "test";
    cout << "Please enter the message you would like to Encode ?\n";
    getline (cin, userMessage);
    return userMessage;
}
string AskForEncryptedMessage()
{
    string userMessage = "test";
    cout << "Please enter the message you would like to Decode ?\n";
    cin >> userMessage;
    cin.ignore();
    return userMessage;
}
void Encoder(string userMessage, int encoderKey)
{   
    string encodedOutput = "";
    int encodingVar = 0;

    for (int i = 0; i < userMessage.size(); i++) {
        int encodingVar = userMessage[i];
        encodingVar = encodingVar + encoderKey;
        encodedOutput = encodedOutput + (char)encodingVar;
    }
    cout << "Encoding complete!\nThe message: "<< userMessage <<". has been Encoded with the key of " << encoderKey << "\nThe encoded message is:" << encodedOutput << "\n";
}
void Decoder(string userMessage, int encoderKey)
{
    string decodedOutput = "";
    int decodingVar = 0;

    for (int i = 0; i < userMessage.size(); i++) {
        int decodingVar = userMessage[i];
        decodingVar = decodingVar - encoderKey;
        decodedOutput = decodedOutput + (char)decodingVar;
    }
    cout << "Decoding complete!\nThe message: " << userMessage << ". has been decoded with the key of " << encoderKey << "\nThe decoded message is:" << decodedOutput << "\n";
}
//int GetNumber()
//{
//    int getNumOutput = 0;
//    cout << "What number would you like to sum?\n";
//    cin >> getNumOutput;
//    cin.ignore();
//    return getNumOutput;
//}
//
//int AddUpToSum(int userInput)
//{
//    int autoVar = userInput;
//    int outputSum = 0;
//    while (autoVar > 0)
//    {
//        outputSum = outputSum + autoVar;
//        autoVar = autoVar - 1;
//    }
//
//    return outputSum;
//}
void WriteGoodbye()
{
    cout << "Thanks for using ENCODER/DECODER, Goodbye!\n\n\n";
}