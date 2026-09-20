// FUN_01550f58 @ 01550f58

void FUN_01550f58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,byte param_7)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_318;
  double local_2e0;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  byte local_280;
  byte local_27f;
  undefined **local_278;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  double local_220;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  byte local_1b8;
  byte local_1b7;
  undefined **local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double dStack_168;
  undefined8 local_160;
  double dStack_158;
  double local_150;
  double local_148;
  undefined1 local_139;
  undefined *local_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_e9;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  byte local_2a;
  byte local_29;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_2a = param_7;
  local_29 = param_6;
  FUN_015874e4(local_28);
  puVar4 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5e80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  local_38 = puVar4;
  _objc_getAssociatedObject(local_28,DAT_028c5e88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_40 = puVar5;
  _objc_getAssociatedObject(local_28,DAT_028c5e90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  local_48 = puVar4;
  _objc_getAssociatedObject(local_28,DAT_028c5ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_50 = puVar5;
  _objc_getAssociatedObject(local_28,DAT_028c5ee8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if (((local_38 == (undefined *)0x0) || (local_40 == (undefined *)0x0)) ||
     (local_48 == (undefined *)0x0)) {
    local_5c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = param_4;
    _CGRectGetHeight();
    local_68 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    local_b0 = param_1;
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    _CGRectGetHeight();
    local_2e0 = param_1;
    if ((local_29 & 1) == 0) {
      local_2e0 = local_68;
    }
    local_b8 = local_2e0;
    local_90 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    local_e0 = local_2e0;
    local_d8 = param_2;
    local_d0 = param_3;
    local_c8 = param_4;
    _CGRectGetMinY(local_2e0,param_2);
    dVar8 = local_2e0 + local_b8;
    puVar4 = local_28;
    dVar11 = local_b8;
    local_e8 = dVar8;
    local_c0 = local_2e0;
    FUN_01587628(local_28,local_29 & 1);
    local_e9 = (byte)puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
    dVar10 = dVar8;
    local_110 = dVar8;
    dStack_108 = dVar11;
    local_100 = param_3;
    uStack_f8 = param_4;
    if (local_50 != (undefined *)0x0) {
      dVar9 = local_e8 + 6.0;
      dVar10 = dVar9;
      dVar11 = 6.0;
      dStack_108 = dVar9;
      if ((local_e9 & 1) != 0) {
        _CGRectGetMaxY();
        dVar10 = dVar8;
        dVar11 = dVar9;
        local_e8 = dVar8;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
    puVar4 = local_58;
    local_139 = 0;
    bVar3 = false;
    uVar1 = local_58 != (undefined *)0x0;
    local_130 = dVar10;
    dStack_128 = dVar11;
    local_120 = param_3;
    uStack_118 = param_4;
    if ((bool)uVar1) {
      puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = puVar4 != puVar5;
      local_139 = uVar1;
      local_138 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar1 = local_139;
    }
    local_139 = uVar1;
    if (bVar3) {
      local_148 = 10.0;
      if ((local_e9 & 1) == 0) {
        local_148 = 14.0;
      }
      dVar11 = local_e8 + local_148;
      dVar10 = local_130;
      param_3 = local_120;
      param_4 = uStack_118;
      dStack_128 = dVar11;
      _CGRectGetMaxY(local_e9 & 1);
      local_e8 = dVar10;
    }
    puVar4 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5ef0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_150 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    local_178 = local_e8 + 16.0;
    local_180 = local_150;
    local_318 = local_178;
    if (local_178 < local_150) {
      local_318 = local_150;
    }
    local_188 = local_318;
    dStack_158 = local_318;
    puVar4 = local_28;
    dVar8 = local_150;
    local_170 = dVar10;
    dStack_168 = dVar11;
    local_160 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1a8 = local_318;
      local_1a0 = dVar8;
      local_198 = param_3;
      local_190 = param_4;
      _CGRectGetHeight(local_318,dVar8,param_3,param_4);
      dVar10 = local_170;
      _CGRectGetHeight(local_170,dStack_168,local_160,dStack_158);
      dStack_168 = (double)(long)((local_318 - dVar10) * 0.5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUserInteractionEnabled__026caad8,1);
      FUN_0156ad1c(local_40);
    }
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,1);
    }
    if ((local_50 != (undefined *)0x0) && ((local_e9 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,1);
    }
    puVar5 = local_48;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    ppuVar6 = &local_270;
    local_270 = PTR___NSConcreteStackBlock_02578660;
    local_268 = 0xc2000000;
    local_264 = 0;
    local_260 = FUN_01587768;
    local_258 = &DAT_02586a60;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_38;
    local_250 = puVar5;
    local_220 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_40;
    local_248 = puVar2;
    local_1b8 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_50;
    local_240 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_58;
    local_238 = puVar2;
    dStack_210 = dStack_108;
    local_218 = local_110;
    uStack_200 = uStack_f8;
    local_208 = local_100;
    local_1b7 = local_e9 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_28;
    local_230 = puVar5;
    dStack_1f0 = dStack_128;
    local_1f8 = local_130;
    uStack_1e0 = uStack_118;
    local_1e8 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = puVar2;
    dStack_1d0 = dStack_168;
    local_1d8 = local_170;
    dStack_1c0 = dStack_158;
    local_1c8 = local_160;
    _objc_retainBlock();
    puVar2 = local_38;
    ppuVar7 = &local_2c0;
    local_2c0 = puVar4;
    local_2b8 = 0xc2000000;
    local_2b4 = 0;
    local_2b0 = FUN_01587a70;
    local_2a8 = &DAT_02586a90;
    local_1b0 = ppuVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_40;
    local_2a0 = puVar2;
    local_280 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_50;
    local_298 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_28;
    local_290 = puVar4;
    local_27f = local_e9 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = puVar5;
    _objc_retainBlock();
    local_278 = ppuVar7;
    FUN_01587c10(local_28,local_2a & 1,local_1b0,ppuVar7);
    _objc_storeStrong(&local_278);
    _objc_storeStrong(&local_288,0);
    _objc_storeStrong(&local_290,0);
    _objc_storeStrong(&local_298,0);
    _objc_storeStrong(&local_2a0,0);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_240,0);
    _objc_storeStrong(&local_248,0);
    _objc_storeStrong(&local_250,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

