// FUN_021cd510 @ 021cd510

TargetProtocolConformanceDescriptor * FUN_021cd510(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7008 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_0219fbbc(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233ab50;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233ab50,uVar1,local_20);
    DAT_028c7008 = pTVar2;
  }
  return DAT_028c7008;
}

