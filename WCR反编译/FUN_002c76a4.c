// FUN_002c76a4 @ 002c76a4

void FUN_002c76a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  ulong local_110;
  ulong local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  byte local_99;
  ulong local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_29 = param_6;
  if (local_28 == 0) {
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_58 = param_1;
    local_50 = param_2;
    local_48 = param_3;
    local_40 = param_4;
    _CGRectGetWidth();
    uVar1 = local_28;
    local_38 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_90 = param_1;
    local_88 = param_2;
    local_80 = param_3;
    local_78 = param_4;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    local_70 = param_1;
    if ((local_38 <= 0.0) || (param_1 <= 0.0)) {
      local_30 = 1;
    }
    else {
      FUN_002c7638();
      local_99 = (local_29 & 1) != 0 || uVar1 == 0;
      local_98 = uVar1;
      FUN_002c85b0(local_29 & 1);
      local_b0 = 13.0;
      if (local_98 != 0) {
        local_b0 = 14.0;
      }
      local_b8 = 0.0;
      if ((local_99 & 1) == 0) {
        local_b8 = 2.0;
      }
      local_220 = param_1;
      if ((local_29 & 1) == 0) {
        local_220 = param_1 + local_b8 + local_b0;
      }
      local_c0 = local_220;
      local_d0 = 0x4008000000000000;
      local_d8 = (local_70 - local_220) / 2.0;
      local_228 = local_d8;
      if (local_d8 <= 3.0) {
        local_228 = 3.0;
      }
      local_e0 = local_228;
      local_c8 = local_228;
      if ((local_29 & 1) == 0) {
        local_238 = local_228;
      }
      else {
        local_f0 = 0x4010000000000000;
        local_f8 = (local_70 - param_1) / 2.0;
        local_230 = local_f8;
        if (local_f8 <= 4.0) {
          local_230 = 4.0;
        }
        local_100 = local_230;
        local_238 = local_230;
      }
      local_e8 = local_238;
      local_108 = 0;
      local_110 = 0;
      uVar2 = local_28;
      local_a8 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf__imageView);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_108;
      local_108 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf__textLabel);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_110;
      local_110 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_108;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        uVar2 = local_28;
        FUN_002c8684(local_28,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_108;
        local_108 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_110;
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        uVar2 = local_28;
        FUN_002c8684(local_28,1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_110;
        local_110 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_108;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        dVar4 = (local_38 - local_a8) / 2.0;
        dVar6 = local_e8;
        dVar8 = local_a8;
        dVar7 = local_a8;
        FUN_002adf88();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar4,dVar6,dVar8,dVar7,local_108,PTR_s_setFrame__026ca960);
      }
      uVar1 = local_110;
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setHidden__026ca970,local_29 & 1);
        uVar5 = 0;
        if ((local_29 & 1) == 0) {
          uVar5 = 0x3ff0000000000000;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,local_110,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTextAlignment__026caa90,1);
        uVar5 = 0x4022000000000000;
        if (local_98 != 0) {
          uVar5 = 0x4024000000000000;
        }
        puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        dVar7 = local_c8 + local_a8 + local_b8;
        uVar5 = 0;
        dVar6 = local_38;
        dVar8 = local_b0;
        FUN_002adf88();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,dVar7,dVar6,dVar8,local_110,PTR_s_setFrame__026ca960);
      }
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_108,0);
      local_30 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

