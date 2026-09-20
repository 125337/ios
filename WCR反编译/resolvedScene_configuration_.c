// resolvedScene:configuration: @ 015d6df4

/* Function Stack Size: 0x20 bytes */

ID WCRGlobalPageBackgroundStore::resolvedScene_configuration_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  cfstringStruct *local_40;
  undefined8 local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_followsGlobal__026b0fe0,local_30);
  if ((IVar1 & 1) == 0) {
    local_40 = local_28;
  }
  else {
    local_40 = &cf_global;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

