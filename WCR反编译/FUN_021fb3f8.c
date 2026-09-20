// FUN_021fb3f8 @ 021fb3f8

TargetProtocolConformanceDescriptor * FUN_021fb3f8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7200 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fb364(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b3e8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b3e8,uVar1,local_20);
    DAT_028c7200 = pTVar2;
  }
  return DAT_028c7200;
}

