// FUN_00508b68 @ 00508b68

void FUN_00508b68(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_70;
  ulong local_58;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_00508eb4();
  if ((uVar2 & 1) == 0) {
    (*DAT_028cafe0)(local_18,local_20,local_28);
    local_38 = 1;
  }
  else {
    bVar1 = local_28 == 0;
    if (bVar1) {
      local_48 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_dataItem_026a4670);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_48;
      FUN_00508f94();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_70;
    }
    else {
      local_70 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_70;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    uVar4 = local_18;
    FUN_005090bc(local_18,local_40);
    if ((uVar4 & 1) == 0) {
      (*DAT_028cafe0)(local_18,local_20,local_28);
    }
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

