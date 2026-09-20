// FUN_008de1f8 @ 008de1f8

void FUN_008de1f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined1 local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_38;
  FUN_008e3e18(local_38,&cf_lp_media_to_file);
  uVar5 = local_38;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf___;
    local_59 = 0;
    local_68 = local_50;
    local_70 = &cf___;
    uVar1 = local_30;
    FUN_008f092c(local_30,&local_68,&local_70,&local_59);
    _objc_storeStrong(&local_50,local_68);
    _objc_storeStrong(&local_58,local_70);
    uVar5 = local_38;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar5;
    }
    else {
      pcVar2 = &cf_lp_media_to_file;
      _WCRPluginIconResolvedTitle(&cf_lp_media_to_file,&cf_leN);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_lp_media_to_file;
      _WCRPluginIconResolvedIcon(&cf_lp_media_to_file,&cf_icon_music_filled);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      FUN_008e53bc(pcVar2,pcVar3,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8);
      _objc_retainAutoreleasedReturnValue();
      FUN_008e50d4();
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    local_48 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar5;
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

