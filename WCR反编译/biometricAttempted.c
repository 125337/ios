// biometricAttempted @ 0000bd04

/* Function Stack Size: 0x10 bytes */

bool EncryptionLock::biometricAttempted(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

