// FUN_008b4a70 @ 008b4a70

void FUN_008b4a70(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *local_48;
  ulong local_40;
  undefined4 local_38;
  undefined *local_28;
  ulong local_20;
  undefined *local_18;
  undefined **ppuVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  ppuVar2 = &local_28;
  local_28 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_2);
  uVar1 = (uint)ppuVar2;
  FUN_008b4e10();
  puVar7 = local_28;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar7;
    local_38 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_008b4eac();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_008b50d8();
    puVar7 = local_28;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar7;
      local_38 = 1;
    }
    else {
      puVar4 = local_28;
      FUN_008b526c();
      puVar7 = local_28;
      if (((ulong)puVar4 & 1) == 0) {
        pcVar5 = &cf_lp_forward;
        _WCRPluginIconResolvedTitle(&cf_lp_forward,&cf_lS);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_lp_forward;
        _WCRPluginIconResolvedIcon(&cf_lp_forward,&cf_share_filled);
        _objc_retainAutoreleasedReturnValue();
        FUN_008b5664(puVar7,pcVar5,pcVar6,PTR_s_WCRefine_onLongPressVoiceForward_026a99d0);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar7 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_applyLongPressOrderToMenuItems__026a9ac0,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_38 = 1;
        local_18 = puVar7;
        _objc_storeStrong(&local_48,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar7;
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

