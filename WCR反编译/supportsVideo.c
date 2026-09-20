// supportsVideo @ 009ad0b4

/* Function Stack Size: 0x10 bytes */

bool WCRefineAIProvider::supportsVideo(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

