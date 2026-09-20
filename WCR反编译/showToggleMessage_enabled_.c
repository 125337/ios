// showToggleMessage:enabled: @ 016f4fe0

/* Function Stack Size: 0x1c bytes */

void SpecificPageLockViewController::showToggleMessage_enabled_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined1 local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (undefined1)param_4;
  bVar1 = (param_4 & 1) == 0;
  local_60 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_60;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
             &cf_WCRefine,local_38,&cf_nx_,&PTR___NSConcreteGlobalBlock_02588490);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

