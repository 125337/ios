// FUN_002a5adc @ 002a5adc

void FUN_002a5adc(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_98;
  uint local_60;
  ulong local_58;
  byte local_49;
  undefined *local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_002bad18();
  if ((param_1 & 1) == 0) {
    local_49 = 0;
    local_60 = 0;
    if (((local_21 & 1) == 0) && (local_60 = 0, local_30 != 0)) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = (uint)puVar1;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_60 & 1) != 0) {
      FUN_002b7184(local_30,&cf_MainTabBar_OnMainTabBarHiddenChange_beforeOrig);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
      if (((uVar2 & 1) == 0) && (uVar2 = local_30, FUN_002c73bc(), (uVar2 & 1) == 0)) {
        FUN_002bb194(local_30,local_18,0);
      }
      else {
        uVar2 = local_30;
        FUN_002c73bc();
        if (((uVar2 & 1) != 0) || (uVar2 = local_30, FUN_002b83f8(), (uVar2 & 1) != 0)) {
          FUN_002d63bc(local_30,&cf_MainTabBar_OnMainTabBarHiddenChange_beforeOrig_offscreen);
        }
      }
    }
    (*DAT_028c9698)(local_18,local_20,local_21 & 1);
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar2;
    if (uVar2 == 0) {
      local_98 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_98;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_21 & 1) == 0) {
      FUN_002b7184(local_58,&cf_MainTabBar_OnMainTabBarHiddenChange_afterOrig);
      FUN_002d77c4(local_18,0,&cf_MainTabBar_OnMainTabBarHiddenChange);
    }
    _objc_storeStrong(&local_58,0);
    local_40 = 0;
  }
  else {
    (*DAT_028c9698)(local_18,local_20,local_21 & 1);
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

