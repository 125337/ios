// FUN_021cd30c @ 021cd30c

TargetProtocolConformanceDescriptor * FUN_021cd30c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6fe0 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c9a0c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ad78;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ad78,uVar1,local_20);
    DAT_028c6fe0 = pTVar2;
  }
  return DAT_028c6fe0;
}

