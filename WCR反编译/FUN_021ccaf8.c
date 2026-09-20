// FUN_021ccaf8 @ 021ccaf8

TargetProtocolConformanceDescriptor * FUN_021ccaf8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f58 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_0219fbbc(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ab24;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ab24,uVar1,local_20);
    DAT_028c6f58 = pTVar2;
  }
  return DAT_028c6f58;
}

