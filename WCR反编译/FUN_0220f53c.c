// FUN_0220f53c @ 0220f53c

TargetProtocolConformanceDescriptor * FUN_0220f53c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_20;
  
  if (DAT_028e62e8 == (TargetProtocolConformanceDescriptor *)0x0) {
    pTVar1 = &TargetProtocolConformanceDescriptor_0233bbe8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233bbe8,&DAT_0258e9f0,local_20);
    DAT_028e62e8 = pTVar1;
  }
  return DAT_028e62e8;
}

