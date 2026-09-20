// FUN_002a92b4 @ 002a92b4

void FUN_002a92b4(ulong param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_f8;
  ulong local_d8;
  uint local_ac;
  ulong local_88;
  ulong local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_68;
  byte local_59;
  undefined4 local_58;
  ulong local_48;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_31 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  local_48 = param_1;
  FUN_002bad18();
  if ((param_1 & 1) == 0) {
    local_59 = 0;
    pcVar1 = &cf_isTaskBarNeedHideTabBar;
    _NSSelectorFromString();
    uVar2 = local_28;
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_68);
      local_59 = (byte)uVar2;
    }
    local_71 = 0;
    local_ac = 0;
    if ((((local_31 & 1) == 0) && (local_ac = 0, (local_59 & 1) != 0)) &&
       (local_ac = 0, local_48 != 0)) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
      local_ac = 0;
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_ac = (uint)puVar3;
      }
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_ac & 1) != 0) {
      FUN_002b7184(local_48,&cf_NewMainFrame_onMainTabBarHiddenChange_forceHide_beforeOrig);
      FUN_002bb194(local_48,local_40,0);
      FUN_002d63bc(local_48,&cf_NewMainFrame_onMainTabBarHiddenChange_forceHide_beforeOrig);
    }
    (*DAT_028c9758)(local_28,local_30,local_31 & 1);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    if (uVar2 == 0) {
      local_d8 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_d8;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar2;
    if (uVar2 == 0) {
      local_f8 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_f8;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (((local_31 & 1) == 0) && (local_80 != 0)) {
      FUN_002b7184(local_88,&cf_NewMainFrame_onMainTabBarHiddenChange_afterOrig);
      uVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isHidden_026ca768);
      if ((uVar2 & 1) == 0) {
        FUN_002d77c4(local_80,0,&cf_NewMainFrame_onMainTabBarHiddenChange);
      }
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    local_58 = 0;
  }
  else {
    (*DAT_028c9758)(local_28,local_30,local_31 & 1);
    local_58 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

