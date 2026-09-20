// FUN_008c4d5c @ 008c4d5c

void FUN_008c4d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  int local_10c;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_40;
  undefined4 local_3c;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    uVar2 = local_28;
    FUN_008c2694();
    uVar4 = local_28;
    local_40 = (int)uVar2;
    pcVar3 = &cf_m_uiVoiceFormat;
    _NSSelectorFromString();
    FUN_008b7f4c(uVar4,pcVar3);
    local_50 = (int)uVar4;
    if ((local_50 == 0) &&
       (uVar4 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getVoiceFormat_026a9b28),
       (uVar4 & 1) != 0)) {
      uVar4 = local_28;
      FUN_008b7f4c(local_28,PTR_s_getVoiceFormat_026a9b28);
      local_50 = (int)uVar4;
    }
    uVar4 = local_28;
    pcVar3 = &cf_m_uiVoiceEndFlag;
    _NSSelectorFromString();
    FUN_008b7f4c(uVar4,pcVar3);
    uVar2 = local_28;
    local_54 = (int)uVar4;
    pcVar3 = &cf_m_uiVoiceCancelFlag;
    _NSSelectorFromString();
    FUN_008b7f4c(uVar2,pcVar3);
    lVar1 = local_30;
    local_58 = (undefined4)uVar2;
    if (local_40 != 0) {
      pcVar3 = &cf_setM_uiVoiceTime_;
      _NSSelectorFromString();
      FUN_008be28c(lVar1,pcVar3,local_40);
    }
    lVar1 = local_30;
    if (local_50 != 0) {
      pcVar3 = &cf_setM_uiVoiceFormat_;
      _NSSelectorFromString();
      FUN_008be28c(lVar1,pcVar3,local_50);
    }
    lVar1 = local_30;
    pcVar3 = &cf_setM_uiVoiceEndFlag_;
    _NSSelectorFromString();
    if (local_54 == 0) {
      local_10c = 1;
    }
    else {
      local_10c = local_54;
    }
    FUN_008be28c(lVar1,pcVar3,local_10c);
    lVar1 = local_30;
    pcVar3 = &cf_setM_uiVoiceCancelFlag_;
    _NSSelectorFromString();
    FUN_008be28c(lVar1,pcVar3,local_58);
    lVar1 = local_30;
    pcVar3 = &cf_setM_uiVoiceForwardFlag_;
    _NSSelectorFromString();
    FUN_008be28c(lVar1,pcVar3,1);
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    lVar1 = local_30;
    if (lVar5 != 0) {
      pcVar3 = &cf_setM_dtVoice_;
      _NSSelectorFromString();
      FUN_008be118(lVar1,pcVar3,local_38);
    }
    uVar4 = local_28;
    pcVar3 = &cf_voiceUrl;
    _NSSelectorFromString();
    FUN_008b5ddc(uVar4,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    pcVar3 = &cf_aesKey;
    local_60 = uVar4;
    _NSSelectorFromString();
    FUN_008b5ddc(uVar2,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_68 = uVar2;
    if (local_60 != 0) {
      pcVar3 = &cf_setVoiceUrl_;
      _NSSelectorFromString();
      FUN_008be118(lVar1,pcVar3,local_60);
    }
    lVar1 = local_30;
    if (local_68 != 0) {
      pcVar3 = &cf_setAesKey_;
      _NSSelectorFromString();
      FUN_008be118(lVar1,pcVar3,local_68);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

