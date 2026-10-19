// layoutSubviews @0xc0084

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCMTOCropToolbar::layoutSubviews(ID param_1,SEL param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 in_d1;
  double in_d2;
  double in_d3;
  undefined8 uVar12;
  undefined8 local_7f8;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d0;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  double local_7a0;
  double local_788;
  undefined8 local_780;
  double local_778;
  double local_760;
  undefined8 local_6e8;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_680;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  double local_648;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_5e0;
  double dStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5a0;
  double dStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  double local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  double local_530;
  undefined8 local_528;
  byte local_519;
  undefined8 local_518;
  byte local_509;
  undefined8 local_508;
  undefined8 local_500;
  byte local_4d9;
  undefined8 local_4d8;
  byte local_4c9;
  undefined8 local_4c8;
  undefined8 local_4c0;
  byte local_499;
  undefined8 local_498;
  byte local_489;
  undefined8 local_488;
  undefined8 local_480;
  byte local_459;
  undefined8 local_458;
  byte local_449;
  undefined8 local_448;
  undefined8 local_440;
  double local_420;
  byte local_411;
  undefined8 local_410;
  byte local_401;
  undefined8 local_400;
  undefined8 local_3f8;
  byte local_3d1;
  undefined8 local_3d0;
  byte local_3c1;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_398;
  byte local_369;
  undefined8 local_368;
  byte local_359;
  undefined8 local_358;
  double local_350;
  undefined8 uStack_348;
  double local_340;
  undefined8 uStack_338;
  double local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_2f8;
  double local_2d8;
  byte local_2a9;
  undefined8 local_2a8;
  byte local_299;
  undefined8 local_298;
  double local_290;
  undefined8 uStack_288;
  double local_280;
  undefined8 uStack_278;
  double local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_238;
  double local_218;
  double local_210;
  undefined8 uStack_208;
  double local_200;
  undefined8 uStack_1f8;
  double local_1e8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_180;
  double local_178;
  double local_160;
  undefined8 local_140;
  double local_138;
  undefined8 local_120;
  double local_118;
  undefined8 local_100;
  double local_f8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  double local_b8;
  double local_a0;
  undefined8 local_88;
  undefined8 local_68;
  byte local_41;
  ID local_40;
  class_t *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = &objc::class_t::WCMTOCropToolbar;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,"layoutSubviews");
  local_68 = _objc_msgSend_bounds(local_28,local_6e8);
  dVar9 = (double)_CGRectGetWidth(local_68);
  local_88 = _objc_msgSend_bounds(local_28,local_6e8);
  dVar10 = (double)_CGRectGetHeight(local_88,in_d1);
  local_41 = dVar9 < dVar10;
  local_c0 = _objc_msgSend_bounds(local_28,local_6e8);
  local_b8 = dVar10;
  local_a0 = in_d2;
  uVar4 = _objc_msgSend_cancelButtonHidden(local_28,local_6e8);
  bVar2 = true;
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      bVar1 = (local_41 ^ 1) & 1;
    }
    else {
      bVar1 = 0;
    }
    bVar2 = bVar1 != 0;
  }
  _objc_msgSend_cancelIconButton(local_28,local_6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar5,local_6e8,bVar2);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar4 = _objc_msgSend_cancelButtonHidden(local_28,local_6e8);
  bVar2 = true;
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      bVar1 = local_41 & 1;
    }
    else {
      bVar1 = 1;
    }
    bVar2 = bVar1 != 0;
  }
  _objc_msgSend_cancelTextButton(local_28,local_6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar5,local_6e8,bVar2);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar4 = _objc_msgSend_doneButtonHidden(local_28,local_6e8);
  bVar2 = true;
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      bVar1 = (local_41 ^ 1) & 1;
    }
    else {
      bVar1 = 0;
    }
    bVar2 = bVar1 != 0;
  }
  _objc_msgSend_doneIconButton(local_28,local_6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar5,local_6e8,bVar2);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar4 = _objc_msgSend_doneButtonHidden(local_28,local_6e8);
  bVar2 = true;
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      bVar1 = local_41 & 1;
    }
    else {
      bVar1 = 1;
    }
    bVar2 = bVar1 != 0;
  }
  _objc_msgSend_doneTextButton(local_28,local_6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar5,local_6e8,bVar2);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  local_e0 = (double)_objc_msgSend_bounds(local_28,local_6e8);
  dStack_d8 = dVar10;
  local_d0 = in_d2;
  dStack_c8 = in_d3;
  local_100 = _objc_msgSend_backgroundViewOutsets(local_28,local_6e8);
  local_e0 = local_e0 - dVar10;
  local_f8 = dVar10;
  local_120 = _objc_msgSend_backgroundViewOutsets(local_28,local_6e8);
  local_d0 = local_d0 + dVar10;
  local_118 = dVar10;
  local_140 = _objc_msgSend_backgroundViewOutsets(local_28,local_6e8);
  local_d0 = local_d0 + in_d3;
  local_138 = dVar10;
  dVar9 = (double)_objc_msgSend_backgroundViewOutsets(local_28,local_6e8);
  dStack_d8 = dStack_d8 - dVar9;
  local_160 = dVar9;
  dVar10 = (double)_objc_msgSend_backgroundViewOutsets(local_28,local_6e8);
  dStack_c8 = dStack_c8 + dVar10;
  local_180 = dVar10;
  local_178 = dVar9;
  local_1a0 = _objc_msgSend_backgroundViewOutsets(local_28,local_6e8);
  dStack_c8 = dStack_c8 + in_d2;
  dStack_1b8 = dStack_d8;
  local_1c0 = local_e0;
  local_1b0 = local_d0;
  local_198 = dVar10;
  dStack_1a8 = dStack_c8;
  _objc_msgSend_backgroundView(local_28,local_6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  dVar9 = dStack_1b8;
  local_778 = local_1b0;
  dVar10 = dStack_1a8;
  _objc_msgSend_setFrame_(local_1c0,uVar5,local_6e8);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if ((local_41 & 1) == 0) {
    local_1e8 = 10.0;
    uVar4 = _WCMTOCropViewUsesGlassDesign();
    if ((uVar4 & 1) != 0) {
      local_1e8 = 0.0;
    }
    uStack_208 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);
    uStack_1f8 = 0x4046000000000000;
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      local_238 = _objc_msgSend_frame(local_28,local_6e8);
      uVar6 = 0x4008000000000000;
      local_218 = local_778 / 3.0;
      _objc_msgSend_cancelTextButton(local_28,local_6e8);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_260 = _objc_msgSend_frame(uVar5,local_6e8);
      local_258 = uVar6;
      (*(code *)PTR__objc_release_00110458)(uVar5);
      if (local_218 < local_778) {
        local_778 = local_218;
      }
      local_268 = local_778;
      local_760 = local_778;
    }
    else {
      local_760 = 44.0;
    }
    local_200 = local_760;
    iVar3 = _objc_msgSend_reverseContentLayout(local_28,local_6e8);
    if (iVar3 == 0) {
      local_210 = local_1e8;
    }
    else {
      local_210 = local_a0 - (local_200 + local_1e8);
    }
    uStack_288 = uStack_208;
    local_290 = local_210;
    uStack_278 = uStack_1f8;
    local_280 = local_200;
    local_299 = 0;
    local_2a9 = 0;
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      _objc_msgSend_cancelTextButton(local_28,local_6e8);
      local_780 = _objc_retainAutoreleasedReturnValue();
      local_2a9 = 1;
      local_2a8 = local_780;
    }
    else {
      _objc_msgSend_cancelIconButton(local_28,local_6e8);
      local_780 = _objc_retainAutoreleasedReturnValue();
      local_299 = 1;
      local_298 = local_780;
    }
    local_7a0 = local_280;
    _objc_msgSend_setFrame_(local_290,local_780,local_6e8);
    if ((local_2a9 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_2a8);
    }
    if ((local_299 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_298);
    }
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      local_2f8 = _objc_msgSend_frame(local_28,local_6e8);
      uVar6 = 0x4008000000000000;
      local_2d8 = local_7a0 / 3.0;
      _objc_msgSend_doneTextButton(local_28,local_6e8);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_320 = _objc_msgSend_frame(uVar5,local_6e8);
      local_318 = uVar6;
      (*(code *)PTR__objc_release_00110458)(uVar5);
      if (local_2d8 < local_7a0) {
        local_7a0 = local_2d8;
      }
      local_328 = local_7a0;
      local_788 = local_7a0;
    }
    else {
      local_788 = 44.0;
    }
    local_200 = local_788;
    iVar3 = _objc_msgSend_reverseContentLayout(local_28,local_6e8);
    if (iVar3 == 0) {
      local_210 = local_a0 - (local_200 + local_1e8);
    }
    else {
      local_210 = local_1e8;
    }
    uStack_348 = uStack_208;
    local_350 = local_210;
    uStack_338 = uStack_1f8;
    local_340 = local_200;
    local_359 = 0;
    local_369 = 0;
    if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
      _objc_msgSend_doneTextButton(local_28,local_6e8);
      local_7a8 = _objc_retainAutoreleasedReturnValue();
      local_369 = 1;
      local_368 = local_7a8;
    }
    else {
      _objc_msgSend_doneIconButton(local_28,local_6e8);
      local_7a8 = _objc_retainAutoreleasedReturnValue();
      local_359 = 1;
      local_358 = local_7a8;
    }
    uVar5 = uStack_348;
    dVar9 = local_340;
    uVar6 = uStack_338;
    _objc_msgSend_setFrame_(local_350,local_7a8,local_6e8);
    if ((local_369 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_368);
    }
    if ((local_359 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_358);
    }
    uVar4 = _objc_msgSend_reverseContentLayout(local_28,local_6e8);
    local_3c1 = 0;
    local_3d1 = 0;
    local_401 = 0;
    local_411 = 0;
    if ((uVar4 & 1) == 0) {
      if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
        _objc_msgSend_cancelTextButton(local_28,local_6e8);
        local_7c0 = _objc_retainAutoreleasedReturnValue();
        local_411 = 1;
        local_410 = local_7c0;
      }
      else {
        _objc_msgSend_cancelIconButton(local_28,local_6e8);
        local_7c0 = _objc_retainAutoreleasedReturnValue();
        local_401 = 1;
        local_400 = local_7c0;
      }
      local_3f8 = _objc_msgSend_frame(local_7c0,local_6e8);
      local_7b8 = _CGRectGetMaxX(local_3f8);
    }
    else {
      if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
        _objc_msgSend_doneTextButton(local_28,local_6e8);
        local_7b0 = _objc_retainAutoreleasedReturnValue();
        local_3d1 = 1;
        local_3d0 = local_7b0;
      }
      else {
        _objc_msgSend_doneIconButton(local_28,local_6e8);
        local_7b0 = _objc_retainAutoreleasedReturnValue();
        local_3c1 = 1;
        local_3c0 = local_7b0;
      }
      local_3b8 = _objc_msgSend_frame(local_7b0,local_6e8);
      local_7b8 = _CGRectGetMaxX(local_3b8);
    }
    if ((local_411 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_410);
    }
    if ((local_401 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_400);
    }
    if ((local_3d1 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_3d0);
    }
    if ((local_3c1 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_3c0);
    }
    local_398 = local_7b8;
    local_420 = 0.0;
    iVar3 = _objc_msgSend_reverseContentLayout(local_28,local_6e8);
    if (iVar3 == 0) {
      local_449 = 0;
      local_459 = 0;
      if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
        _objc_msgSend_doneTextButton(local_28,local_6e8);
        local_7d0 = _objc_retainAutoreleasedReturnValue();
        local_459 = 1;
        local_458 = local_7d0;
      }
      else {
        _objc_msgSend_doneIconButton(local_28,local_6e8);
        local_7d0 = _objc_retainAutoreleasedReturnValue();
        local_449 = 1;
        local_448 = local_7d0;
      }
      local_440 = _objc_msgSend_frame(local_7d0,local_6e8);
      dVar10 = (double)_CGRectGetMinX(local_440);
      local_489 = 0;
      local_499 = 0;
      if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
        _objc_msgSend_cancelTextButton(local_28,local_6e8);
        local_7e0 = _objc_retainAutoreleasedReturnValue();
        local_499 = 1;
        local_498 = local_7e0;
      }
      else {
        _objc_msgSend_cancelIconButton(local_28,local_6e8);
        local_7e0 = _objc_retainAutoreleasedReturnValue();
        local_489 = 1;
        local_488 = local_7e0;
      }
      local_480 = _objc_msgSend_frame(local_7e0,local_6e8);
      local_420 = (double)_CGRectGetMaxX(local_480,uVar5,dVar9,uVar6);
      local_420 = dVar10 - local_420;
      if ((local_499 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_498);
      }
      if ((local_489 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_488);
      }
      if ((local_459 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_458);
      }
      if ((local_449 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_448);
      }
    }
    else {
      local_4c9 = 0;
      local_4d9 = 0;
      if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
        _objc_msgSend_cancelTextButton(local_28,local_6e8);
        local_7e8 = _objc_retainAutoreleasedReturnValue();
        local_4d9 = 1;
        local_4d8 = local_7e8;
      }
      else {
        _objc_msgSend_cancelIconButton(local_28,local_6e8);
        local_7e8 = _objc_retainAutoreleasedReturnValue();
        local_4c9 = 1;
        local_4c8 = local_7e8;
      }
      local_4c0 = _objc_msgSend_frame(local_7e8,local_6e8);
      dVar10 = (double)_CGRectGetMinX(local_4c0);
      local_509 = 0;
      local_519 = 0;
      if ((*(byte *)(local_28 + (long)_showOnlyIcons) & 1) == 0) {
        _objc_msgSend_doneTextButton(local_28,local_6e8);
        local_7f8 = _objc_retainAutoreleasedReturnValue();
        local_519 = 1;
        local_518 = local_7f8;
      }
      else {
        _objc_msgSend_doneIconButton(local_28,local_6e8);
        local_7f8 = _objc_retainAutoreleasedReturnValue();
        local_509 = 1;
        local_508 = local_7f8;
      }
      local_500 = _objc_msgSend_frame(local_7f8,local_6e8);
      local_420 = (double)_CGRectGetMaxX(local_500,uVar5,dVar9,uVar6);
      local_420 = dVar10 - local_420;
      if ((local_519 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_518);
      }
      if ((local_509 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_508);
      }
      if ((local_4d9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_4d8);
      }
      if ((local_4c9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_4c8);
      }
    }
    local_560 = local_398;
    local_558 = uStack_208;
    local_550 = local_420;
    local_548 = 0x4046000000000000;
    uVar5 = 0x4046000000000000;
    dVar9 = local_420;
    local_540 = _CGRectIntegral(local_398);
    uStack_568 = 0x4046000000000000;
    local_570 = 0x4046000000000000;
    local_538 = uStack_208;
    local_530 = dVar9;
    local_528 = uVar5;
    local_578 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
    uVar4 = _objc_msgSend_rotateCounterclockwiseButtonHidden(local_28,local_6e8);
    uVar5 = local_578;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_rotateCounterclockwiseButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar4 = _objc_msgSend_resetButtonHidden(local_28,local_6e8);
    uVar5 = local_578;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_resetButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar4 = _objc_msgSend_clampButtonHidden(local_28,local_6e8);
    uVar5 = local_578;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_clampButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar4 = _objc_msgSend_rotateClockwiseButtonHidden(local_28,local_6e8);
    uVar5 = local_578;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_rotateClockwiseButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    _objc_msgSend_layoutToolbarButtons_withSameButtonSize_inContainerRect_horizontally_
              (local_570,uStack_568,local_540,local_538,local_530,local_528,local_28,local_6e8,
               local_578,1);
    _objc_storeStrong(&local_578,0);
  }
  else {
    local_5a0 = *(undefined8 *)PTR__CGRectZero_001108d8;
    uStack_588 = 0x4046000000000000;
    local_590 = 0x4046000000000000;
    local_5c0 = _objc_msgSend_bounds(local_28,local_6e8);
    dStack_598 = (double)_CGRectGetHeight(local_5c0,dVar9,local_778,dVar10);
    dStack_598 = dStack_598 - 44.0;
    local_5e0 = local_5a0;
    uStack_5c8 = uStack_588;
    local_5d0 = local_590;
    dStack_5d8 = dStack_598;
    _objc_msgSend_cancelIconButton(local_28,local_6e8);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(local_5e0,dStack_5d8,local_5d0,uStack_5c8,uVar5,local_6e8);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    dStack_598 = (double)_objc_msgSend_statusBarHeightInset(local_28,local_6e8);
    local_590 = 0x4046000000000000;
    uStack_588 = 0x4046000000000000;
    local_620 = local_5a0;
    uStack_608 = 0x4046000000000000;
    local_610 = 0x4046000000000000;
    uStack_618 = dStack_598;
    _objc_msgSend_doneIconButton(local_28,local_6e8);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_618;
    uVar6 = local_610;
    uVar12 = uStack_608;
    _objc_msgSend_setFrame_(local_620,uVar7,local_6e8);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    local_660 = 0;
    _objc_msgSend_doneIconButton(local_28,local_6e8);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    local_680 = _objc_msgSend_frame(uVar7,local_6e8);
    uVar11 = _CGRectGetMaxY(local_680,uVar5);
    local_650 = 0x4046000000000000;
    local_658 = uVar11;
    _objc_msgSend_cancelIconButton(local_28,local_6e8);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_6a0 = _objc_msgSend_frame(uVar5,local_6e8);
    local_698 = uVar11;
    dVar9 = (double)_CGRectGetMinY(local_6a0);
    _objc_msgSend_doneIconButton(local_28,local_6e8);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    local_6c0 = _objc_msgSend_frame(uVar8,local_6e8);
    local_6b8 = uVar11;
    local_648 = (double)_CGRectGetMaxY(local_6c0,uVar11,uVar6,uVar12);
    local_648 = dVar9 - local_648;
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    uStack_6c8 = 0x4046000000000000;
    local_6d0 = 0x4046000000000000;
    local_6d8 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
    uVar4 = _objc_msgSend_rotateCounterclockwiseButtonHidden(local_28,local_6e8);
    uVar5 = local_6d8;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_rotateCounterclockwiseButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar4 = _objc_msgSend_resetButtonHidden(local_28,local_6e8);
    uVar5 = local_6d8;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_resetButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar4 = _objc_msgSend_clampButtonHidden(local_28,local_6e8);
    uVar5 = local_6d8;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_clampButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    uVar4 = _objc_msgSend_rotateClockwiseButtonHidden(local_28,local_6e8);
    uVar5 = local_6d8;
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_rotateClockwiseButton(local_28,local_6e8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar5,local_6e8);
      (*(code *)PTR__objc_release_00110458)(uVar6);
    }
    _objc_msgSend_layoutToolbarButtons_withSameButtonSize_inContainerRect_horizontally_
              (local_6d0,uStack_6c8,local_660,local_658,local_650,local_648,local_28,local_6e8,
               local_6d8,0);
    _objc_storeStrong(&local_6d8,0);
  }
  return;
}

