// FUN_00149860 @ 00149860

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00149860(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  undefined8 uVar4;
  ulong local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulong local_40;
  int local_34;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar1 = local_30;
  if (local_30 == 0) {
    local_21 = false;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    while (local_40 != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768);
      if (((uVar1 & 1) != 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8),
         param_1 < DAT_02323cd0)) {
        local_21 = false;
        local_34 = 1;
        goto LAB_00149ae4;
      }
      dVar3 = DAT_02323cd0;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_70 = param_1;
      local_68 = dVar3;
      local_60 = param_3;
      local_58 = param_4;
      _CGRectGetWidth(param_1,dVar3);
      uVar4 = 0x3fe0000000000000;
      if (param_1 < 0.5) {
LAB_00149a7c:
        local_21 = false;
        local_34 = 1;
        goto LAB_00149ae4;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_90 = param_1;
      local_88 = uVar4;
      local_80 = param_3;
      local_78 = param_4;
      _CGRectGetHeight(param_1,uVar4);
      if (param_1 < 0.5) goto LAB_00149a7c;
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_34 = 2;
LAB_00149ae4:
    _objc_storeStrong(&local_40,0);
    if (local_34 == 2) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_98 = uVar2;
      if (uVar2 == 0) {
        local_21 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_98);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
        _CGRectIntersection();
        local_21 = false;
        if (2.0 <= param_3) {
          local_21 = 2.0 <= param_4;
        }
      }
      local_34 = 1;
      _objc_storeStrong(&local_98,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

