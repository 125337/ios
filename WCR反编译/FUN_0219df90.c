// FUN_0219df90 @ 0219df90

TargetProtocolConformanceDescriptor * FUN_0219df90(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6af8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_0219defc(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b0a0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b0a0,uVar1,local_20);
    DAT_028c6af8 = pTVar2;
  }
  return DAT_028c6af8;
}

