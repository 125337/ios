// FUN_02206734 @ 02206734

TargetProtocolConformanceDescriptor * FUN_02206734(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7430 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02202cf4(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b8b4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b8b4,uVar1,local_20);
    DAT_028c7430 = pTVar2;
  }
  return DAT_028c7430;
}

