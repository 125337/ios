// dampedHalfStepValueFromRaw:slider:kind: @ 01819d58

/* Function Stack Size: 0x28 bytes */

double WCRefineAvatarCornerBeautifyViewController::dampedHalfStepValueFromRaw_slider_kind_
                 (ID param_1,SEL param_2,double param_3,ID param_4,long_long param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ID IVar8;
  float fVar9;
  double dVar10;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_258;
  double local_250;
  double local_1f8;
  double local_1f0;
  long local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  long local_a0;
  long local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  long_long local_50;
  long local_48;
  double local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  dVar3 = DAT_02339b90;
  dVar2 = DAT_02339b88;
  dVar1 = DAT_02339b80;
  local_48 = 0;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_48,param_4);
  local_58 = 0.0;
  local_60 = 1.0;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_avatarBeautifySliderMin_max_forK_026b6108,&local_58,&local_60,param_5);
  local_68 = local_58;
  local_78 = local_60;
  local_80 = local_40;
  if (local_40 <= local_60) {
    local_1f0 = local_40;
  }
  else {
    local_1f0 = local_60;
  }
  local_88 = local_1f0;
  local_70 = local_1f0;
  if (local_1f0 <= local_58) {
    local_1f8 = local_58;
  }
  else {
    local_1f8 = local_1f0;
  }
  local_90 = local_1f8;
  local_40 = local_1f8;
  lVar5 = local_48;
  _objc_getAssociatedObject(local_48,DAT_028c64f8);
  fVar9 = SUB84(local_1f8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = local_48;
  local_98 = lVar5;
  _objc_getAssociatedObject(local_48,DAT_028c6500);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_48;
  uVar4 = DAT_028c64f8;
  local_a0 = lVar6;
  if ((local_98 == 0) || (lVar6 == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar5,uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    lVar5 = local_48;
    uVar4 = DAT_028c6500;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    _CACurrentMediaTime();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar5,uVar4,puVar7,1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_c8 = (double)(float)(int)(local_40 * dVar3) / dVar3;
    local_b0 = local_58;
    local_c0 = local_60;
    local_250 = local_c8;
    if (local_60 < local_c8) {
      local_250 = local_60;
    }
    local_d0 = local_250;
    local_b8 = local_250;
    if (local_250 <= local_58) {
      local_258 = local_58;
    }
    else {
      local_258 = local_250;
    }
    local_d8 = local_258;
    local_28 = local_258;
    local_dc = 1;
    local_a8 = local_c8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_floatValue_026a5b48);
    dVar10 = (double)fVar9;
    local_e8 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_doubleValue_026ca608);
    local_f0 = dVar10;
    _CACurrentMediaTime();
    lVar5 = local_48;
    uVar4 = DAT_028c64f8;
    local_100 = dVar10 - local_f0;
    if (local_100 < dVar2) {
      local_100 = dVar2;
    }
    local_108 = (double)ABS((float)(local_40 - local_e8)) / local_100;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f8 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar5,uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    lVar5 = local_48;
    uVar4 = DAT_028c6500;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar5,uVar4,puVar7,1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_130 = (double)(float)(int)(local_40 * dVar3) / dVar3;
    local_118 = local_58;
    local_128 = local_60;
    local_2a8 = local_130;
    if (local_60 < local_130) {
      local_2a8 = local_60;
    }
    local_138 = local_2a8;
    local_120 = local_2a8;
    if (local_2a8 <= local_58) {
      local_2b0 = local_58;
    }
    else {
      local_2b0 = local_2a8;
    }
    local_140 = local_2b0;
    local_110 = local_2b0;
    local_150 = local_58;
    local_160 = local_60;
    local_168 = local_40;
    if (local_40 <= local_60) {
      local_2b8 = local_40;
    }
    else {
      local_2b8 = local_60;
    }
    local_170 = local_2b8;
    local_158 = local_2b8;
    if (local_2b8 <= local_58) {
      local_2c0 = local_58;
    }
    else {
      local_2c0 = local_2b8;
    }
    local_178 = local_2c0;
    if (32.0 <= local_108) {
      local_148 = local_2b0;
    }
    else {
      local_180 = dVar1;
      local_148 = (double)(float)(int)((local_2b0 * dVar1 + DAT_02339b78 * local_2c0) * dVar3) /
                  dVar3;
      if ((double)ABS((float)(local_40 - local_2b0)) < DAT_02339b70) {
        local_148 = local_2b0;
      }
    }
    local_188 = local_58;
    local_198 = local_60;
    local_1a0 = local_148;
    if (local_148 <= local_60) {
      local_2c8 = local_148;
    }
    else {
      local_2c8 = local_60;
    }
    local_1a8 = local_2c8;
    local_190 = local_2c8;
    if (local_2c8 <= local_58) {
      local_2d0 = local_58;
    }
    else {
      local_2d0 = local_2c8;
    }
    local_1b0 = local_2d0;
    local_148 = local_2d0;
    lVar5 = local_48;
    _objc_getAssociatedObject(local_48,DAT_028c6508);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = lVar5;
    FUN_0181a608(local_148);
    if (local_1b8 != 0) {
      lVar6 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_doubleValue_026ca608);
      FUN_0181a608();
      if (lVar5 != lVar6) {
        IVar8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hapticGenerator_026b5f48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
        IVar8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hapticGenerator_026b5f48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
      }
    }
    lVar5 = local_48;
    uVar4 = DAT_028c6508;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar5,uVar4,puVar7,1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_28 = local_148;
    local_dc = 1;
    _objc_storeStrong(&local_1b8,0);
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_48,0);
  return local_28;
}

