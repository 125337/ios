// FUN_01d00dac @ 01d00dac

double FUN_01d00dac(double param_1,undefined8 param_2,double param_3,byte param_4,byte param_5)

{
  byte bVar1;
  undefined *puVar2;
  double local_90;
  double local_30;
  
  bVar1 = ((param_4 & 1) != 0) + ((param_5 & 1) != 0);
  if (bVar1 == 0) {
    bVar1 = 1;
  }
  local_30 = param_1 - 16.0;
  if (local_30 < 160.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_90 = param_3 - 32.0;
    if (local_90 < 160.0) {
      local_90 = 160.0;
    }
    local_30 = local_90;
  }
  return (double)(long)((local_30 * 9.0) / 16.0) * (double)bVar1 + 8.0 + 38.0;
}

