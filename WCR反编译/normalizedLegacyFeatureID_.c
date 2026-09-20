// normalizedLegacyFeatureID: @ 01c8c788

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::normalizedLegacyFeatureID_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_red_envelop);
  local_18 = local_30;
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_auto_function;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

