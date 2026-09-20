// FUN_00ee347c @ 00ee347c

void FUN_00ee347c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  ulong local_120;
  ulong local_e0;
  ulong local_d0;
  ulong local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  uint local_44;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_e0 = 0;
  }
  else {
    local_e0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_e0;
  if (local_e0 == 0) {
    local_28 = 0;
    local_44 = 1;
    goto LAB_00ee392c;
  }
  uVar3 = local_30;
  FUN_00ee3a8c();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar3;
  while (uVar3 = local_58, local_58 != 0 && local_58 != local_40) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
    local_98 = param_1;
    local_90 = param_2;
    local_88 = param_3;
    local_80 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8,local_40);
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    _CGRectGetMinY(param_1,param_2);
    param_2 = 80.0;
    bVar1 = false;
    if (param_1 <= 80.0) {
      param_1 = local_78;
      dVar5 = local_70;
      uVar6 = local_68;
      param_4 = local_60;
      _CGRectGetWidth();
      param_2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_c0 = param_2;
      local_b8 = dVar5;
      local_b0 = uVar6;
      local_a8 = param_4;
      _CGRectGetWidth(param_2,dVar5,uVar6);
      param_3 = 0x3fe8000000000000;
      param_2 = param_2 * 0.75;
      bVar1 = false;
      if (param_2 <= param_1) {
        param_1 = local_78;
        param_3 = local_68;
        param_4 = local_60;
        _CGRectGetHeight(local_78,local_70);
        param_2 = 36.0;
        bVar1 = false;
        if (36.0 <= param_1) {
          param_1 = local_78;
          param_3 = local_68;
          param_4 = local_60;
          _CGRectGetHeight(local_78,local_70);
          param_2 = 96.0;
          bVar1 = param_1 <= 96.0;
        }
      }
    }
    local_99 = bVar1;
    uVar3 = local_58;
    if ((bool)local_99 != false) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_44 = 1;
      goto LAB_00ee390c;
    }
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_58;
    local_58 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_40;
  FUN_00eeba9c();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  if ((uVar3 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_navigationBar_0269ea30),
     (uVar3 & 1) == 0)) {
LAB_00ee3880:
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_120 = uVar3;
    if (uVar3 == 0) {
      local_120 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_120;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_44 = 1;
  }
  else {
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_navigationBar_0269ea30);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
    }
    local_44 = (uint)(uVar3 != 0);
    _objc_storeStrong(&local_d0,0);
    if (local_44 == 0) goto LAB_00ee3880;
  }
  _objc_storeStrong(&local_c8,0);
LAB_00ee390c:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00ee392c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

