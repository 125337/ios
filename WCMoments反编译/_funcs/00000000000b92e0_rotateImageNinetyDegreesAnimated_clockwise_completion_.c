// rotateImageNinetyDegreesAnimated:clockwise:completion: @0xb92e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCMTOCropView::rotateImageNinetyDegreesAnimated_clockwise_completion_
               (ID param_1,SEL param_2,bool param_3,bool param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  ID IVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 in_d1;
  double in_d2;
  double in_d3;
  double local_880;
  double local_860;
  double local_840;
  double local_828;
  double local_7f8;
  double local_6c8;
  long local_6a8;
  undefined8 local_690;
  undefined *local_688;
  undefined4 local_680;
  undefined4 local_67c;
  code *local_678;
  undefined *local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  byte local_650;
  undefined *local_648;
  undefined4 local_640;
  undefined4 local_63c;
  code *local_638;
  undefined *local_630;
  undefined8 local_628;
  double local_620;
  byte local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  double local_5e0;
  double dStack_5d8;
  byte local_5c9;
  undefined8 local_5c8;
  undefined8 local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  undefined8 local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  double local_560;
  double local_558;
  double local_550;
  double local_548;
  double local_540;
  double local_538;
  double local_520;
  double local_518;
  double local_510;
  undefined8 local_508;
  double local_500;
  double local_4e8;
  double local_4e0;
  double dStack_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  byte local_491;
  undefined8 local_490;
  double local_488;
  undefined8 local_480;
  double local_440;
  double dStack_438;
  double local_430;
  double dStack_428;
  undefined8 local_410;
  double local_3f0;
  double dStack_3e8;
  undefined1 auStack_3e0 [48];
  undefined1 auStack_3b0 [48];
  undefined1 auStack_380 [48];
  undefined1 auStack_350 [80];
  undefined8 local_300;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  double dStack_2c8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  double local_290;
  double dStack_288;
  undefined8 local_280;
  undefined8 local_278;
  double local_270;
  double local_260;
  double dStack_258;
  undefined1 auStack_248 [48];
  undefined1 auStack_218 [48];
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  undefined8 local_58;
  long local_50;
  undefined4 local_44;
  long local_40;
  byte local_32;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_32 = (byte)param_4;
  local_40 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_5);
  uVar4 = _objc_msgSend_rotateAnimationInProgress(local_28,local_690);
  if ((uVar4 & 1) != 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,0);
    }
    local_44 = 1;
    goto LAB_000ba7c0;
  }
  _objc_msgSend_resetTimer(local_28,local_690);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar5 != 0) {
    _objc_msgSend_cancelResetTimer(local_28,local_690);
    _objc_msgSend_setEditing_resetCropBox_animated_(local_28,local_690,0,1,0);
    uVar6 = _objc_msgSend_angle(local_28,local_690);
    _objc_msgSend_setCropBoxLastEditedAngle_(local_28,local_690,uVar6);
    _objc_msgSend_captureStateForImageRotation(local_28,local_690);
  }
  local_6a8 = _objc_msgSend_angle(local_28,local_690);
  if ((local_32 & 1) == 0) {
    local_6a8 = local_6a8 + -0x5a;
  }
  else {
    local_6a8 = local_6a8 + 0x5a;
  }
  local_50 = local_6a8;
  if ((local_6a8 < -0x167) || (0x167 < local_6a8)) {
    local_50 = 0;
  }
  *(long *)(local_28 + (long)_angle) = local_50;
  local_58 = 0;
  if (local_50 == -0x10e) {
    local_58 = 0xc012d97c7f3321d2;
  }
  else if (local_50 == -0xb4) {
    local_58 = 0xc00921fb54442d18;
  }
  else if (local_50 == -0x5a) {
    local_58 = 0xbff921fb54442d18;
  }
  else if (local_50 == 0x5a) {
    local_58 = 0x3ff921fb54442d18;
  }
  else if (local_50 == 0xb4) {
    local_58 = 0x400921fb54442d18;
  }
  else if (local_50 == 0x10e) {
    local_58 = 0x4012d97c7f3321d2;
  }
  uVar6 = local_58;
  _memcpy(auStack_b8,PTR__CGAffineTransformIdentity_00110738,0x30);
  _CGAffineTransformRotate(auStack_88,uVar6,auStack_b8);
  local_d8 = _objc_msgSend_contentBounds(local_28,local_690);
  local_d0 = in_d1;
  local_c8 = in_d2;
  local_c0 = in_d3;
  local_f8 = _objc_msgSend_cropBoxFrame(local_28,local_690);
  local_108 = local_c8 / in_d3;
  local_110 = local_c0 / in_d2;
  local_6c8 = local_110;
  if (local_108 < local_110) {
    local_6c8 = local_108;
  }
  local_118 = local_6c8;
  local_100 = local_6c8;
  local_f0 = in_d1;
  local_e8 = in_d2;
  local_e0 = in_d3;
  local_128 = (double)_CGRectGetMidX(local_f8,in_d1,in_d2,in_d3);
  local_120 = (double)_CGRectGetMidY(local_f8,local_f0,local_e8);
  dVar13 = local_128;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  dVar12 = (double)_objc_msgSend_contentOffset(uVar6,local_690);
  dVar14 = local_120;
  local_138 = dVar13 + dVar12;
  local_148 = dVar12;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  dVar13 = (double)_objc_msgSend_contentOffset(uVar7,local_690);
  local_130 = dVar14 + dVar12;
  local_158 = dVar13;
  local_150 = dVar12;
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  dVar14 = (double)_objc_msgSend_zoomScale(uVar6,local_690);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  local_160 = dVar14;
  lVar8 = _objc_msgSend_angle(local_28,local_690);
  lVar5 = -lVar8;
  if (0 < lVar8) {
    lVar5 = lVar8;
  }
  lVar9 = _objc_msgSend_cropBoxLastEditedAngle(local_28,local_690);
  lVar8 = -lVar9;
  if (0 < lVar9) {
    lVar8 = lVar9;
  }
  if (lVar5 - lVar8 == 0) {
LAB_000b97b8:
    local_190 = (double)_objc_msgSend_cropBoxLastEditedSize(local_28,local_690);
    dStack_188 = dVar12;
    local_170 = local_190;
    dStack_168 = dVar12;
    _objc_msgSend_cropBoxLastEditedMaxZoomScale(local_28,local_690);
    _objc_msgSend_setBaseMaximumZoomScale_(local_28,local_690);
    uVar7 = _objc_msgSend_cropBoxLastEditedMinZoomScale(local_28,local_690);
    _objc_msgSend_scrollView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setMinimumZoomScale_(uVar7,uVar6,local_690);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_updateScrollViewMaximumZoomScale(local_28,local_690);
    uVar7 = _objc_msgSend_cropBoxLastEditedZoomScale(local_28,local_690);
    _objc_msgSend_scrollView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setZoomScale_(uVar7,uVar6,local_690);
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  else {
    lVar8 = _objc_msgSend_angle(lVar5 - lVar8,local_28,local_690);
    lVar5 = -lVar8;
    if (0 < lVar8) {
      lVar5 = lVar8;
    }
    lVar9 = _objc_msgSend_cropBoxLastEditedAngle(local_28,local_690);
    lVar8 = -lVar9;
    if (0 < lVar9) {
      lVar8 = lVar9;
    }
    lVar5 = lVar5 + (lVar8 + -0xb4) % 0x168;
    if (lVar5 == 0) goto LAB_000b97b8;
    local_1c0 = _objc_msgSend_cropBoxFrame(lVar5,local_28,local_690);
    local_1a0 = (double)(float)(int)(local_e0 * local_100);
    dVar14 = local_100;
    local_1b8 = dVar12;
    local_1b0 = dVar13;
    local_1e0 = _objc_msgSend_cropBoxFrame(local_28,local_690);
    dStack_198 = (double)(float)(int)(dVar13 * local_100);
    local_170 = local_1a0;
    local_1d8 = dVar14;
    local_1d0 = dVar13;
    dStack_168 = dStack_198;
    _objc_msgSend_scrollView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    dVar13 = (double)_objc_msgSend_minimumZoomScale(uVar6,local_690);
    _objc_msgSend_setMinimumZoomScale_(dVar13 * local_100,uVar6,local_690);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    IVar2 = local_28;
    dVar13 = (double)_objc_msgSend_baseMaximumZoomScale(local_28,local_690);
    _objc_msgSend_setBaseMaximumZoomScale_(dVar13 * local_100,IVar2,local_690);
    _objc_msgSend_updateScrollViewMaximumZoomScale(local_28,local_690);
    _objc_msgSend_scrollView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    dVar13 = (double)_objc_msgSend_zoomScale(uVar6,local_690);
    _objc_msgSend_setZoomScale_(dVar13 * local_100,uVar6,local_690);
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  dVar13 = (double)_CGRectGetMidX(local_d8,local_d0,local_c8,local_c0);
  local_180 = (double)(float)(int)(dVar13 - local_170 * 0.5);
  dVar13 = local_c0;
  dVar14 = (double)_CGRectGetMidY(local_d8,local_d0,local_c8);
  uVar6 = 0x3fe0000000000000;
  dStack_178 = (double)(float)(int)(dVar14 - dStack_168 * 0.5);
  local_1e8 = 0;
  if ((local_31 & 1) != 0) {
    _objc_msgSend_foregroundContainerView(local_28,local_690);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_snapshotViewAfterScreenUpdates_(uVar10,local_690,0);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    uVar7 = local_1e8;
    local_1e8 = uVar11;
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    _objc_msgSend_setRotateAnimationInProgress_(local_28,local_690,1);
  }
  _memcpy(auStack_218,auStack_88,0x30);
  _objc_msgSend_backgroundImageView(local_28,local_690);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_248,auStack_218,0x30);
  _objc_msgSend_setTransform_(uVar7,local_690,auStack_248);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  _objc_msgSend_backgroundContainerView(local_28,local_690);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  local_280 = _objc_msgSend_frame(uVar7,local_690);
  local_278 = uVar6;
  local_270 = dVar14;
  local_260 = dVar14;
  dStack_258 = dVar13;
  (*(code *)PTR__objc_release_00110458)(uVar7);
  puVar1 = PTR__CGPointZero_00110850;
  uStack_298 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
  local_2a0 = *(undefined8 *)PTR__CGPointZero_00110850;
  local_290 = dStack_258;
  dStack_288 = local_260;
  _objc_msgSend_backgroundContainerView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  dVar13 = local_290;
  dVar14 = dStack_288;
  _objc_msgSend_setFrame_(local_2a0,uVar6,local_690);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  uStack_2d8 = *(undefined8 *)(puVar1 + 8);
  local_2e0 = *(undefined8 *)puVar1;
  _objc_msgSend_backgroundImageView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  local_300 = _objc_msgSend_frame(uVar6,local_690);
  local_2d0 = dVar13;
  dStack_2c8 = dVar14;
  _objc_msgSend_backgroundImageView(local_28,local_690);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  dVar13 = local_2d0;
  dVar14 = dStack_2c8;
  _objc_msgSend_setFrame_(local_2e0,uVar7,local_690);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _memcpy(auStack_350,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_foregroundContainerView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_380,auStack_350,0x30);
  _objc_msgSend_setTransform_(uVar6,local_690,auStack_380);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _memcpy(auStack_3b0,auStack_88,0x30);
  _objc_msgSend_foregroundImageView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_3e0,auStack_3b0,0x30);
  _objc_msgSend_setTransform_(uVar6,local_690,auStack_3e0);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_backgroundContainerView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  local_410 = _objc_msgSend_frame(uVar6,local_690);
  local_3f0 = dVar13;
  dStack_3e8 = dVar14;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentSize_(local_3f0,dStack_3e8,uVar7,local_690);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  dStack_438 = dStack_178;
  local_440 = local_180;
  dStack_428 = dStack_168;
  local_430 = local_170;
  dVar13 = dStack_178;
  dVar14 = local_170;
  dVar12 = dStack_168;
  _objc_msgSend_setCropBoxFrame_(local_180,local_28,local_690);
  _objc_msgSend_moveCroppedContentToCenterAnimated_(local_28,local_690,0);
  local_480 = _objc_msgSend_cropBoxFrame(local_28,local_690);
  local_491 = 0;
  local_180 = (double)local_480;
  dStack_178 = dVar13;
  local_170 = dVar14;
  dStack_168 = dVar12;
  if (local_160 <= 1.1920928955078125e-07) {
    local_7f8 = local_100;
  }
  else {
    _objc_msgSend_scrollView(local_28,local_690);
    local_490 = _objc_retainAutoreleasedReturnValue();
    local_491 = 1;
    local_7f8 = (double)_objc_msgSend_zoomScale(local_490,local_690);
    local_7f8 = local_7f8 / local_160;
  }
  if ((local_491 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_490);
  }
  local_488 = local_7f8;
  local_4a0 = local_138 * local_7f8;
  local_138 = local_130 * local_7f8;
  local_130 = local_138;
  if ((local_32 & 1) == 0) {
    _objc_msgSend_scrollView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_4c0 = _objc_msgSend_contentSize(uVar6,local_690);
    local_130 = local_7f8 - local_4a0;
    local_4b8 = local_7f8;
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  else {
    local_138 = local_4a0;
    _objc_msgSend_scrollView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_4b0 = (double)_objc_msgSend_contentSize(uVar6,local_690);
    local_138 = local_4b0 - local_130;
    local_4a8 = local_7f8;
    (*(code *)PTR__objc_release_00110458)(uVar6);
    local_130 = local_4a0;
  }
  local_4d0 = (double)_CGRectGetMidX(local_180,dStack_178,local_170,dStack_168);
  local_4c8 = (double)_CGRectGetMidY(local_180,dStack_178);
  local_4e0 = (double)(float)(int)(-local_4d0 + local_138);
  dStack_4d8 = (double)(float)(int)(-local_4c8 + local_130);
  dVar13 = local_130;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  local_508 = _objc_msgSend_contentInset(uVar6,local_690);
  dVar14 = -dVar13;
  local_500 = dVar13;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  local_538 = local_4e0;
  local_510 = local_4e0;
  local_828 = dVar14;
  if (dVar14 < local_4e0) {
    local_828 = local_4e0;
  }
  local_518 = local_828;
  local_4e0 = local_828;
  local_4e8 = dVar14;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  local_540 = (double)_objc_msgSend_contentInset(uVar6,local_690);
  dVar13 = -local_540;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  local_560 = dStack_4d8;
  local_548 = dStack_4d8;
  local_840 = dVar13;
  if (dVar13 < dStack_4d8) {
    local_840 = dStack_4d8;
  }
  local_550 = local_840;
  dStack_4d8 = local_840;
  local_520 = dVar13;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  dVar14 = (double)_objc_msgSend_contentSize(uVar6,local_690);
  local_568 = dVar14;
  dVar13 = (double)_CGRectGetMaxX(local_180,dStack_178,local_170,dStack_168);
  dVar14 = dVar14 - dVar13;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  dVar13 = local_4e0;
  local_570 = local_4e0;
  local_860 = dVar14;
  if (local_4e0 <= dVar14) {
    local_860 = local_4e0;
  }
  local_578 = local_860;
  local_4e0 = local_860;
  local_558 = dVar14;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  local_590 = _objc_msgSend_contentSize(uVar6,local_690);
  local_588 = dVar13;
  dVar14 = (double)_CGRectGetMaxY(local_180,dStack_178,local_170,dStack_168);
  dVar13 = dVar13 - dVar14;
  (*(code *)PTR__objc_release_00110458)(uVar6);
  local_5a8 = dStack_4d8;
  dVar14 = local_4e0;
  local_598 = dStack_4d8;
  local_880 = dVar13;
  if (dStack_4d8 <= dVar13) {
    local_880 = dStack_4d8;
  }
  local_5a0 = local_880;
  dStack_4d8 = local_880;
  local_580 = dVar13;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  dVar12 = (double)_objc_msgSend_contentOffset(uVar6,local_690);
  dVar13 = dStack_4d8;
  local_5c9 = 0;
  bVar3 = false;
  local_5b0 = dVar12;
  if (dVar14 == dVar12) {
    _objc_msgSend_scrollView(local_28,local_690);
    local_5c8 = _objc_retainAutoreleasedReturnValue();
    local_5c9 = 1;
    local_5c0 = _objc_msgSend_contentOffset(local_5c8,local_690);
    bVar3 = false;
    local_5b8 = dVar12;
    if (dVar13 == dVar12) {
      bVar3 = ABS(local_488 - 1.0) < 1.1920928955078125e-07;
    }
  }
  if ((local_5c9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_5c8);
  }
  (*(code *)PTR__objc_release_00110458)(uVar6);
  if (bVar3) {
    _objc_msgSend_matchForegroundToBackground(local_28,local_690);
  }
  dStack_5d8 = dStack_4d8;
  local_5e0 = local_4e0;
  _objc_msgSend_scrollView(local_28,local_690);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentOffset_(local_5e0,dStack_5d8,uVar6,local_690);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  if ((local_31 & 1) != 0) {
    local_600 = _CGRectGetMidX(local_d8,local_d0,local_c8,local_c0);
    uStack_608 = _CGRectGetMidY(local_d8,local_d0,local_c8,local_c0);
    local_610 = local_600;
    uStack_5f8 = uStack_608;
    _objc_msgSend_setCenter_(local_600,uStack_608,local_1e8,local_690);
    _objc_msgSend_addSubview_(local_28,local_690,local_1e8);
    _objc_msgSend_backgroundContainerView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar6,local_690,1);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_foregroundContainerView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar6,local_690,1);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_translucencyView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar6,local_690,1);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    _objc_msgSend_gridOverlayView(local_28,local_690);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar6,local_690,1);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_648 = PTR___NSConcreteStackBlock_001104f0;
    local_640 = 0xc2000000;
    local_63c = 0;
    local_638 = 
    ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke;
    local_630 = &___block_descriptor_49_e8_32s_e5_v8__0l;
    local_618 = local_32 & 1;
    local_620 = local_100;
    local_628 = (*(code *)PTR__objc_retain_00110460)(local_1e8);
    local_688 = puVar1;
    local_680 = 0xc2000000;
    local_67c = 0;
    local_678 = 
    ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke_2;
    local_670 = &___block_descriptor_57_e8_32s40s48bs_e8_v12__0B8l;
    local_668 = (*(code *)PTR__objc_retain_00110460)(local_28);
    local_660 = (*(code *)PTR__objc_retain_00110460)(local_1e8);
    local_650 = local_31 & 1;
    local_658 = (*(code *)PTR__objc_retain_00110460)(local_40);
    _objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
              (0x3fdcccccc0000000,0,0x3ff0000000000000,0x3fe99999a0000000,&_OBJC_CLASS___UIView,
               local_690,4,&local_648,&local_688);
    _objc_storeStrong(&local_658);
    _objc_storeStrong(&local_660,0);
    _objc_storeStrong(&local_668,0);
    _objc_storeStrong(&local_628,0);
  }
  _objc_msgSend_checkForCanReset(local_28,local_690);
  if (((local_31 & 1) == 0) && (local_40 != 0)) {
    (**(code **)(local_40 + 0x10))(local_40,1);
  }
  _objc_storeStrong(&local_1e8,0);
  local_44 = 0;
LAB_000ba7c0:
  _objc_storeStrong(&local_40,0);
  return;
}

