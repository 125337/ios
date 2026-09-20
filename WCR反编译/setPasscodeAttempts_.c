// setPasscodeAttempts: @ 010f2414

/* Function Stack Size: 0x18 bytes */

void WCRefinePageLockGuard::setPasscodeAttempts_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x30) = param_3;
  return;
}

