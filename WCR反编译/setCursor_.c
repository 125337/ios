// setCursor: @ 00fe8328

/* Function Stack Size: 0x18 bytes */

void WCRInputBoxTextUndoEntry::setCursor_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x28) = param_3;
  return;
}

