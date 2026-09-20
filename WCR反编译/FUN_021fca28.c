// FUN_021fca28 @ 021fca28

TargetProtocolConformanceDescriptor * FUN_021fca28(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c72b0 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fbe38(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b34c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b34c,uVar1,local_20);
    DAT_028c72b0 = pTVar2;
  }
  return DAT_028c72b0;
}

