// alertConfirm: @ 01d24a84

/* Function Stack Size: 0x18 bytes */

void WCRefineRedEnvelopViewController::alertConfirm_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined1 local_31;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  bVar2 = false;
  uVar1 = pcVar3 != (cfstringStruct *)0x0;
  if ((bool)uVar1) {
    pcVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inputCompletionBlock_026b40c8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar4 != (cfstringStruct *)0x0;
    local_31 = uVar1;
    local_30 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (bVar2) {
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = &::cf___;
    if ((local_40 != (cfstringStruct *)0x0) &&
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_b8 = &::cf___;
      }
      _objc_storeStrong(local_58,local_b8);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inputCompletionBlock_026b40c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)pcVar3->field2_0x10)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputCompletionBlock__026b40b8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputKey__026c2540,0);
  _objc_storeStrong(&local_28,0);
  return;
}

