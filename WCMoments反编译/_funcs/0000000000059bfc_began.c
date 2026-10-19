// began @0x59bfc

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::began(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_began) & 1;
}

