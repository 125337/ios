// setSelectMode: @ 019aca4c

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerViewController::setSelectMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_selectMode) = (byte)param_3 & 1;
  return;
}

