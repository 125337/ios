// increase @0x82908

/* Function Stack Size: 0x10 bytes */

int WCMYBIBSentinel::increase(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _OSAtomicIncrement32(param_1 + 8);
  return iVar1;
}

