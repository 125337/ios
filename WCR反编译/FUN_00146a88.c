// FUN_00146a88 @ 00146a88

undefined8 FUN_00146a88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  dVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  if (dVar1 <= param_1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    dVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    if (param_1 <= dVar1) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
  }
  else {
    local_28 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

