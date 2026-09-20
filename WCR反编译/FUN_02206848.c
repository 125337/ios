// FUN_02206848 @ 02206848

TargetProtocolConformanceDescriptor * FUN_02206848(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7440 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02205b08(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b968;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b968,uVar1,local_20);
    DAT_028c7440 = pTVar2;
  }
  return DAT_028c7440;
}

