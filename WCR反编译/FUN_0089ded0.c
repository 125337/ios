// FUN_0089ded0 @ 0089ded0

byte FUN_0089ded0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *local_c8;
  uint local_b0;
  uint local_ac;
  uint local_90;
  bool local_69;
  undefined *local_68;
  undefined *local_60;
  byte local_54;
  byte local_53;
  undefined1 local_52;
  byte local_51;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  byte local_3d;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  local_28 = param_2;
  FUN_0089d19c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  FUN_0089d2a0(puVar1,&cf_8_0_61);
  local_3d = (byte)puVar1;
  local_49 = 0;
  local_c8 = (undefined *)0x0;
  local_90 = 0;
  if (((ulong)puVar1 & 1) != 0) {
    local_c8 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = (uint)local_c8;
  }
  if ((local_49 & 1) != 0) {
    local_c8 = local_48;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_90 & 1) == 0) {
    FUN_0089b9b4();
    local_51 = (byte)local_c8;
    FUN_0089bb90();
    local_52 = SUB81(local_c8,0);
    local_ac = 0;
    if ((local_3d & 1) != 0) {
      local_b0 = 1;
      if ((local_51 & 1) == 0) {
        local_b0 = (uint)local_c8 & 0xff;
      }
      local_ac = local_b0;
    }
    local_53 = (byte)local_ac & 1;
    if ((local_ac & 1) == 0) {
      FUN_0089e9a0(&cf_pre_bundle);
      uVar2 = local_20;
      (*DAT_028cdd40)(local_20,local_28);
      local_54 = (byte)uVar2;
      FUN_0089e9a0(&cf_post_bundle);
      FUN_0089ecc0(&cf_post_bundle);
      FUN_0089f704();
      local_11 = local_54 & 1;
      local_50 = 1;
    }
    else {
      FUN_0088f70c();
      local_69 = (local_53 & 1) == 0;
      if (local_69) {
        local_c8 = (undefined *)0x0;
      }
      else {
        FUN_0089f82c();
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_c8;
      }
      local_69 = !local_69;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_c8;
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      FUN_0089e9a0(&cf_pre_bundle);
      uVar2 = local_20;
      (*DAT_028cdd40)(local_20,local_28);
      FUN_0089e9a0(&cf_post_bundle);
      if ((local_53 & 1) != 0) {
        FUN_0089fa0c(local_60);
        FUN_0088f70c();
      }
      FUN_0089e9a0(&cf_postRestore_bundle);
      FUN_0089ecc0(&cf_postRestore_bundle);
      FUN_0089f704();
      local_11 = (byte)uVar2 & 1;
      local_50 = 1;
      _objc_storeStrong(&local_60,0);
    }
  }
  else {
    FUN_0088f70c();
    local_11 = 0;
    local_50 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

