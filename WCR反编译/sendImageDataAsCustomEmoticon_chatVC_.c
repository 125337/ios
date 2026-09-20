// sendImageDataAsCustomEmoticon:chatVC: @ 00f3cd74

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonToolsHelper::sendImageDataAsCustomEmoticon_chatVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_60;
  ID local_58 [2];
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) || (local_38 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,local_30
              );
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_78 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_58[1] = 0;
    local_60 = 0;
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_emoticonMessageForData_asSelfie__026a3dc0,local_48,0,&local_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(local_58 + 1,local_60);
    local_58[0] = IVar2;
    if (IVar2 == 0) {
      _NSLog(&cf__wcr__emoticon_convertsendfailed__);
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_applySelfieActivityId_toMessageW_026ac188,0,IVar2);
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isSelfieEmoticonMessageWrap__026ac0e0,local_58[0]);
      if ((IVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_deliverEmoticonMessage_chatVC_as_026ac190,local_58[0],local_38,0,
                   &cf_Sh_);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,&cf__S);
        local_11 = 1;
      }
      else {
        _NSLog(&cf__wcr__emoticon_convertsendproducedselfiewrap);
        local_11 = 0;
      }
    }
    local_3c = 1;
    _objc_storeStrong(local_58);
    _objc_storeStrong(local_58 + 1,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

