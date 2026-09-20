// FUN_0154c750 @ 0154c750

void FUN_0154c750(undefined8 param_1,byte param_2)

{
  cfstringStruct *local_18;
  
  if ((param_2 & 1) == 0) {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_qQg);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___N_;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

