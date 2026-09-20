// FUN_008db144 @ 008db144

void FUN_008db144(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_d0;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  byte local_49;
  cfstringStruct *local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_40 = 1;
  }
  else {
    local_48 = (cfstringStruct *)0x0;
    local_49 = 0;
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_68 = local_48;
      puVar2 = PTR_WCRefineVoicePackStore_026cea20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackStore_026cea20,PTR_s_importVoiceData_preferredName_to_026a9d70
                 ,*(undefined8 *)(param_1 + 0x28),local_20,local_28,&local_68);
      _objc_storeStrong(&local_48,local_68);
      local_49 = (byte)puVar2;
    }
    else {
      local_60 = local_48;
      puVar2 = PTR_WCRefineVoicePackStore_026cea20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackStore_026cea20,PTR_s_importFileAtPath_toDirectory_pre_026a9d68
                 ,*(undefined8 *)(param_1 + 0x20),local_28,local_20,&local_60);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_48,local_60);
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      local_49 = puVar2 != (undefined *)0x0;
      _objc_storeStrong(&local_58,0);
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    if ((local_49 & 1) == 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_d0 = &cf__eQ1Y_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_d0);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

