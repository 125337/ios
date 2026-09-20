// FUN_005d3070 @ 005d3070

bool FUN_005d3070(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_4);
  bVar1 = false;
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
    bVar1 = false;
    if (1.0 <= param_3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
      bVar1 = 1.0 <= param_1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

