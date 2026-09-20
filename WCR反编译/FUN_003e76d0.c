// FUN_003e76d0 @ 003e76d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003e76d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  ulong local_f8;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  ulong local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar6 = local_28;
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar6 & 1) == 0) {
    local_38 = 1;
    goto LAB_003e85ec;
  }
  uVar4 = (uint)local_28;
  FUN_003e8704();
  if ((uVar4 & 1) == 0) {
    FUN_003e87f8(local_28);
    local_38 = 1;
    goto LAB_003e85ec;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  _CGRectGetWidth();
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_4;
  _CGRectGetHeight(param_1,param_2);
  local_68 = param_1;
  if ((local_40 < 80.0) || (uVar10 = 0x4044000000000000, param_1 < 40.0)) {
    local_38 = 1;
    goto LAB_003e85ec;
  }
  uVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_90 = uVar6;
  if (uVar6 == 0) {
LAB_003e7a10:
    FUN_003e8fac();
    if ((DAT_028ca498 & 1) == 0) {
      FUN_003e87f8(local_28);
      local_38 = 1;
    }
    else {
      dVar9 = DAT_026e0290;
      FUN_003e9184(local_28);
      local_c8 = DAT_028ca4a0;
      uVar6 = local_28;
      dVar8 = DAT_028ca4a0;
      local_c0 = dVar9;
      _objc_getAssociatedObject(local_28,DAT_026e0298);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_28;
      local_d0 = uVar6;
      _objc_getAssociatedObject(local_28,DAT_026e02a0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_28;
      local_d8 = uVar7;
      _objc_getAssociatedObject(local_28,DAT_026e02a8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      bVar1 = false;
      uVar7 = local_28;
      local_e0 = uVar6;
      _objc_getAssociatedObject(local_28,DAT_026e02b0);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = false;
      if ((uVar7 != 0) && (bVar3 = false, local_d0 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_doubleValue_026ca608);
        dVar9 = ABS(dVar8 - local_c0);
        bVar3 = false;
        if ((dVar9 < DAT_02323c88) && (bVar3 = false, local_d8 != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_doubleValue_026ca608);
          dVar9 = ABS(dVar9 - local_c8);
          bVar3 = false;
          if ((dVar9 < DAT_02323d38) && (bVar3 = false, local_e0 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_doubleValue_026ca608);
            bVar3 = false;
            if (ABS(dVar9 - local_68) < 0.5) {
              local_e8 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = true;
              uVar6 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar3 = false;
              if ((uVar6 & 1) != 0) {
                local_f8 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                uVar6 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar3 = uVar6 == 3;
              }
            }
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      (*(code *)PTR__objc_release_02578630)(uVar7);
      if (bVar3) {
        local_38 = 1;
      }
      else {
        FUN_003e928c(local_28);
        dVar9 = local_c0;
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar9);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        dVar9 = local_c8;
        if (0.0 < local_c8) {
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(dVar9);
          (*(code *)PTR__objc_release_02578630)();
          FUN_003e99f4();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGColor_026ca470);
          uVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        else {
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        uVar6 = local_28;
        uVar10 = DAT_026e02b0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar6,uVar10,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar6 = local_28;
        uVar10 = DAT_026e0298;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar6,uVar10,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar6 = local_28;
        uVar10 = DAT_026e02a0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar6,uVar10,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar6 = local_28;
        uVar10 = DAT_026e02a8;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar6,uVar10,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_38 = 0;
      }
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_bounds_026ca548);
    local_b8 = param_1;
    local_b0 = uVar10;
    local_a8 = param_3;
    local_a0 = param_4;
    _CGRectGetHeight(param_1,uVar10,param_3,param_4);
    local_98 = param_1;
    if ((param_1 <= 0.0) || (local_68 <= param_1 * DAT_02323d00)) goto LAB_003e7a10;
    FUN_003e87f8(local_28);
    local_38 = 1;
  }
  _objc_storeStrong(&local_90,0);
LAB_003e85ec:
  _objc_storeStrong(&local_28,0);
  return;
}

