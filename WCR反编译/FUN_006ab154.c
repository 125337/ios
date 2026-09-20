// FUN_006ab154 @ 006ab154

void FUN_006ab154(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_a8;
  double local_a0;
  long local_78;
  undefined *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  dVar4 = local_30;
  local_38 = param_1;
  _CGRectGetMidY(local_30,local_28,local_20,local_18);
  dVar5 = local_30;
  local_40 = dVar4;
  _CGRectGetWidth(local_30,local_28,local_20,local_18);
  dVar4 = local_30;
  local_50 = dVar5;
  _CGRectGetHeight(local_30,local_28,local_20,local_18);
  local_a0 = dVar4;
  if (local_50 < dVar4) {
    local_a0 = local_50;
  }
  local_60 = local_a0;
  local_48 = local_a0 * 0.5;
  local_68 = local_48 * DAT_02324020;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_58 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar1;
  for (local_78 = 0; dVar4 = local_38, local_78 < 10; local_78 = local_78 + 1) {
    if (local_78 % 2 == 0) {
      local_a8 = local_48;
    }
    else {
      local_a8 = local_68;
    }
    dVar2 = DAT_02323e28 + ((double)local_78 * DAT_02323cb0) / 5.0;
    dVar3 = dVar2;
    _cos();
    dVar5 = local_40;
    dVar4 = dVar4 + dVar3 * local_a8;
    _sin();
    dVar5 = dVar5 + dVar2 * local_a8;
    FUN_006aa80c();
    if (local_78 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar5,local_70,PTR_s_moveToPoint__026a01b0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar5,local_70,PTR_s_addLineToPoint__026a01b8);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_closePath_026a66f8);
  puVar1 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

