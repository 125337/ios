// FUN_0039c184 @ 0039c184

double FUN_0039c184(double param_1,undefined8 param_2)

{
  double local_28;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sectionFooterHeight_026a3218);
  local_28 = param_1;
  if (param_1 == 0.0) {
    FUN_0039bee0();
    local_28 = param_1;
  }
  _objc_storeStrong(&local_18,0);
  return local_28;
}

