// FUN_00057184 @ 00057184

void FUN_00057184(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  if (((local_20 != 0) && (FUN_0004bf04(), (uVar1 & 1) != 0)) &&
     ((uVar3 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_belongs2MediaGroup_0269dae0),
      (uVar3 & 1) == 0 ||
      (uVar3 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_belongs2MediaGroup_0269dae0),
      (uVar3 & 1) == 0)))) {
    FUN_00051888(local_18,local_20,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

