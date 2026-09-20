// mainFrameMenuItemData @ 00f28a44

/* Function Stack Size: 0x10 bytes */

ID WCRefineDoNotDisturbSupport::mainFrameMenuItemData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_64;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  byte local_41;
  char *local_40;
  byte local_31;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isFeatureEnabled_026abe00);
  local_31 = 0;
  local_64 = 1;
  if ((param_1 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_64 = (uint)puVar1 ^ 1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_64 & 1) == 0) {
    pcVar2 = "RightTopMenuItemBtnData";
    _objc_getClass();
    local_40 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEffectivelyActive_0269d708);
      local_41 = (byte)IVar3;
      uVar4 = (ulong)(local_41 & 1);
      FUN_00f28cb8();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = (ulong)(local_41 & 1);
      local_50 = uVar4;
      FUN_00f28ce8();
      _objc_retainAutoreleasedReturnValue();
      _WCRPluginIconResolvedTitle();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar5 = local_50;
      uVar4 = (ulong)(local_41 & 1);
      FUN_00f28d18();
      _objc_retainAutoreleasedReturnValue();
      _WCRPluginIconResolvedSVGName();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_genItemWithID_title_imageName_ac_0269f7d8,
                 &cf_WCRefine_mainFrame_menu_doNotDisturb,local_58,local_60,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    local_18 = (char *)0x0;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

