// FUN_0077a218 @ 0077a218

ulong FUN_0077a218(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  ulong local_a0;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_5;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_7);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_frame_026ca640);
  _CGRectGetMidX();
  dVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
  _CGRectGetMidX(dVar1,param_2,param_3,param_4);
  if (dVar1 - 0.5 <= param_1) {
    local_a0 = (ulong)(dVar1 + 0.5 < param_1);
  }
  else {
    local_a0 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_a0;
}

