// setIsRoot: @ 019ac464

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerViewController::setIsRoot_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isRoot) = (byte)param_3 & 1;
  return;
}

