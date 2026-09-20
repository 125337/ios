// marketingDeviceModelDescription @ 00fa9840

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::marketingDeviceModelDescription(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_00fa96b0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  FUN_00fa9a3c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  pcVar1 = local_38;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___UIDevice_026ce400;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIDevice_026ce400,PTR_s_currentDevice_026ca5d0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_68 = &cf_iOS;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_18 = local_48;
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

