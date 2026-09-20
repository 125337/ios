// FUN_0180d420 @ 0180d420

void FUN_0180d420(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  long local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
  if (lVar1 != 0) {
    local_50 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  else {
    local_50 = &cf_NP;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

