// hasUnlockedSuccessfully @ 0000bddc

/* Function Stack Size: 0x10 bytes */

bool EncryptionLock::hasUnlockedSuccessfully(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

