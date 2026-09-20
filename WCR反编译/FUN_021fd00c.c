// FUN_021fd00c @ 021fd00c

TargetProtocolConformanceDescriptor * FUN_021fd00c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c72f8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fce18(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b52c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b52c,uVar1,local_20);
    DAT_028c72f8 = pTVar2;
  }
  return DAT_028c72f8;
}

