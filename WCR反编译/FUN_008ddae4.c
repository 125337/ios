// FUN_008ddae4 @ 008ddae4

void FUN_008ddae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = local_18;
    FUN_008e5898();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar3;
    FUN_008f82f8();
    if ((uVar3 & 1) != 0) {
      uVar4 = local_20;
      FUN_008e3e18(local_20,&cf_lp_media_to_file);
      uVar3 = local_20;
      if ((uVar4 & 1) == 0) {
        pcVar5 = &cf_lp_media_to_file;
        _WCRPluginIconResolvedTitle(&cf_lp_media_to_file,&cf_leN);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_lp_media_to_file;
        _WCRPluginIconResolvedIcon(&cf_lp_media_to_file,&cf_icons_filled_folder);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar5;
        FUN_008e53bc(pcVar5,pcVar6,PTR_s_WCRefine_onLongPressVoiceToFile__026a9da8);
        _objc_retainAutoreleasedReturnValue();
        FUN_008e50d4();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_20;
        local_20 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
    }
    _objc_storeStrong(local_38,0);
  }
  uVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

