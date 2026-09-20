// effectiveSessionOptionsForID: @ 009bfbd8

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::effectiveSessionOptionsForID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_profileSessionSettingsEnabled_026a0b50);
  if ((IVar1 & 1) == 0) {
    IVar1 = *(ID *)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sessionOptionsForID__026a0b58,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

