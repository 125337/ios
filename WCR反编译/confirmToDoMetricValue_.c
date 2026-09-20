// confirmToDoMetricValue: @ 01ec069c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineToDoListSettingsViewController::confirmToDoMetricValue_
          (WCRefineToDoListSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 in_d0;
  ID local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e4858);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_integerValue_026ca750);
  IVar2 = local_18;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_currentAlertTextFromSender__026c78c8,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_x,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  local_40 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  IVar2 = local_18;
  IVar1 = local_38;
  if (IVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_snappedToDoMetricValueForTag_raw_026c78a0,IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_18,PTR_s_applyToDoMetricValue_forTag__026c78a8,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

