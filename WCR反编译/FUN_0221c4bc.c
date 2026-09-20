// FUN_0221c4bc @ 0221c4bc

TargetProtocolConformanceDescriptor * FUN_0221c4bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_20;
  
  if (DAT_028e6820 == (TargetProtocolConformanceDescriptor *)0x0) {
    pTVar1 = &TargetProtocolConformanceDescriptor_0233c410;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233c410,&DAT_0258ee50,local_20);
    DAT_028e6820 = pTVar1;
  }
  return DAT_028e6820;
}

