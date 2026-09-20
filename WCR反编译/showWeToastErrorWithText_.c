// showWeToastErrorWithText: @ 00f99e54

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::showWeToastErrorWithText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_freshWeToast_026acd40);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showErrorToastWithText__026a9930);
    if ((IVar1 & 1) != 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_58 = &cf_1Y_;
      }
      else {
        local_58 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_performSelector_withObject__026ca7c0,
                 PTR_s_showErrorToastWithText__026a9930,local_58);
      goto LAB_00f99f98;
    }
  }
  if (local_28 == (cfstringStruct *)0x0) {
    local_70 = &cf_1Y_;
  }
  else {
    local_70 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,local_70);
LAB_00f99f98:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

