// FUN_00657568 @ 00657568

void FUN_00657568(long param_1,ulong param_2)

{
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (param_1 == 1) {
    if (param_2 < 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___uNb;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___uNb_);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

