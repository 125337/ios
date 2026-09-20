// handleFloatingMetricValueInput: @ 019c01c4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFloatingTabBarSettingsViewController::handleFloatingMetricValueInput_
          (WCRefineFloatingTabBarSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 in_d0;
  cfstringStruct *local_78;
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
  pcVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e4440);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_integerValue_026ca750);
  local_38 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf___;
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_floatingMetricAlert_026babb8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if ((pcVar2 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_performSelector__026ca7b8,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    if ((pcVar2 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_78 = &::cf___;
      }
      _objc_storeStrong(&local_40,local_78);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_50,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_floatingMetricAlert__026babb0,0);
  pcVar2 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    pcVar2 = local_18;
    if ((undefined1 *)((long)&local_38[-1].field3_0x18 + 7U) < (undefined1 *)0xa) {
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,local_18,PTR_s_snappedFloatingMetricValueForTag_026babc0,local_38,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_applyFloatingMetricValue_forTag__026babc8,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingNotifyInjected_026babd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gwnFg);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

