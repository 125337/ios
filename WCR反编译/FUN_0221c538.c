// FUN_0221c538 @ 0221c538

TargetProtocolConformanceDescriptor * FUN_0221c538(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_20;
  
  if (DAT_028e6828 == (TargetProtocolConformanceDescriptor *)0x0) {
    pTVar1 = &TargetProtocolConformanceDescriptor_0233c3c0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233c3c0,&DAT_0258ee50,local_20);
    DAT_028e6828 = pTVar1;
  }
  return DAT_028e6828;
}

