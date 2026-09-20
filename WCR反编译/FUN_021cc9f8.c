// FUN_021cc9f8 @ 021cc9f8

TargetProtocolConformanceDescriptor * FUN_021cc9f8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f48 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_0219fbbc(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233aab4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233aab4,uVar1,local_20);
    DAT_028c6f48 = pTVar2;
  }
  return DAT_028c6f48;
}

