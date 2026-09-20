// FUN_0221d5b4 @ 0221d5b4

TargetProtocolConformanceDescriptor * FUN_0221d5b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_20;
  
  if (DAT_028e68b0 == (TargetProtocolConformanceDescriptor *)0x0) {
    pTVar1 = &TargetProtocolConformanceDescriptor_0233c460;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233c460,&DAT_0258ed40,local_20);
    DAT_028e68b0 = pTVar1;
  }
  return DAT_028e68b0;
}

