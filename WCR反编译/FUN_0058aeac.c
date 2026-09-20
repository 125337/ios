// FUN_0058aeac @ 0058aeac

void FUN_0058aeac(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  double local_20;
  double local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_20 < 1.0) {
    local_20 = 1.0;
  }
  if (local_18 <= 0.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeIntervalSince1970_0269cfc8);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18 + local_20,PTR__OBJC_CLASS___NSDate_026cdf88,
             PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

