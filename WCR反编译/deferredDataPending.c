// deferredDataPending @ 01527554

/* Function Stack Size: 0x10 bytes */

bool WCRTopBarProfileData::deferredDataPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

