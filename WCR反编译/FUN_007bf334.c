// FUN_007bf334 @ 007bf334

void FUN_007bf334(long param_1,undefined8 param_2)

{
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028ccd48)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  local_18 = param_1;
  if ((DAT_026f46b8 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

