// isSelf @ 01526f14

/* Function Stack Size: 0x10 bytes */

bool WCRTopBarProfileData::isSelf(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

