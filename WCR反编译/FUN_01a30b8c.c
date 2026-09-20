// FUN_01a30b8c @ 01a30b8c

void FUN_01a30b8c(long param_1)

{
  cfstringStruct *local_18;
  
  if (param_1 < 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__g_T_u;
  }
  else {
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lld__02lld)
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

