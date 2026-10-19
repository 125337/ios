// userPaused @0x2b544

/* Function Stack Size: 0x10 bytes */

bool WCMVideoController::userPaused(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_userPaused) & 1;
}

