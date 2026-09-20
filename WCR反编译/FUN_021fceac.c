// FUN_021fceac @ 021fceac

TargetProtocolConformanceDescriptor * FUN_021fceac(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c72d8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021fce18(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233b640;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b640,uVar1,local_20);
    DAT_028c72d8 = pTVar2;
  }
  return DAT_028c72d8;
}

