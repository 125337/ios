// setFailedAttempts: @ 0000bbb8

/* Function Stack Size: 0x18 bytes */

void EncryptionLock::setFailedAttempts_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x28) = param_3;
  return;
}

