// FUN_021cd08c @ 021cd08c

TargetProtocolConformanceDescriptor * FUN_021cd08c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6fb0 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_0219defc(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233aa4c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233aa4c,uVar1,local_20);
    DAT_028c6fb0 = pTVar2;
  }
  return DAT_028c6fb0;
}

