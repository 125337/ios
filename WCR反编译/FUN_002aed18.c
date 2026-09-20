// FUN_002aed18 @ 002aed18

undefined8
FUN_002aed18(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_5;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_7);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  _CGRectGetMinX();
  dVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  _CGRectGetMinX(dVar1,param_2,param_3,param_4);
  if (dVar1 <= param_1) {
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

