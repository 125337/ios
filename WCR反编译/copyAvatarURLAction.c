// copyAvatarURLAction @ 01ced4f8

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardFunctionPageViewController::copyAvatarURLAction(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contact_026a0d10);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_01ced640();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fe4YPc);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4YPc_Y6R);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

