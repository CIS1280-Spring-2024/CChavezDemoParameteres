#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void WriteHeader();
void WriteGoodbye();
int GetCodeInteger(int randSeed);
string AskForString();
string AskForEncryptedMessage();
void Encoder(string userMessage, int encoderKey);
void Decoder(string userMessage, int encoderKey);

#endif

