// wcRefineToDoCreateWCUIAlertWithClass:title:message: @ 01e90914

/* Function Stack Size: 0x28 bytes */

ID WCRefineToDoCardView::wcRefineToDoCreateWCUIAlertWithClass_title_message_
             (ID param_1,SEL param_2,CLASS param_3,ID param_4,ID param_5)

{
  ID IVar1;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alloc_026aa370);
  _objc_retainAutoreleasedReturnValue();
  if (local_30 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  else {
    local_68 = local_30;
  }
  if (local_38 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_38;
  }
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_initWithTitle_message__0269d260,local_68,local_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

