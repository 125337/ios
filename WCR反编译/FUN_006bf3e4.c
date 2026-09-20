// FUN_006bf3e4 @ 006bf3e4

byte FUN_006bf3e4(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  double local_c8;
  double local_b8;
  double local_b0;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_size_026cab00);
    if ((param_1 < 96.0) || (param_2 < 96.0)) {
      local_11 = 0;
    }
    else {
      if (param_1 <= param_2) {
        local_c8 = param_1;
        if (param_1 < 1.0) {
          local_c8 = 1.0;
        }
        local_b8 = param_2 / local_c8;
      }
      else {
        local_b0 = param_2;
        if (param_2 < 1.0) {
          local_b0 = 1.0;
        }
        local_b8 = param_1 / local_b0;
      }
      if (local_b8 <= 1.2) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

