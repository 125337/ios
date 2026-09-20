// FUN_02206dcc @ 02206dcc

TargetProtocolConformanceDescriptor * FUN_02206dcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_20;
  
  if (DAT_028e62e0 == (TargetProtocolConformanceDescriptor *)0x0) {
    pTVar1 = &TargetProtocolConformanceDescriptor_0233bc10;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233bc10,&DAT_0258e9f0,local_20);
    DAT_028e62e0 = pTVar1;
  }
  return DAT_028e62e0;
}

