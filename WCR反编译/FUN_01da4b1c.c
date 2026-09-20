// FUN_01da4b1c @ 01da4b1c

void FUN_01da4b1c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double local_1c8;
  double local_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_90;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  if (local_28 != 0) {
    dVar1 = param_1;
    FUN_01da4938(local_28);
    dVar2 = 16.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar2,param_2);
    local_1a0 = (double)(long)dVar2;
    if (local_1a0 <= 16.0) {
      local_1a0 = 16.0;
    }
    local_90 = 6.0;
    if (local_30 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      local_1a8 = param_4;
      if (param_4 <= 16.0) {
        local_1a8 = 16.0;
      }
      if (local_1a8 <= 18.0) {
        local_1b0 = local_1a8;
      }
      else {
        local_1b0 = 18.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      local_1c0 = (local_1b0 - local_1a0) / 2.0;
      if (local_1c0 <= 0.0) {
        local_1c0 = 0.0;
      }
      local_90 = local_1a8 + local_1c0;
    }
    local_1c8 = (param_1 - 16.0) - dVar1;
    if (local_1c8 <= 8.0) {
      local_1c8 = 8.0;
    }
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,local_90,dVar1,local_1a0,local_28,PTR_s_setFrame__026ca960);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

