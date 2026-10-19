// muted @0x2b5a0

/* Function Stack Size: 0x10 bytes */

bool WCMVideoController::muted(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_muted) & 1;
}

