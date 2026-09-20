// FUN_008dde20 @ 008dde20

void FUN_008dde20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
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
  FUN_008e3e18(local_38,&cf_lp_media_to_voice);
  uVar3 = local_30;
  uVar4 = local_38;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    local_48 = 1;
    goto LAB_008de1a0;
  }
  pcVar2 = &cf_VoiceMessageCellView;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  uVar4 = local_38;
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    local_48 = 1;
    goto LAB_008de1a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = &cf___;
  uVar4 = local_30;
  FUN_008e429c();
  if ((uVar4 & 1) == 0) {
    local_60 = local_50;
    local_68 = local_58;
    uVar3 = local_30;
    FUN_008e44a4(local_30,&local_60,&local_68);
    _objc_storeStrong(&local_50,local_60);
    _objc_storeStrong(&local_58,local_68);
    uVar4 = local_38;
    if ((uVar3 & 1) != 0) goto LAB_008de004;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
  }
  else {
LAB_008de004:
    uVar4 = local_38;
    pcVar2 = &cf_lp_media_to_voice;
    _WCRPluginIconResolvedTitle(&cf_lp_media_to_voice,&cf_l);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_lp_media_to_voice;
    _WCRPluginIconResolvedIcon(&cf_lp_media_to_voice,&cf_icons_outlined_voice_input);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar2;
    FUN_008e53bc(pcVar2,pcVar5,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0);
    _objc_retainAutoreleasedReturnValue();
    FUN_008e50d4();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_48 = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_008de1a0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

