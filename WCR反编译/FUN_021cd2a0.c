// FUN_021cd2a0 @ 021cd2a0

TargetProtocolConformanceDescriptor * FUN_021cd2a0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6fd8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c8c68(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ad3c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ad3c,uVar1,local_20);
    DAT_028c6fd8 = pTVar2;
  }
  return DAT_028c6fd8;
}

