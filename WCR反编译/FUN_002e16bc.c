// FUN_002e16bc @ 002e16bc

void FUN_002e16bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_e8;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  ulong *puVar3;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar3 = &local_40;
  local_40 = 0;
  local_38 = param_3;
  _objc_storeStrong(puVar3,param_4);
  uVar2 = (uint)puVar3;
  local_48 = param_1;
  FUN_002e4780();
  if (((uVar2 & 1) == 0) || (uVar4 = local_40, FUN_002e5e10(), (uVar4 & 1) != 0)) {
    uVar4 = local_30;
    (*DAT_028c98c0)(local_48,local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 1;
    local_28 = uVar4;
  }
  else {
    FUN_002e47e4();
    if ((uVar4 & 1) == 0) {
      uVar4 = local_30;
      (*DAT_028c98c0)(local_48,local_30,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 1;
      local_28 = uVar4;
    }
    else {
      FUN_002e4a24(local_48);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar4;
      FUN_002e4e70();
      bVar1 = local_60 == 0;
      if (bVar1) {
        local_e8 = local_30;
        (*DAT_028c98c0)(local_48,local_30,local_38,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_e8;
      }
      else {
        local_e8 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_e8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_rangeOfString_options__0269d118,&cf_Menlo,1);
      uVar4 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
      local_58 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

