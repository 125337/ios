// FUN_0005217c @ 0005217c

double FUN_0005217c(double param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00056ca8();
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return param_1 - (double)param_2 * 24.0 * 60.0 * 60.0;
}

