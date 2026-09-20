// FUN_00582f2c @ 00582f2c

void FUN_00582f2c(long param_1)

{
  bool bVar1;
  cfstringStruct *local_68;
  long local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_18;
  
  local_60 = param_1;
  if (param_1 < 2) {
    local_60 = 1;
  }
  if (local_60 % 0x5a0 == 0) {
    bVar1 = local_60 / 0x5a0 != 1;
    if (bVar1) {
      local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_k);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_68;
    }
    else {
      local_68 = &cf_k_Y;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  else {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_60 % 0x3c == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_k);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_k);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

