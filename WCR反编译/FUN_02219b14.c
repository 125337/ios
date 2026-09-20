// FUN_02219b14 @ 02219b14

TargetProtocolConformanceDescriptor * FUN_02219b14(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028e64f8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02219b80(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233c4a4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233c4a4,uVar1,local_20);
    DAT_028e64f8 = pTVar2;
  }
  return DAT_028e64f8;
}

