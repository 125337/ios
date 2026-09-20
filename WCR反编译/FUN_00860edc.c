// FUN_00860edc @ 00860edc

void FUN_00860edc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double local_128;
  double local_d8;
  undefined *local_28;
  
  dVar1 = param_5 + param_7;
  dVar2 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar2 = (dVar2 - param_5 * 2.0) - param_7 * 2.0;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  local_28 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  param_1 = param_1 - param_7 * 2.0;
  if ((dVar2 <= 1.0) || (param_1 <= 1.0)) {
    local_28 = (undefined *)0x0;
  }
  else {
    local_d8 = param_6 - param_7;
    if (local_d8 < 0.0) {
      local_d8 = 0.0;
    }
    local_128 = param_1;
    if (dVar2 < param_1) {
      local_128 = dVar2;
    }
    if (local_128 * 0.5 < local_d8) {
      local_d8 = local_128 * 0.5;
    }
    FUN_0081e864();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar1,param_7,dVar2,param_1,local_d8,local_28,
               PTR_s_bezierPathWithRoundedRect_corner_026ca530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

