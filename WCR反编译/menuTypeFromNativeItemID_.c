// menuTypeFromNativeItemID: @ 011049f0

/* Function Stack Size: 0x18 bytes */

long_long WCRefinePluginIconCatalog::menuTypeFromNativeItemID_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  _WCRLongPressMenuItemIsNative();
  local_18 = local_30;
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_native_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_native_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_substringFromIndex__0269d120,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_integerValue_026ca750);
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

