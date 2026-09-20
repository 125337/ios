// FUN_021ccca0 @ 021ccca0

TargetProtocolConformanceDescriptor * FUN_021ccca0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f70 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c9c78(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ade4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ade4,uVar1,local_20);
    DAT_028c6f70 = pTVar2;
  }
  return DAT_028c6f70;
}

