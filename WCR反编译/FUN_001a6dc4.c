// FUN_001a6dc4 @ 001a6dc4

void FUN_001a6dc4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_001afc2c();
  if ((uVar1 & 1) != 0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enableSearchBarButton_0269fec8);
    if ((uVar3 & 1) != 0) {
      FUN_001aacec(local_18);
      goto LAB_001a6e88;
    }
  }
  (*DAT_028c8a20)(local_18,local_20,local_28);
LAB_001a6e88:
  _objc_storeStrong(&local_28,0);
  return;
}

