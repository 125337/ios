// FUN_007a793c @ 007a793c

double FUN_007a793c(double param_1,undefined8 param_2,long param_3)

{
  double local_68;
  undefined8 local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (param_3 == 0) {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sectionHeaderHeight_026a3210);
    local_68 = param_1;
    if (param_1 <= 0.0) {
      FUN_00798e08();
      local_68 = param_1;
    }
    local_18 = local_68;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

