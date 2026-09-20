// cloudFeatureGateModeForID: @ 0113aa00

/* Function Stack Size: 0x18 bytes */

ID WCRefineRemoteUpdateManager::cloudFeatureGateModeForID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_cloudGateModeEnumForID__026af3e8,local_30);
  if (IVar1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_hidden;
  }
  else if (IVar1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_all;
  }
  else if (IVar1 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_internal_only;
  }
  else if (IVar1 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_beta_only;
  }
  else if (IVar1 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_authorized_only;
  }
  else {
    local_18 = (cfstringStruct *)0x0;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

