// FUN_002ac1ec @ 002ac1ec

void FUN_002ac1ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double local_248;
  double local_240;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  byte local_3d;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  (*DAT_028c97d0)(param_5,param_6);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_002bad18();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_3d = (byte)puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_68 = param_1;
      local_60 = param_2;
      local_58 = param_3;
      local_50 = param_4;
      _CGRectGetWidth();
      uVar1 = local_28;
      local_48 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_90 = param_1;
      local_88 = param_2;
      local_80 = param_3;
      local_78 = param_4;
      _CGRectGetHeight();
      local_70 = param_1;
      FUN_002c7638();
      local_99 = (local_3d & 1) != 0 || uVar1 == 0;
      local_a8 = 0;
      uVar2 = local_28;
      local_98 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf__badgeView);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_a8;
      local_a8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      FUN_002c76a4(local_28,local_3d & 1);
      uVar1 = local_a8;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isHidden_026ca768),
         (uVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_frame_026ca640);
        if ((local_99 & 1) == 0) {
          local_248 = 4.0;
        }
        else {
          local_240 = (local_70 - 32.0) / 2.0;
          if (local_240 <= 4.0) {
            local_240 = 4.0;
          }
          local_248 = local_240;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48 / 2.0 + 10.0,local_248,param_3,param_4,local_a8,PTR_s_setFrame__026ca960
                  );
      }
      _objc_storeStrong(&local_a8,0);
    }
  }
  return;
}

