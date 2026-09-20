// biometricUnlockEnabled @ 0000bd94

/* Function Stack Size: 0x10 bytes */

bool EncryptionLock::biometricUnlockEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

