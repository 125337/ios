// FUN_01a4058c @ 01a4058c

void FUN_01a4058c(double param_1)

{
  double dVar1;
  undefined *local_18;
  
  dVar1 = (double)(long)(param_1 * 10.0) / 10.0;
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (DAT_02323cd0 <= ABS(dVar1 - (double)(long)dVar1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1fpx);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0fpx);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

