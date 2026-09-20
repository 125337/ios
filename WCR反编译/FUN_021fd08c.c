// FUN_021fd08c @ 021fd08c

TargetProtocolConformanceDescriptor * FUN_021fd08c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7300 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fce18(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b5c8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b5c8,uVar1,local_20);
    DAT_028c7300 = pTVar2;
  }
  return DAT_028c7300;
}

