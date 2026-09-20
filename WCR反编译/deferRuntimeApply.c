// deferRuntimeApply @ 01e170c0

/* Function Stack Size: 0x10 bytes */

bool WCRefineSuperFloatButtonConfigViewController::deferRuntimeApply(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_deferRuntimeApply) & 1;
}

