// isFriend @ 01527338

/* Function Stack Size: 0x10 bytes */

bool WCRTopBarProfileData::isFriend(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

