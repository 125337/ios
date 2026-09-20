// FUN_0014856c @ 0014856c

byte FUN_0014856c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  double local_e0;
  long local_30;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_size_026cab00);
    local_e0 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_size_026cab00);
    if (local_30 == 0) {
      local_e0 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    }
    if ((local_e0 <= param_1 + 0.5) || (param_2 + 0.5 < local_e0)) {
      if (param_2 <= param_1 + 8.0) {
        local_11 = ABS(param_2 - param_1) <= 8.0;
      }
      else {
        local_11 = false;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

