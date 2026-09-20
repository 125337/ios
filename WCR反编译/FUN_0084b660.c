// FUN_0084b660 @ 0084b660

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0084b660(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  double local_f0;
  double local_e0;
  ulong local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  ulong local_70;
  ulong local_68;
  double local_60;
  double dStack_58;
  undefined8 local_48;
  ulong local_40;
  double local_38;
  double dStack_30;
  ulong local_28;
  
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_1;
  dStack_30 = param_2;
  FUN_00849e74();
  if ((param_3 & 1) == 0) {
    dStack_58 = dStack_30;
    local_60 = local_38;
    uVar1 = local_40;
    (*DAT_028cd498)(local_38,dStack_30,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
  }
  else {
    uVar1 = local_40;
    _objc_getAssociatedObject(local_40,DAT_026f48c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_68 = uVar1;
    _objc_getAssociatedObject(local_40,DAT_026f48c8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar2;
    if (local_68 == 0) {
      local_e0 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
      local_e0 = param_1;
    }
    local_88 = local_e0;
    if (local_70 == 0) {
      local_f0 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_doubleValue_026ca608);
      local_f0 = local_e0;
    }
    local_90 = local_f0;
    dStack_98 = dStack_30;
    local_a0 = local_38;
    if ((0.5 < local_88) && (local_f0 <= dStack_30)) {
      dStack_98 = dStack_30 - local_88;
    }
    uVar1 = local_40;
    (*DAT_028cd498)(local_38,dStack_98,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

