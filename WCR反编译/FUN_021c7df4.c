// FUN_021c7df4 @ 021c7df4

TargetProtocolConformanceDescriptor * FUN_021c7df4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6d40 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c7d60(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233afa8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233afa8,uVar1,local_20);
    DAT_028c6d40 = pTVar2;
  }
  return DAT_028c6d40;
}

