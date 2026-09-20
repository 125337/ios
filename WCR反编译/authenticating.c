// authenticating @ 010f22b4

/* Function Stack Size: 0x10 bytes */

bool WCRefinePageLockGuard::authenticating(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

