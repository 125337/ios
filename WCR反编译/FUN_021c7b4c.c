// FUN_021c7b4c @ 021c7b4c

uint FUN_021c7b4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar4 = *param_1;
  uVar1 = 0;
  local_28 = uVar4;
  FUN_021c7d60();
  (*(code *)PTR__objc_retain_02578638)(uVar4);
  uVar2 = uVar4;
  FUN_02221d80(uVar4,local_70);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar3 = &local_30;
  local_38 = 0;
  local_30 = uVar2;
  FUN_021c7df4();
  __sSQ2eeoiySbx_xtFZTj(puVar3,&local_38,uVar1,uVar2);
  return (uint)puVar3 & 1;
}

