// FUN_01b717c8 @ 01b717c8

void FUN_01b717c8(long param_1,undefined8 param_2,long param_3)

{
  cfstringStruct *local_18;
  
  if ((param_1 < 1) && (param_3 < 1)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_lgSyvh_;
  }
  else {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (param_3 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__y);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_YNg);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__y);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

