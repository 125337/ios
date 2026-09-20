// FUN_00ff1248 @ 00ff1248

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ff1248(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  undefined *local_198;
  undefined *local_180;
  double local_168;
  double local_160;
  double local_128;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_e8;
  undefined *local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  byte local_99;
  undefined *local_98;
  double local_90;
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
  double local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
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
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    local_128 = param_1;
    if (local_40 < param_1) {
      local_128 = local_40;
    }
    local_90 = local_128;
    local_38 = local_128;
    if (local_128 <= 0.0) {
      local_38 = 26.0;
    }
    dVar6 = local_38;
    local_68 = param_1;
    FUN_00ffa0e4();
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    FUN_00ff06d4();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_99 = (byte)lVar4;
    puVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_avatarCornerEnabled_0269dfb8);
    if (((((ulong)puVar3 & 1) == 0) ||
        (puVar3 = local_98,
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_avatarCornerBorderEnabled_0269dfc8),
        ((ulong)puVar3 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_avatarCornerBorderSize_0269dfd0),
       dVar6 <= 0.0)) {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      uVar5 = (ulong)(local_99 & 1);
      FUN_00ff1054();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_avatarCornerBorderSize_0269dfd0);
      local_c0 = 0;
      local_160 = dVar6;
      if (dVar6 < 0.0) {
        local_160 = 0.0;
      }
      local_c8 = local_160;
      local_b0 = local_160;
      local_d0 = 0x4014000000000000;
      if (5.0 <= local_160) {
        local_168 = 5.0;
      }
      else {
        local_168 = local_160;
      }
      local_d8 = local_168;
      local_a8 = local_168;
      lVar2 = local_28;
      local_b8 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_168);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      bVar1 = (local_99 & 1) == 0;
      local_180 = local_98;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_avatarCornerBorderColorLight_0269dfd8);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_180;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_avatarCornerBorderColorDark_0269dfe8);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = local_180;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = local_180;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      bVar1 = local_e0 == (undefined *)0x0;
      if (bVar1) {
        local_198 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_198;
      }
      else {
        local_198 = local_e0;
      }
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_CGColor_026ca470);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_98,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

