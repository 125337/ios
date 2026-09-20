// FUN_021c9aa0 @ 021c9aa0

TargetProtocolConformanceDescriptor * FUN_021c9aa0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6e60 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c9a0c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233af44;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233af44,uVar1,local_20);
    DAT_028c6e60 = pTVar2;
  }
  return DAT_028c6e60;
}

