// FUN_01688fe4 @ 01688fe4

undefined8 FUN_01688fe4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_windowLevel_026a0f70);
  dVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_windowLevel_026a0f70);
  if (dVar1 <= param_1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_windowLevel_026a0f70);
    dVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_windowLevel_026a0f70);
    if (param_1 <= dVar1) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

