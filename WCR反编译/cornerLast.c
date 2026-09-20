// cornerLast @ 01be6830

/* Function Stack Size: 0x10 bytes */

bool WCRMomentsDraftRowView::cornerLast(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cornerLast) & 1;
}

