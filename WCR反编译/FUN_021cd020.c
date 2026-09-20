// FUN_021cd020 @ 021cd020

TargetProtocolConformanceDescriptor * FUN_021cd020(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6fa8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c720c(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233abe0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233abe0,uVar1,local_20);
    DAT_028c6fa8 = pTVar2;
  }
  return DAT_028c6fa8;
}

