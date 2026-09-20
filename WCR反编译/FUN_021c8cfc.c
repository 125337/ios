// FUN_021c8cfc @ 021c8cfc

TargetProtocolConformanceDescriptor * FUN_021c8cfc(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_20;
  
  if (DAT_028c6de8 == (TargetProtocolConformanceDescriptor *)0x0) {
    uVar1 = 0xff;
    FUN_021c8c68(0xff);
    pTVar2 = &TargetProtocolConformanceDescriptor_0233af70;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233af70,uVar1,local_20);
    DAT_028c6de8 = pTVar2;
  }
  return DAT_028c6de8;
}

