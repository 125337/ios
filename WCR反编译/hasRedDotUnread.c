// hasRedDotUnread @ 00358cac

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingEntry::hasRedDotUnread(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

