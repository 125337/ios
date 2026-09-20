// _WCRefineAppendRestrictedForwardMenuItemIfNeeded @ 014b0b90

void _WCRefineAppendRestrictedForwardMenuItemIfNeeded(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar7 = local_28;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar7;
  }
  else {
    uVar3 = local_20;
    FUN_014b0d8c();
    uVar7 = local_28;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar7;
    }
    else {
      uVar3 = local_28;
      FUN_014b0df8();
      uVar7 = local_28;
      if ((uVar3 & 1) == 0) {
        pcVar4 = &cf_lp_forward;
        _WCRPluginIconResolvedTitle(&cf_lp_forward,&cf_lS);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = &cf_lp_forward;
        _WCRPluginIconResolvedIcon(&cf_lp_forward,&cf_share_filled);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        _WCRefineRestrictedForwardMenuActionSelector();
        FUN_014b1168(uVar7,pcVar4,pcVar5,pcVar6);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar7;
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

