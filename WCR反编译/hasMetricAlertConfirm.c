// hasMetricAlertConfirm @ 01ae7968

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineHomeAvatarStripSettingsViewController::hasMetricAlertConfirm
          (WCRefineHomeAvatarStripSettingsViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 in_d0;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  ID local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e4558);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_28 == 0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar2 == (cfstringStruct *)0x0 || bVar1) {
    local_2c = 1;
  }
  else {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
    pcVar2 = local_38;
    local_40 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_80 = &::cf___;
    }
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(local_80);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_18;
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_snappedHASMetricValueForTag_rawV_026be418,IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_18,PTR_s_applyHASMetricValue_forTag__026be430,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
    _objc_setAssociatedObject(local_18,&DAT_028e4558,0,1);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

