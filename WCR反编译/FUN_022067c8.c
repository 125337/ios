// FUN_022067c8 @ 022067c8

TargetProtocolConformanceDescriptor * FUN_022067c8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7438 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02205b08(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b93c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b93c,uVar1,local_20);
    DAT_028c7438 = pTVar2;
  }
  return DAT_028c7438;
}

