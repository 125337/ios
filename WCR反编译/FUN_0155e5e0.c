// FUN_0155e5e0 @ 0155e5e0

void FUN_0155e5e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  double local_348;
  double local_310;
  double local_308;
  undefined *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  code *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  byte local_2a0;
  undefined **local_298;
  undefined *local_290;
  undefined4 local_288;
  undefined4 local_284;
  code *local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  double local_248;
  double local_240;
  double dStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  double local_220;
  double dStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  byte local_1e0;
  undefined **local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_159;
  undefined *local_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
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
  undefined4 local_60;
  char local_59;
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
  _objc_getAssociatedObject(local_28,DAT_028c5e90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  local_38 = puVar4;
  _objc_getAssociatedObject(local_28,DAT_028c5e88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_40 = puVar5;
  _objc_getAssociatedObject(local_28,DAT_028c5ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  local_48 = puVar4;
  _objc_getAssociatedObject(local_28,DAT_028c5ee8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_40;
  local_59 = '\0';
  bVar3 = true;
  local_50 = puVar5;
  if ((local_38 != (undefined *)0x0) && (bVar3 = true, local_40 != (undefined *)0x0)) {
    puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_59 = '\x01';
    bVar3 = puVar4 == puVar5;
    local_58 = puVar5;
  }
  if (local_59 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar3) {
    local_60 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = param_4;
    _CGRectGetMinY();
    local_68 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    local_b0 = param_1;
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    _CGRectGetHeight(param_1,param_2);
    local_b8 = local_68 + param_1;
    local_c8 = 0;
    local_100 = local_68 - 12.0;
    local_308 = local_100;
    if (local_100 <= 0.0) {
      local_308 = 0.0;
    }
    local_d8 = local_308;
    local_c0 = local_308;
    local_310 = local_b8;
    if ((local_29 & 1) == 0) {
      local_310 = local_308;
    }
    local_e0 = local_310;
    local_d0 = local_100;
    local_90 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_108 = local_310;
    local_f8 = param_3;
    local_f0 = param_4;
    _CGRectGetMinY(local_310,local_100);
    dVar8 = local_310 + local_e0;
    dVar9 = local_e0;
    local_110 = dVar8;
    local_e8 = local_310;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    local_130 = dVar8;
    dStack_128 = dVar9;
    local_120 = param_3;
    uStack_118 = param_4;
    if (local_48 != (undefined *)0x0) {
      dVar9 = local_110 + 6.0;
      dStack_128 = dVar9;
      _CGRectGetMaxY();
      local_110 = dVar8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
    puVar4 = local_50;
    local_159 = 0;
    bVar3 = false;
    uVar1 = local_50 != (undefined *)0x0;
    local_150 = dVar8;
    dStack_148 = dVar9;
    local_140 = param_3;
    uStack_138 = param_4;
    if ((bool)uVar1) {
      puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = puVar4 != puVar5;
      local_159 = uVar1;
      local_158 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar1 = local_159;
    }
    local_159 = uVar1;
    if (bVar3) {
      local_168 = 10.0;
      if (local_48 == (undefined *)0x0) {
        local_168 = 14.0;
      }
      dStack_148 = local_110 + local_168;
      dVar8 = local_150;
      param_3 = local_140;
      param_4 = uStack_138;
      _CGRectGetMaxY(local_48,local_150,dStack_148);
      local_110 = dVar8;
    }
    puVar4 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5ef0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_180 = local_110 + 16.0;
    local_348 = local_180;
    if (local_180 < dVar8) {
      local_348 = dVar8;
    }
    local_190 = local_348;
    local_178 = local_348;
    local_188 = dVar8;
    local_170 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    dStack_198 = local_178;
    puVar4 = local_28;
    dVar9 = local_178;
    local_1b0 = local_348;
    dStack_1a8 = dVar8;
    local_1a0 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1d0 = dVar9;
      local_1c8 = dVar8;
      local_1c0 = param_3;
      local_1b8 = param_4;
      _CGRectGetHeight(dVar9,dVar8,param_3,param_4);
      dStack_1a8 = (double)(long)((dVar9 - local_178) * 0.5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUserInteractionEnabled__026caad8,1);
      FUN_0156ad1c(local_40);
    }
    if (local_48 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUserInteractionEnabled__026caad8,1);
    }
    puVar2 = local_38;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    ppuVar6 = &local_290;
    local_290 = PTR___NSConcreteStackBlock_02578660;
    local_288 = 0xc2000000;
    local_284 = 0;
    local_280 = FUN_0158d19c;
    local_278 = &DAT_02586bc0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_40;
    local_270 = puVar2;
    local_248 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_48;
    local_268 = puVar5;
    local_1e0 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_50;
    local_260 = puVar2;
    dStack_238 = dStack_128;
    local_240 = local_130;
    uStack_228 = uStack_118;
    local_230 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_28;
    local_258 = puVar5;
    dStack_218 = dStack_148;
    local_220 = local_150;
    uStack_208 = uStack_138;
    local_210 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = puVar2;
    dStack_1f8 = dStack_1a8;
    local_200 = local_1b0;
    dStack_1e8 = dStack_198;
    local_1f0 = local_1a0;
    _objc_retainBlock();
    puVar5 = local_40;
    ppuVar7 = &local_2d0;
    local_2d0 = puVar4;
    local_2c8 = 0xc2000000;
    local_2c4 = 0;
    local_2c0 = FUN_0158d450;
    local_2b8 = &DAT_02585ba0;
    local_1d8 = ppuVar6;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_28;
    local_2b0 = puVar5;
    local_2a0 = local_29 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = puVar4;
    _objc_retainBlock();
    local_298 = ppuVar7;
    FUN_01587c10(local_28,local_2a & 1,local_1d8,ppuVar7);
    _objc_storeStrong(&local_298);
    _objc_storeStrong(&local_2a8,0);
    _objc_storeStrong(&local_2b0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_250,0);
    _objc_storeStrong(&local_258,0);
    _objc_storeStrong(&local_260,0);
    _objc_storeStrong(&local_268,0);
    _objc_storeStrong(&local_270,0);
    local_60 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

