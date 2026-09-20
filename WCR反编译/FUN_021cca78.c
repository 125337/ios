// FUN_021cca78 @ 021cca78

TargetProtocolConformanceDescriptor * FUN_021cca78(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f50 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_0219fbbc(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233aa88;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233aa88,uVar1,local_20);
    DAT_028c6f50 = pTVar2;
  }
  return DAT_028c6f50;
}

