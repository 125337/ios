// FUN_0017c6c8 @ 0017c6c8

long FUN_0017c6c8(double param_1,uint param_2)

{
  undefined *puVar1;
  long local_90;
  double local_88;
  long local_18;
  
  if (param_2 == 0) {
    local_18 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_88 = (double)NEON_ucvtf((ulong)param_2);
    local_88 = param_1 - local_88;
    if (local_88 <= 0.0) {
      local_88 = 0.0;
    }
    local_90 = (long)(local_88 / 86400.0) + 1;
    if (local_90 < 2) {
      local_90 = 1;
    }
    local_18 = local_90;
  }
  return local_18;
}

