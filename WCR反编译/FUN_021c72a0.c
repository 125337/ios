// FUN_021c72a0 @ 021c72a0

TargetProtocolConformanceDescriptor * FUN_021c72a0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6b70 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c720c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233afd4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233afd4,uVar1,local_20);
    DAT_028c6b70 = pTVar2;
  }
  return DAT_028c6b70;
}

