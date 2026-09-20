// FUN_01a30af8 @ 01a30af8

void FUN_01a30af8(long param_1)

{
  cfstringStruct *local_18;
  
  if (param_1 < 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_N_T_u;
  }
  else {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

