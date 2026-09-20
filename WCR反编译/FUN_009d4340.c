// FUN_009d4340 @ 009d4340

void FUN_009d4340(undefined8 param_1)

{
  undefined *puVar1;
  double local_70;
  double local_68;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_70 = 0.0;
  }
  else {
    local_68 = 0.0;
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_68 <= 0.0) {
      local_68 = 0.0;
    }
    local_70 = local_68;
  }
  if ((long)local_70 < 0x3c) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__I__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__I__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

