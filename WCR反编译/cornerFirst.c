// cornerFirst @ 01be67d4

/* Function Stack Size: 0x10 bytes */

bool WCRMomentsDraftRowView::cornerFirst(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cornerFirst) & 1;
}

