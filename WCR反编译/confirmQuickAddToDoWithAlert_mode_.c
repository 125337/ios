// confirmQuickAddToDoWithAlert:mode: @ 01e86740

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::confirmQuickAddToDoWithAlert_mode_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_40;
  undefined4 local_34;
  long_long local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_quickAddTextFromAlert__026c7218,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_40;
    local_40 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_quickAddAlert_026c7220);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == IVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setQuickAddAlert__026c7210,0);
    }
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ_RQ_);
      local_34 = 1;
    }
    else {
      if (local_30 == 1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_addOfficialScheduleWithText__026c7228,local_40);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_addLocalToDoWithText__026c7230,local_40);
      }
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

