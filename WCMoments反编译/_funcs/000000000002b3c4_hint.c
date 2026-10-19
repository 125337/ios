// hint @0x2b3c4

/* Function Stack Size: 0x10 bytes */

ID WCMVideoController::hint(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_hint);
}

