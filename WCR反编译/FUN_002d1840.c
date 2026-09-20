// FUN_002d1840 @ 002d1840

void FUN_002d1840(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double local_238;
  double local_210;
  double local_208;
  double local_200;
  long local_140;
  long local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_c0;
  double local_98;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_40;
  long local_38;
  double local_30;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_2;
  FUN_002d20a8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_setTintColor__026caab0,uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_setTitleColor_forState__026caac0,local_40,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_setImage_forState__0269cc60,0,0);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
  dVar6 = *(double *)PTR__UIEdgeInsetsZero_02578118;
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
  uVar1 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  local_70 = dVar6;
  uStack_68 = uVar5;
  local_60 = uVar1;
  uStack_58 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_setImageEdgeInsets__0269ebe0);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x28),PTR_s_bounds_026ca548);
  _CGRectGetWidth();
  local_98 = dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x28),PTR_s_bounds_026ca548);
  _CGRectGetHeight(dVar6,uVar5,uVar1,uVar8);
  local_f8 = 0x4028000000000000;
  local_100 = local_30;
  if (local_30 <= 12.0) {
    local_200 = 12.0;
  }
  else {
    local_200 = local_30;
  }
  local_108 = local_200;
  local_f0 = local_200;
  local_118 = local_98;
  local_208 = dVar6;
  if (local_98 < dVar6) {
    local_208 = local_98;
  }
  local_128 = local_208;
  local_110 = local_208;
  if (local_208 <= local_200) {
    local_210 = local_208;
  }
  else {
    local_210 = local_200;
  }
  local_130 = local_210;
  local_e8 = local_210;
  lVar2 = *(long *)(param_2 + 0x28);
  local_c0 = dVar6;
  FUN_002d2288();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x30);
  local_138 = lVar2;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  local_140 = lVar3;
  if ((lVar3 == 0) || (local_138 == 0)) {
    if (local_138 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_138,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setImage__026ca978,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x28),PTR_s_setTitle_forState__026caab8,&cf_format_s_,0);
      local_238 = local_e8 * DAT_02323f28;
      if (local_238 <= 16.0) {
        local_238 = 16.0;
      }
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_238,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_138,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setImage__026ca978,local_140);
    lVar2 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_renderingMode_026a02c0);
    if (lVar2 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTintColor__026caab0,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTintColor__026caab0,local_40);
    }
    dVar7 = (local_98 - local_e8) * 0.5;
    dVar9 = (local_c0 - local_e8) * 0.5;
    dVar6 = local_e8;
    dVar10 = local_e8;
    FUN_002adf88();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar9,dVar6,dVar10,local_138,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x28),PTR_s_setTitle_forState__026caab8,0,0);
  }
  if (local_138 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x28),PTR_s_bringSubviewToFront__026ca550,local_138);
  }
  lVar2 = *(long *)(param_2 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_40,0);
  return;
}

