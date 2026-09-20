// FUN_022069b4 @ 022069b4

TargetProtocolConformanceDescriptor * FUN_022069b4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c7458 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_02202cf4(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b8f0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b8f0,uVar1,local_20);
    DAT_028c7458 = pTVar2;
  }
  return DAT_028c7458;
}

