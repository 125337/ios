// confirmMetricValue: @ 01edb924

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRToDoAdjustmentViewController::confirmMetricValue_
          (WCRToDoAdjustmentViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 in_d0;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
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
  local_40 = 0;
  IVar2 = local_28;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if ((IVar2 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_40;
      local_40 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_40;
    local_40 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_40;
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40;
  local_40 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_x,&::cf___);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_40;
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,0);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  IVar1 = local_38;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    FUN_01ebe070(IVar1);
    FUN_01ebeb78(in_d0,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    FUN_01ed8490();
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

