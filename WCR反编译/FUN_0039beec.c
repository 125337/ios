// FUN_0039beec @ 0039beec

double FUN_0039beec(double param_1,undefined8 param_2)

{
  double local_28;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sectionHeaderHeight_026a3210);
  local_28 = param_1;
  if (param_1 == 0.0) {
    FUN_0039bee0();
    local_28 = param_1;
  }
  _objc_storeStrong(&local_18,0);
  return local_28;
}

