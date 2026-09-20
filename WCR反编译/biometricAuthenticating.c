// biometricAuthenticating @ 0000bd4c

/* Function Stack Size: 0x10 bytes */

bool EncryptionLock::biometricAuthenticating(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

