// openEmoticonFunction @ 01d2b3f4

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::openEmoticonFunction(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  local_48 = &cf_WCRefineEmoticonFunctionViewController;
  _NSClassFromString();
  bVar1 = local_48 == (cfstringStruct *)0x0;
  local_28 = local_48;
  if (bVar1) {
    local_48 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc_init();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_h_RubNS_u);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

