// confirmExtraButtonOffsetInput: @ 019b6078

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFloatingTabBarButtonActionViewController::confirmExtraButtonOffsetInput_
          (WCRefineFloatingTabBarButtonActionViewController *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined8 in_d0;
  cfstringStruct *local_88;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_integerValue_026ca750);
  local_38 = pcVar1;
  _objc_setAssociatedObject(local_18,&DAT_028e4428,0,1);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf___;
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_metricAlert_026ba930);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_metricAlert__026ba928,0);
  if ((local_48 != (cfstringStruct *)0x0) &&
     (pcVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_performSelector__026ca7b8,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    if ((pcVar1 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_88 = &::cf___;
      }
      _objc_storeStrong(&local_40,local_88);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_50,0);
  }
  pcVar1 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_40;
  local_40 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  pcVar1 = local_18;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_snappedExtraButtonOffsetValue_fo_026ba8f8,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_18,PTR_s_applyExtraButtonOffsetValue_forT_026ba908,local_38);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

