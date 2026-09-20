// FUN_01ebef60 @ 01ebef60

void FUN_01ebef60(double param_1,long param_2)

{
  cfstringStruct *local_18;
  
  if (((param_2 != 0x3e9) && (param_2 != 0x3ea)) || (0.0 < param_1)) {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (param_2 == 0x3ec) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (((param_2 == 0x3ed) || (param_2 == 0x3ee)) ||
            ((param_2 == 0x3f8 || (param_2 == 0x3fd)))) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2fx);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

