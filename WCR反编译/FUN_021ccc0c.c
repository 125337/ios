// FUN_021ccc0c @ 021ccc0c

TargetProtocolConformanceDescriptor * FUN_021ccc0c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6f68 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c880c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b2c0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b2c0,uVar1,local_20);
    DAT_028c6f68 = pTVar2;
  }
  return DAT_028c6f68;
}

