// alertConfirmSkipSenderWxids @ 0174a95c

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAutoRedeemViewController::alertConfirmSkipSenderWxids(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b0;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  undefined1 local_29;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  if ((bool)uVar1) {
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inputCompletionBlock_026b40c8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar3 == (cfstringStruct *)0x0;
    local_29 = uVar1;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar1 = local_29;
  }
  local_29 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = &::cf___;
    if ((local_38 != (cfstringStruct *)0x0) &&
       (pcVar3 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      _objc_storeStrong(local_50,local_b0);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inputCompletionBlock_026b40c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)pcVar3->field2_0x10)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputCompletionBlock__026b40b8,0);
  }
  return;
}

