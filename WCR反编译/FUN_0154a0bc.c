// FUN_0154a0bc @ 0154a0bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0154a0bc(double param_1,undefined8 *param_2,byte param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  dword *pdVar3;
  dword *pdVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined *local_370;
  undefined *local_240;
  undefined8 local_238;
  undefined8 local_230;
  double local_228;
  double local_220;
  byte local_211;
  undefined *local_210;
  byte local_201;
  undefined *local_200;
  double local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined *local_b8;
  double local_b0;
  double local_a8;
  dword *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  undefined *local_78;
  byte local_6a;
  byte local_69;
  undefined8 *local_68;
  double local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_6a = param_4;
  local_69 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  _objc_alloc();
  uVar15 = 0;
  uVar11 = 0;
  dVar14 = local_60;
  dVar16 = local_60;
  FUN_0152a0a0();
  local_98 = uVar11;
  local_90 = uVar15;
  local_88 = dVar14;
  local_80 = dVar16;
  (*(code *)PTR__objc_msgSend_02578628)(uVar11,uVar15,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pdVar3 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pdVar4 = pdVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  local_a0 = pdVar4;
  if ((long)pdVar4 < 0) {
    local_a0 = (dword *)0x0;
  }
  if (100 < (long)local_a0) {
    local_a0 = &segment_command_00000020.flags;
  }
  dVar12 = (double)(long)local_a0 / 100.0;
  dVar13 = local_60 * 0.5 * dVar12;
  local_b0 = dVar13;
  local_a8 = dVar12;
  if ((local_69 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
    local_f8 = dVar13;
    local_f0 = dVar12;
    local_e8 = dVar14;
    local_e0 = dVar16;
    _CGRectInset();
    local_d8 = dVar13;
    local_d0 = dVar12;
    local_c8 = dVar14;
    local_c0 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,puVar1,PTR_s_initWithFrame__026ca6e8);
    pcVar5 = &cf__E9E9E9;
    uVar11 = 0x3ff0000000000000;
    local_b8 = puVar1;
    FUN_01551c04();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    dVar13 = dVar14 * 0.5 * local_a8;
    puVar1 = local_b8;
    local_118 = uVar11;
    local_110 = dVar12;
    local_108 = dVar14;
    local_100 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar13);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setContentMode__026ca8e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_b8);
    puVar1 = local_b8;
    if (local_68 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_68 = puVar1;
    }
    puVar1 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar1;
    local_11c = 1;
    _objc_storeStrong(&local_b8,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
    local_170 = dVar13;
    dStack_168 = dVar12;
    local_160 = dVar14;
    dStack_158 = dVar16;
    local_148 = dVar13;
    dStack_140 = dVar12;
    local_138 = dVar14;
    dStack_130 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,dVar12,local_128,PTR_s_setFrame__026ca960);
    pcVar5 = &cf__FEDA75;
    FUN_01551c04();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
    pcVar7 = &cf__FA7E1E;
    local_50 = pcVar6;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    pcVar8 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
    pcVar6 = &cf__D62976;
    local_48 = pcVar8;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    pcVar9 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_CGColor_026ca470);
    pcVar8 = &cf__962FBF;
    local_40 = pcVar9;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    pcVar10 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
    pcVar9 = &cf__4F5BD5;
    local_38 = pcVar10;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    pcVar10 = pcVar9;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_CGColor_026ca470);
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = pcVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setColors__026ca8d0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    uVar15 = 0;
    uVar11 = 0;
    FUN_015480d8();
    local_190 = uVar11;
    uStack_188 = uVar15;
    local_180 = uVar11;
    uStack_178 = uVar15;
    (*(code *)PTR__objc_msgSend_02578628)(uVar11,uVar15,local_128,PTR_s_setStartPoint__026caa70);
    uVar15 = 0x3ff0000000000000;
    uVar11 = uVar15;
    FUN_015480d8();
    local_1b0 = uVar15;
    uStack_1a8 = uVar11;
    local_1a0 = uVar15;
    uStack_198 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)(uVar15,local_128,PTR_s_setEndPoint__026ca940);
    dVar12 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setCornerRadius__026ca900);
    puVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
    local_1f8 = dVar12;
    local_1f0 = uVar11;
    local_1e8 = dVar14;
    local_1e0 = dVar16;
    _CGRectInset();
    local_1d8 = dVar12;
    local_1d0 = uVar11;
    local_1c8 = dVar14;
    local_1c0 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,uVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_201 = 0;
    local_211 = 0;
    local_370 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_1b8 = puVar1;
    if ((local_6a & 1) == 0) {
      uVar15 = 0x3ff0000000000000;
      uVar11 = DAT_02323d48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_211 = 1;
      local_210 = local_370;
    }
    else {
      uVar15 = 0;
      uVar11 = DAT_02323c60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_201 = 1;
      local_200 = local_370;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setBackgroundColor__026ca888,local_370);
    if ((local_211 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_210);
    }
    if ((local_201 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_bounds_026ca548);
    dVar12 = dVar14 * 0.5 * local_a8;
    puVar1 = local_1b8;
    local_238 = uVar15;
    local_230 = uVar11;
    local_228 = dVar14;
    local_220 = dVar16;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_1b8);
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_bounds_026ca548);
    _CGRectInset();
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,puVar1,PTR_s_initWithFrame__026ca6e8);
    pcVar5 = &cf__E9E9E9;
    local_240 = puVar1;
    FUN_01551c04();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_bounds_026ca548);
    dVar14 = dVar14 * 0.5 * local_a8;
    puVar1 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar14);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setContentMode__026ca8e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addSubview__026ca4c0,local_240);
    puVar1 = local_240;
    if (local_68 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_68 = puVar1;
    }
    puVar1 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar1;
    local_11c = 1;
    _objc_storeStrong(&local_240);
    _objc_storeStrong(&local_1b8,0);
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_58);
  return;
}

