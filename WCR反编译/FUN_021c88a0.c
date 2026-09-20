// FUN_021c88a0 @ 021c88a0

TargetProtocolConformanceDescriptor * FUN_021c88a0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6da0 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c880c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b420;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b420,uVar1,local_20);
    DAT_028c6da0 = pTVar2;
  }
  return DAT_028c6da0;
}

