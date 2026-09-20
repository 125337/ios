// FUN_021fcf8c @ 021fcf8c

TargetProtocolConformanceDescriptor * FUN_021fcf8c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c72f0 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fce18(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b558;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b558,uVar1,local_20);
    DAT_028c72f0 = pTVar2;
  }
  return DAT_028c72f0;
}

