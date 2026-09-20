// FUN_00012974 @ 00012974

void FUN_00012974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *local_90;
  undefined *local_48 [3];
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_limitedReplyText_maxChars__0269cec8,local_20,
             *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  puVar5 = PTR_WCRefineHelper_026ce000;
  if (puVar1 == (undefined *)0x0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_90 = &cf_A;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showWeToastErrorWithText__0269ced8,local_90);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    uVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    FUN_00012cf0();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,&cf_VY_Y6R);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,&cf_A);
    }
  }
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

