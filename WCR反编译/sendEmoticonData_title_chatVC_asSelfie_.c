// sendEmoticonData:title:chatVC:asSelfie: @ 00f3ad3c

/* Function Stack Size: 0x2c bytes */

void WCRefineEmoticonToolsHelper::sendEmoticonData_title_chatVC_asSelfie_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b0;
  undefined *local_88;
  undefined8 local_60;
  ID local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  long local_38;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_39 = (byte)param_6;
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) || (local_38 == 0)) {
    local_40 = 1;
  }
  else {
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,local_28
              );
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_88 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_50 = (cfstringStruct *)0x0;
    local_60 = 0;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_emoticonMessageForData_asSelfie__026a3dc0,local_48,local_39 & 1,
               &local_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_50,local_60);
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_58 = IVar2;
    if (IVar2 == 0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_b0 = &cf_ubh_1Y_;
      }
      else {
        local_b0 = local_50;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_b0);
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_applySelfieActivityId_toMessageW_026ac188,local_39 & 1,IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_isSelfieEmoticonMessageWrap__026ac0e0,local_58);
      if ((uint)IVar2 == (local_39 & 1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_deliverEmoticonMessage_chatVC_as_026ac190,local_58,local_38,
                   local_39 & 1,local_30);
        local_40 = 0;
      }
      else {
        pcVar3 = &cf_ubbh_1Y_;
        if ((local_39 & 1) == 0) {
          pcVar3 = &cf_ubnfh_1Y_;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar3);
        local_40 = 1;
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

