// setDeferRuntimeApply: @ 01e170ec

/* Function Stack Size: 0x14 bytes */

void WCRefineSuperFloatButtonConfigViewController::setDeferRuntimeApply_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_deferRuntimeApply) = (byte)param_3 & 1;
  return;
}

