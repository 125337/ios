// FUN_021fd0f8 @ 021fd0f8

TargetProtocolConformanceDescriptor * FUN_021fd0f8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7308 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fce18(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b594;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b594,uVar1,local_20);
    DAT_028c7308 = pTVar2;
  }
  return DAT_028c7308;
}

