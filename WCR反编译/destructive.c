// destructive @ 01e3e730

/* Function Stack Size: 0x10 bytes */

bool WCRTGTabsSheetAction::destructive(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

