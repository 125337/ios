// FUN_0078a874 @ 0078a874

double FUN_0078a874(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  double local_30;
  long local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  if (local_20 == 0) {
    local_18 = 20.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    local_30 = param_1 * DAT_02324008;
    if (local_30 < 20.0) {
      local_30 = 20.0;
    }
    local_18 = local_30;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

