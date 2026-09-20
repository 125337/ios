// FUN_021c9d0c @ 021c9d0c

TargetProtocolConformanceDescriptor * FUN_021c9d0c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6e80 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c9c78(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233af0c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233af0c,uVar1,local_20);
    DAT_028c6e80 = pTVar2;
  }
  return DAT_028c6e80;
}

