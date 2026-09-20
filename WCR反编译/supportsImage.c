// supportsImage @ 009ad06c

/* Function Stack Size: 0x10 bytes */

bool WCRefineAIProvider::supportsImage(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

