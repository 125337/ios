// layoutLines @0xbd1e0

/* Function Stack Size: 0x10 bytes */

void WCMTOCropOverlayView::layoutLines(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d2;
  double dVar9;
  double in_d3;
  double local_4f0;
  undefined8 local_488;
  undefined8 local_3f0;
  long local_3e8;
  undefined8 local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  undefined8 local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  undefined8 local_3a0;
  double dStack_398;
  double local_390;
  double dStack_388;
  undefined8 local_380;
  double local_378;
  double local_370;
  double local_368;
  undefined8 local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  undefined8 local_340;
  long local_338;
  undefined8 local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  long local_308;
  double local_300;
  double local_2f8;
  float local_2ec;
  double local_2e8;
  undefined8 local_2e0;
  double dStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  double dStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double dStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  double local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double dStack_128;
  undefined8 local_120;
  double dStack_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double dStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  double local_70;
  double dStack_68;
  SEL local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_58 = param_2;
  local_50 = param_1;
  local_90 = _objc_msgSend_bounds(param_1);
  local_70 = in_d2;
  dStack_68 = in_d3;
  for (local_98 = 0; local_98 < 4; local_98 = local_98 + 1) {
    _objc_msgSend_outerLineViews(local_50,local_488);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_98);
    local_a0 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar1);
    dStack_b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    local_c0 = *(double *)PTR__CGRectZero_001108d8;
    dStack_a8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
    local_b0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);
    if (local_98 == 0) {
      local_e0 = 0xbff0000000000000;
      uStack_d8 = 0xbff0000000000000;
      local_d0 = local_70 + 2.0;
      uStack_c8 = 0x3ff0000000000000;
      dStack_b8 = -1.0;
      local_c0 = -1.0;
      dStack_a8 = 1.0;
      local_b0 = local_d0;
    }
    else if (local_98 == 1) {
      local_100 = local_70;
      uStack_f8 = 0;
      local_f0 = 0x3ff0000000000000;
      dStack_e8 = dStack_68;
      dStack_b8 = 0.0;
      local_c0 = local_70;
      dStack_a8 = dStack_68;
      local_b0 = 1.0;
    }
    else if (local_98 == 2) {
      local_120 = 0xbff0000000000000;
      dStack_118 = dStack_68;
      local_110 = local_70 + 2.0;
      uStack_108 = 0x3ff0000000000000;
      dStack_b8 = dStack_68;
      local_c0 = -1.0;
      dStack_a8 = 1.0;
      local_b0 = local_110;
    }
    else if (local_98 == 3) {
      local_140 = 0xbff0000000000000;
      uStack_138 = 0;
      local_130 = 0x3ff0000000000000;
      dStack_128 = dStack_68 + 1.0;
      dStack_b8 = 0.0;
      local_c0 = -1.0;
      local_b0 = 1.0;
      dStack_a8 = dStack_128;
    }
    dStack_158 = dStack_b8;
    local_160 = local_c0;
    dStack_148 = dStack_a8;
    local_150 = local_b0;
    dStack_178 = dStack_b8;
    local_180 = local_c0;
    dStack_168 = dStack_a8;
    local_170 = local_b0;
    in_d2 = local_b0;
    in_d3 = dStack_a8;
    _objc_msgSend_setFrame_(local_c0,dStack_b8,local_a0,local_488);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_msgSend_topLeftLineViews(local_98 + -4,local_50,local_488);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  _objc_msgSend_topRightLineViews(local_50,local_488);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  _objc_msgSend_bottomRightLineViews(local_50,local_488);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  _objc_msgSend_bottomLeftLineViews(local_50,local_488);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_488,&local_48,4);
  local_188 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  for (local_190 = 0; local_190 < 4; local_190 = local_190 + 1) {
    _objc_msgSend_objectAtIndexedSubscript_(local_188,local_488,local_190);
    local_198 = _objc_retainAutoreleasedReturnValue();
    dStack_1b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    local_1c0 = *(double *)PTR__CGRectZero_001108d8;
    uStack_1a8 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);
    local_1b0 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);
    dStack_1d8 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    local_1e0 = *(double *)PTR__CGRectZero_001108d8;
    dStack_1c8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);
    local_1d0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);
    if (local_190 == 0) {
      local_200 = 0xc008000000000000;
      uStack_1f8 = 0xc008000000000000;
      local_1f0 = 0x4008000000000000;
      uStack_1e8 = 0x4037000000000000;
      dStack_1b8 = -3.0;
      local_1c0 = -3.0;
      uStack_1a8 = 0x4037000000000000;
      local_1b0 = 0x4008000000000000;
      local_220 = 0;
      uStack_218 = 0xc008000000000000;
      local_210 = 0x4034000000000000;
      uStack_208 = 0x4008000000000000;
      dStack_1d8 = -3.0;
      local_1e0 = 0.0;
      dStack_1c8 = 3.0;
      local_1d0 = 20.0;
    }
    else if (local_190 == 1) {
      local_240 = local_70;
      uStack_238 = 0xc008000000000000;
      local_230 = 0x4008000000000000;
      uStack_228 = 0x4037000000000000;
      dStack_1b8 = -3.0;
      local_1c0 = local_70;
      uStack_1a8 = 0x4037000000000000;
      local_1b0 = 0x4008000000000000;
      local_260 = local_70 - 20.0;
      uStack_258 = 0xc008000000000000;
      local_250 = 0x4034000000000000;
      uStack_248 = 0x4008000000000000;
      dStack_1d8 = -3.0;
      dStack_1c8 = 3.0;
      local_1d0 = 20.0;
      local_1e0 = local_260;
    }
    else if (local_190 == 2) {
      local_280 = local_70;
      dStack_278 = dStack_68 - 20.0;
      local_270 = 0x4008000000000000;
      uStack_268 = 0x4037000000000000;
      local_1c0 = local_70;
      uStack_1a8 = 0x4037000000000000;
      local_1b0 = 0x4008000000000000;
      local_2a0 = local_70 - 20.0;
      dStack_298 = dStack_68;
      local_290 = 0x4034000000000000;
      uStack_288 = 0x4008000000000000;
      dStack_1d8 = dStack_68;
      dStack_1c8 = 3.0;
      local_1d0 = 20.0;
      local_1e0 = local_2a0;
      dStack_1b8 = dStack_278;
    }
    else if (local_190 == 3) {
      local_2c0 = 0xc008000000000000;
      dStack_2b8 = dStack_68 - 20.0;
      local_2b0 = 0x4008000000000000;
      uStack_2a8 = 0x4034000000000000;
      local_1c0 = -3.0;
      uStack_1a8 = 0x4034000000000000;
      local_1b0 = 0x4008000000000000;
      local_2e0 = 0xc008000000000000;
      dStack_2d8 = dStack_68;
      local_2d0 = 0x4037000000000000;
      uStack_2c8 = 0x4008000000000000;
      dStack_1d8 = dStack_68;
      local_1e0 = -3.0;
      dStack_1c8 = 3.0;
      local_1d0 = 23.0;
      dStack_1b8 = dStack_2b8;
    }
    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(local_1c0,dStack_1b8,local_1b0,uStack_1a8,uVar1,local_488);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    in_d2 = local_1d0;
    in_d3 = dStack_1c8;
    _objc_msgSend_setFrame_(local_1e0,dStack_1d8,uVar1,local_488);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_storeStrong(&local_198,0);
  }
  local_2ec = 1.0;
  _objc_msgSend_traitCollection(local_190 + -4,local_50,local_488);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar6 = (double)_objc_msgSend_displayScale(uVar1,local_488);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_4f0 = dVar6;
  if (dVar6 <= (double)local_2ec) {
    local_4f0 = (double)local_2ec;
  }
  local_300 = local_4f0;
  local_2e8 = 1.0 / local_4f0;
  local_2f8 = dVar6;
  _objc_msgSend_horizontalGridLines(local_50,local_488);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar5 = _objc_msgSend_count(uVar1,local_488);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_308 = lVar5;
  local_330 = _objc_msgSend_bounds(local_50,local_488);
  local_328 = local_4f0;
  local_320 = in_d2;
  local_318 = in_d3;
  dVar6 = (double)_CGRectGetHeight(local_330,local_4f0,in_d2);
  dVar8 = (double)(local_308 + 1);
  local_310 = (dVar6 - (double)local_308 * local_2e8) / dVar8;
  for (local_338 = 0; local_338 < local_308; local_338 = local_338 + 1) {
    _objc_msgSend_horizontalGridLines(local_50,local_488);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_338);
    local_340 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar1);
    dStack_358 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    local_360 = *(undefined8 *)PTR__CGRectZero_001108d8;
    local_350 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);
    dStack_348 = local_2e8;
    local_380 = _objc_msgSend_bounds(local_50,local_488);
    local_378 = dVar8;
    local_370 = dVar6;
    local_368 = in_d3;
    dVar6 = (double)_CGRectGetWidth(local_380,dVar8,dVar6,in_d3);
    dVar8 = local_2e8 * (double)local_338 + (double)(local_338 + 1) * local_310;
    local_3a0 = local_360;
    dStack_388 = dStack_348;
    local_3c0 = local_360;
    dStack_3a8 = dStack_348;
    in_d3 = dStack_348;
    dStack_3b8 = dVar8;
    local_3b0 = dVar6;
    dStack_398 = dVar8;
    local_390 = dVar6;
    dStack_358 = dVar8;
    local_350 = dVar6;
    _objc_msgSend_setFrame_(local_360,local_340,local_488);
    _objc_storeStrong(&local_340,0);
  }
  _objc_msgSend_verticalGridLines(local_338 - local_308,local_50,local_488);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_308 = _objc_msgSend_count(uVar1,local_488);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_3e0 = _objc_msgSend_bounds(local_50,local_488);
  local_3d8 = dVar8;
  local_3d0 = dVar6;
  local_3c8 = in_d3;
  dVar8 = (double)_CGRectGetWidth(local_3e0,dVar8,dVar6);
  local_310 = (dVar8 - (double)local_308 * local_2e8) / (double)(local_308 + 1);
  dVar6 = (double)(local_308 + 1);
  for (local_3e8 = 0; local_3e8 < local_308; local_3e8 = local_3e8 + 1) {
    _objc_msgSend_verticalGridLines(local_50,local_488);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_3e8);
    local_3f0 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar1);
    dVar9 = local_2e8;
    dVar7 = *(double *)(PTR__CGRectZero_001108d8 + 8);
    uVar1 = _objc_msgSend_bounds(local_50,local_488);
    in_d3 = (double)_CGRectGetHeight(uVar1,dVar6,dVar8,in_d3);
    _objc_msgSend_setFrame_
              (local_2e8 * (double)local_3e8 + (double)(local_3e8 + 1) * local_310,local_3f0,
               local_488);
    _objc_storeStrong(&local_3f0,0);
    dVar6 = dVar7;
    dVar8 = dVar9;
  }
  _objc_storeStrong(local_3e8 - local_308,&local_188,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

