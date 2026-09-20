// FUN_021cce20 @ 021cce20

TargetProtocolConformanceDescriptor * FUN_021cce20(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f88 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c9c78(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ae0c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ae0c,uVar1,local_20);
    DAT_028c6f88 = pTVar2;
  }
  return DAT_028c6f88;
}

