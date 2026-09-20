// FUN_021ccb78 @ 021ccb78

TargetProtocolConformanceDescriptor * FUN_021ccb78(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f60 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c720c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ac40;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ac40,uVar1,local_20);
    DAT_028c6f60 = pTVar2;
  }
  return DAT_028c6f60;
}

