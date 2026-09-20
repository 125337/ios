// isLockScreenPresented @ 0000bc7c

/* Function Stack Size: 0x10 bytes */

bool EncryptionLock::isLockScreenPresented(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

