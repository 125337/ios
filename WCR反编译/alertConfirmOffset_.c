// alertConfirmOffset: @ 018c3c9c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineChatTimeViewController::alertConfirmOffset_
          (WCRefineChatTimeViewController *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  double in_d0;
  cfstringStruct *local_b0;
  double local_68;
  cfstringStruct *local_60 [4];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &::cf___;
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_40 != (cfstringStruct *)0x0) &&
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      _objc_storeStrong(&local_38,local_b0);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_40,0);
    pcVar1 = local_18;
    _objc_getAssociatedObject(local_18,PTR_s_alertConfirmOffset__026b7e00);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    local_68 = in_d0;
    if (in_d0 < -200.0) {
      local_68 = -200.0;
    }
    if (200.0 < local_68) {
      local_68 = 200.0;
    }
    pcVar1 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_isEqualToString__0269ccc8,&cf_chatTimeVerticalOffset);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_isEqualToString__0269ccc8,&cf_chatTimeHorizontalOffset);
      if (((ulong)pcVar1 & 1) != 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_68);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupData_026b7c20);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
    _objc_storeStrong(local_60,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

