// FUN_021cd0f8 @ 021cd0f8

TargetProtocolConformanceDescriptor * FUN_021cd0f8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6fb8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c720c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ac7c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ac7c,uVar1,local_20);
    DAT_028c6fb8 = pTVar2;
  }
  return DAT_028c6fb8;
}

