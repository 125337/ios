// FUN_02219aac @ 02219aac

TargetProtocolConformanceDescriptor * FUN_02219aac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 local_20;
  
  if (DAT_028e64e8 == (TargetProtocolConformanceDescriptor *)0x0) {
    pTVar1 = &TargetProtocolConformanceDescriptor_0233c4dc;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233c4dc,&DAT_0258ee50,local_20);
    DAT_028e64e8 = pTVar1;
  }
  return DAT_028e64e8;
}

