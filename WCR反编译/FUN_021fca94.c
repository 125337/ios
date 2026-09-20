// FUN_021fca94 @ 021fca94

TargetProtocolConformanceDescriptor * FUN_021fca94(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c72b8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fb364(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b300;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b300,uVar1,local_20);
    DAT_028c72b8 = pTVar2;
  }
  return DAT_028c72b8;
}

