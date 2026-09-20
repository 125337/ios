// FUN_0020f2a4 @ 0020f2a4

double FUN_0020f2a4(double param_1,double param_2,double param_3,undefined8 param_4)

{
  double local_220;
  double local_1f8;
  double local_190;
  long local_30;
  double local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_28 = param_1;
  if (local_30 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    if (param_3 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      local_190 = param_2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_190 = param_2;
    }
    local_1f8 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    if (param_3 <= 0.0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    }
    if (local_1f8 <= local_190) {
      local_220 = local_1f8;
    }
    else {
      local_220 = local_190;
    }
    local_28 = (double)(long)(local_220 * 0.5);
    if ((local_28 <= 0.0) || (param_1 <= local_28)) {
      local_28 = param_1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

