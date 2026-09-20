// FUN_00889c98 @ 00889c98

void FUN_00889c98(double param_1,double param_2,double param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  byte local_79;
  undefined *local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_54;
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_34;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_34 = 0x3f800000;
  local_b0 = param_1;
  if (param_1 <= 1.0) {
    local_b0 = 1.0;
  }
  local_48 = local_b0;
  local_30 = local_b0;
  local_54 = 0x3f800000;
  local_b8 = param_2;
  if (param_2 <= 1.0) {
    local_b8 = 1.0;
  }
  local_68 = local_b8;
  local_50 = local_b8;
  local_79 = 0;
  local_c0 = param_3;
  local_60 = param_2;
  local_40 = param_1;
  local_28 = param_3;
  local_20 = param_1;
  local_18 = param_2;
  if (param_3 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = param_3;
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  local_70 = local_c0;
  dVar3 = local_30;
  dVar4 = local_50;
  FUN_00889c6c();
  uVar2 = 0;
  local_a0 = dVar3;
  local_98 = dVar4;
  _UIGraphicsBeginImageContextWithOptions(dVar3,dVar4,local_70);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = uVar2;
  _UIGraphicsEndImageContext();
  uVar2 = local_a8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

