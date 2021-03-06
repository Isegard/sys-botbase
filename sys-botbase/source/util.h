#include <switch.h>
#define MAX_LINE_LENGTH 344 * 32 * 2

extern u64 mainLoopSleepTime;

void fatalLater(Result err);
int setupServerSocket();
u64 parseStringToInt(char* arg);
u8* parseStringToByteBuffer(char* arg, u64* size);
HidControllerKeys parseStringToButton(char* arg);