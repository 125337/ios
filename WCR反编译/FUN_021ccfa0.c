// FUN_021ccfa0 @ 021ccfa0

TargetProtocolConformanceDescriptor * FUN_021ccfa0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6fa0 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c720c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ac14;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ac14,uVar1,local_20);
    DAT_028c6fa0 = pTVar2;
  }
  return DAT_028c6fa0;
}

