// FUN_002a8ffc @ 002a8ffc

void FUN_002a8ffc(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint local_68;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  FUN_002bad18();
  if ((param_1 & 1) == 0) {
    local_68 = 0;
    if (local_38 != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = (uint)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_68 & 1) != 0) {
      FUN_002b7184(local_38,&cf_NewMainFrame_viewWillPop_beforeOrig);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
      if ((uVar3 & 1) == 0) {
        FUN_002bb194(local_38,local_30,0);
        FUN_002d63bc(local_38,&cf_NewMainFrame_viewWillPop_beforeOrig);
      }
    }
    (*DAT_028c9750)(local_18,local_20,local_21 & 1);
  }
  else {
    (*DAT_028c9750)(local_18,local_20,local_21 & 1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

