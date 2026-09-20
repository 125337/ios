// FUN_02206948 @ 02206948

TargetProtocolConformanceDescriptor * FUN_02206948(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7450 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02202cf4(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b854;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b854,uVar1,local_20);
    DAT_028c7450 = pTVar2;
  }
  return DAT_028c7450;
}

