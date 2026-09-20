// FUN_02205b9c @ 02205b9c

TargetProtocolConformanceDescriptor * FUN_02205b9c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c73e8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02205b08(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b9ac;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b9ac,uVar1,local_20);
    DAT_028c73e8 = pTVar2;
  }
  return DAT_028c73e8;
}

