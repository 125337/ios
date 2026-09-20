// FUN_007992cc @ 007992cc

double FUN_007992cc(undefined8 param_1)

{
  long lVar1;
  double local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_globalCornerMargin_026a1fe0);
  local_20 = (double)lVar1;
  if (local_20 <= 0.0) {
    local_20 = 8.0;
  }
  if (100.0 < local_20) {
    local_20 = 100.0;
  }
  _objc_storeStrong(&local_18,0);
  return local_20;
}

