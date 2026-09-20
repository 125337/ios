// FUN_02206020 @ 02206020

uint FUN_02206020(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar2 = *param_2;
  pTVar1 = &TargetProtocolConformanceDescriptor_0233b9ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_0233b9ac);
  __s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ(uVar3,uVar2,param_3,pTVar1);
  return (uint)uVar3 & 1;
}

