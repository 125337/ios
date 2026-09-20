// jsonStringFromObject: @ 019ee544

/* Function Stack Size: 0x18 bytes */

ID WCRefineFontConvertViewController::jsonStringFromObject_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_dataWithJSONObject_options_error_026a64a8,local_30,0,0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_58 = &::cf___;
  }
  else {
    local_58 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

