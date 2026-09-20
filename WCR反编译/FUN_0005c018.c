// FUN_0005c018 @ 0005c018

void FUN_0005c018(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *local_c0;
  cfstringStruct *local_68 [2];
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  ulong local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = local_28;
  FUN_00065878();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_50[0], FUN_0006171c(), ((ulong)pcVar1 & 1) == 0)) {
    local_58 = (cfstringStruct *)0x0;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_valueForKey__0269d128,&cf_m_chatRoomContact);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_68[0] = (cfstringStruct *)0x0;
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_68[0];
    local_68[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_68[0];
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_c0 = &cf___;
    }
    else {
      local_c0 = local_68[0];
    }
    _objc_storeStrong(local_50,local_c0);
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_58,0);
  }
  pcVar1 = local_50[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOn__0269dc80,0);
  }
  else {
    FUN_0005ed44();
    pcVar2 = local_50[0];
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W8__uR);
    }
    else {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
      FUN_00065bf0(1,pcVar2,uVar4 & 0xffffffff);
      puVar3 = PTR_WCRefineHelper_026ce000;
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
      pcVar1 = &cf__;
      if ((uVar4 & 1) == 0) {
        pcVar1 = &cf__sQRgZSO;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,pcVar1);
      FUN_00066150(local_28);
    }
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

