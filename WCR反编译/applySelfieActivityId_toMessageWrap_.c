// applySelfieActivityId:toMessageWrap: @ 00f3a6a0

/* Function Stack Size: 0x1c bytes */

void WCRefineEmoticonToolsHelper::applySelfieActivityId_toMessageWrap_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *local_90;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  SEL local_20;
  undefined *local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_4);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    if ((local_21 & 1) != 0) {
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_50 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_90;
      }
      else {
        local_90 = local_48;
      }
      pcVar3 = &cf_Selfie_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_Selfie_,PTR_s_stringByAppendingString__0269d398,local_90);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      _objc_storeStrong(&local_48,0);
    }
    pcVar3 = &cf_setM_nsActivityId_;
    _NSSelectorFromString();
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setValue_forKey__0269d300,local_40,&cf_m_nsActivityId);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar3,local_40);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

