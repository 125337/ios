// FUN_001506f4 @ 001506f4

double FUN_001506f4(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                   undefined8 param_5,undefined8 param_6)

{
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_6);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
  local_28 = param_4;
  if (param_4 < 1.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
    local_28 = param_1;
  }
  if (local_28 < 1.0) {
    local_28 = 192.0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_28;
}

