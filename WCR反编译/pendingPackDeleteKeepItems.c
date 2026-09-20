// pendingPackDeleteKeepItems @ 0043e470

/* Function Stack Size: 0x10 bytes */

bool WCRLEPanelSheetProxy::pendingPackDeleteKeepItems(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

