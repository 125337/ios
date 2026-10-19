// setCropBoxFrame: @0xb5cbc

/* WARNING: Removing unreachable block (ram,0x000b5e44) */
/* WARNING: Removing unreachable block (ram,0x000b5e54) */
/* WARNING: Removing unreachable block (ram,0x000b5e58) */
/* WARNING: Removing unreachable block (ram,0x000b5e60) */
/* WARNING: Removing unreachable block (ram,0x000b5dc8) */
/* WARNING: Removing unreachable block (ram,0x000b5dd8) */
/* WARNING: Removing unreachable block (ram,0x000b5ddc) */
/* WARNING: Removing unreachable block (ram,0x000b5de4) */
/* WARNING: Removing unreachable block (ram,0x000b5d74) */
/* WARNING: Removing unreachable block (ram,0x000b5d8c) */
/* WARNING: Removing unreachable block (ram,0x000b5d90) */
/* WARNING: Removing unreachable block (ram,0x000b5d98) */
/* WARNING: Removing unreachable block (ram,0x000b5df0) */
/* WARNING: Removing unreachable block (ram,0x000b5e08) */
/* WARNING: Removing unreachable block (ram,0x000b5e0c) */
/* WARNING: Removing unreachable block (ram,0x000b5e14) */
/* WARNING: Removing unreachable block (ram,0x000b5e64) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void WCMTOCropView::setCropBoxFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double local_3d0;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  undefined8 local_330;
  double local_58;
  double dStack_50;
  
  dStack_50 = param_3.field1_0x10.field1_0x8;
  local_58 = param_3.field1_0x10.field0_0x0;
  local_340 = param_3.field0_0x0.field1_0x8;
  local_338 = param_3.field0_0x0.field0_0x0;
  puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);
  dVar11 = local_58;
  dVar10 = dStack_50;
  uVar3 = _CGRectEqualToRect(local_338,local_340,local_58,dStack_50,*puVar1,puVar1[1],puVar1[2],
                             puVar1[3]);
  if ((((uVar3 & 1) == 0) && (1.1920928955078125e-07 <= local_58)) &&
     (1.1920928955078125e-07 <= dStack_50)) {
    dVar12 = dStack_50;
    dVar7 = (double)_objc_msgSend_contentBounds(param_1,local_330);
    dVar8 = (double)(float)(int)dVar7;
    dVar9 = local_338 - dVar8;
    if (local_338 < dVar8) {
      local_338 = dVar8;
    }
    if (dVar9 < -1.1920928955078125e-07) {
      local_58 = local_58 + dVar9;
    }
    dVar8 = (double)(float)(int)dVar12;
    dVar9 = local_340 - dVar8;
    if (local_340 < dVar8) {
      local_340 = dVar8;
    }
    if (dVar9 < -1.1920928955078125e-07) {
      dStack_50 = dStack_50 + dVar9;
    }
    local_348 = (dVar11 + dVar7) - (double)(float)(int)local_338;
    if (local_58 < local_348) {
      local_348 = local_58;
    }
    local_358 = (double)(float)(int)local_348;
    local_350 = (dVar10 + dVar12) - (double)(float)(int)local_340;
    if (dStack_50 < local_350) {
      local_350 = dStack_50;
    }
    local_360 = (double)(float)(int)local_350;
    if (local_358 < 42.0) {
      local_358 = 42.0;
    }
    if (local_360 < 42.0) {
      local_360 = 42.0;
    }
    pdVar2 = (double *)(param_1 + (long)_cropBoxFrame);
    pdVar2[1] = (double)(float)(int)local_340;
    *pdVar2 = (double)(float)(int)local_338;
    pdVar2[3] = local_360;
    pdVar2[2] = local_358;
    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);
    uVar14 = puVar1[1];
    uVar6 = *puVar1;
    uVar15 = puVar1[3];
    uVar13 = puVar1[2];
    _objc_msgSend_foregroundContainerView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(uVar6,uVar14,uVar13,uVar15,uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar6 = *(undefined8 *)(param_1 + (long)_cropBoxFrame);
    dVar11 = (double)((undefined8 *)(param_1 + (long)_cropBoxFrame))[2];
    _objc_msgSend_gridOverlayView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setFrame_(uVar6,uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    lVar5 = _objc_msgSend_croppingStyle(param_1,local_330);
    if (lVar5 == 1) {
      _objc_msgSend_foregroundContainerView(0,param_1,local_330);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_frame(uVar4,local_330);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_foregroundContainerView(param_1,local_330);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_layer(uVar4,local_330);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setCornerRadius_(dVar11 * 0.5,uVar6,local_330);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);
    uVar6 = _CGRectGetMinY(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);
    uVar13 = puVar1[1];
    uVar14 = puVar1[2];
    uVar15 = puVar1[3];
    _CGRectGetMinX(*puVar1);
    uVar4 = _objc_msgSend_bounds(param_1,local_330);
    dVar10 = (double)_CGRectGetMaxY(uVar4,uVar13,uVar14,uVar15);
    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);
    uVar13 = puVar1[2];
    uVar14 = puVar1[3];
    dVar11 = (double)_CGRectGetMaxY(*puVar1,puVar1[1]);
    dVar10 = dVar10 - dVar11;
    uVar4 = _objc_msgSend_bounds(param_1,local_330);
    local_3d0 = (double)_CGRectGetMaxX(uVar4,dVar11,uVar13,uVar14);
    puVar1 = (undefined8 *)(param_1 + (long)_cropBoxFrame);
    dVar11 = (double)_CGRectGetMaxX(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    local_3d0 = local_3d0 - dVar11;
    _objc_msgSend_scrollView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setContentInset_(uVar6,uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_backgroundContainerView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_bounds(uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_3d0 = local_360 / local_3d0;
    local_358 = local_358 / dVar10;
    if (local_3d0 < local_358) {
      local_3d0 = local_358;
    }
    _objc_msgSend_scrollView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setMinimumZoomScale_(local_3d0,uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_updateScrollViewMaximumZoomScale(param_1,local_330);
    _objc_msgSend_scrollView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar11 = (double)_objc_msgSend_contentSize(uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_scrollView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setContentSize_
              ((double)(float)(int)dVar11,(double)(float)(int)local_358,uVar4,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_scrollView(param_1,local_330);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar13 = _objc_msgSend_zoomScale(uVar4,local_330);
    _objc_msgSend_scrollView(param_1,local_330);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setZoomScale_(uVar13,uVar6,local_330);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _objc_msgSend_matchForegroundToBackground(param_1,local_330);
  }
  return;
}

