// FUN_000fa68c @ 000fa68c

bool FUN_000fa68c(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026df880);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return dVar2 < param_1;
}

