// seeking @0x2b5fc

/* Function Stack Size: 0x10 bytes */

bool WCMVideoController::seeking(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_seeking) & 1;
}

