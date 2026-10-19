// updateCropBoxFrameWithGesturePoint: @0xb2408

/* Function Stack Size: 0x20 bytes */

void WCMTOCropView::updateCropBoxFrameWithGesturePoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double in_d2;
  double dVar15;
  double dVar16;
  double in_d3;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  double local_798;
  double local_768;
  double local_730;
  double local_728;
  double local_720;
  double local_6e0;
  double local_6d8;
  double local_6d0;
  double local_6b8;
  double local_6b0;
  double local_698;
  double local_690;
  double local_678;
  double local_670;
  double local_658;
  double local_638;
  double local_628;
  undefined8 local_620;
  double local_490;
  double local_488;
  double local_480;
  double dStack_478;
  double local_d8;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  dVar9 = param_3.field1_0x8;
  dStack_58 = dVar9;
  local_60 = (double)_objc_msgSend_cropBoxFrame(param_1);
  dVar13 = dStack_58;
  dVar15 = in_d2;
  dVar17 = in_d3;
  dVar7 = (double)_objc_msgSend_cropOriginFrame(param_1,local_620);
  dVar14 = dVar13;
  dVar16 = dVar15;
  dVar18 = dVar17;
  dVar8 = (double)_objc_msgSend_contentBounds(param_1,local_620);
  local_628 = (double)_objc_msgSend_cropViewPadding(param_1,local_620);
  local_628 = dVar8 - local_628;
  if (local_628 < param_3.field0_0x0) {
    local_628 = param_3.field0_0x0;
  }
  local_638 = (double)_objc_msgSend_cropViewPadding(param_1,local_620);
  local_638 = dVar14 - local_638;
  if (local_638 < dVar9) {
    local_638 = dVar9;
  }
  dVar9 = (double)_objc_msgSend_panOriginPoint(param_1,local_620);
  local_728 = (double)(float)(int)(local_628 - dVar9);
  _objc_msgSend_panOriginPoint(param_1,local_620);
  local_730 = (double)(float)(int)(local_638 - dVar9);
  dVar9 = dVar15 / dVar17;
  bVar1 = false;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  lVar5 = _objc_msgSend_tappedEdge(param_1,local_620);
  local_50 = in_d2;
  dStack_48 = in_d3;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar10 = dVar15 - local_728;
        dVar11 = dVar17 - local_730;
        local_720 = dVar11;
        if (dVar11 < dVar10) {
          local_720 = dVar10;
          dVar10 = dVar11;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_720) {
          local_60 = dVar7 + local_728;
          local_50 = dVar15 - local_728;
          dStack_58 = dVar13 + local_730;
          dStack_48 = dVar17 - local_730;
        }
      }
      else {
        local_6d8 = local_728;
        if (local_728 < 0.0) {
          local_6d8 = 0.0;
        }
        local_6e0 = local_730;
        if (local_730 < 0.0) {
          local_6e0 = 0.0;
        }
        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dVar10 = ((1.0 - local_6d8 / dVar10) + (1.0 - local_6e0 / dVar11)) * 0.5;
        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        local_50 = (double)(float)(int)(dVar11 * dVar10);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dStack_48 = (double)(float)(int)(dVar11 * dVar10);
        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        local_60 = dVar7 + (dVar10 - local_50);
        dVar10 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dStack_58 = dVar13 + (dVar10 - dStack_48);
        bVar2 = true;
        bVar1 = true;
      }
      bVar4 = true;
      bVar3 = true;
    }
    else if (lVar5 == 2) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar11 = dVar17 - local_730;
        local_6d0 = dVar11;
        dVar10 = dVar15;
        if (dVar11 < dVar15) {
          local_6d0 = dVar15;
          dVar10 = dVar11;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_6d0) {
          dStack_58 = dVar13 + local_730;
          dStack_48 = dVar17 - local_730;
        }
      }
      else {
        bVar2 = true;
        local_6b8 = local_730;
        if (local_730 <= 0.0) {
          local_6b8 = 0.0;
        }
        local_60 = (double)_CGRectGetMidX(dVar7,dVar13,dVar15,dVar17);
        _CGRectGetMaxY(dVar7,dVar13,dVar15,dVar17);
        local_50 = in_d3 * dVar9;
        local_60 = local_60 - local_50 * 0.5;
        dStack_58 = dVar13 + local_6b8;
        dStack_48 = dVar17 - local_6b8;
      }
      bVar4 = true;
    }
    else if (lVar5 == 3) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar10 = dVar15 + local_728;
        dVar11 = dVar17 - local_730;
        local_768 = dVar11;
        if (dVar11 < dVar10) {
          local_768 = dVar10;
          dVar10 = dVar11;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_768) {
          local_50 = dVar15 + local_728;
          dStack_58 = dVar13 + local_730;
          dStack_48 = dVar17 - local_730;
        }
      }
      else {
        if (0.0 <= local_728) {
          local_728 = 0.0;
        }
        if (local_730 < 0.0) {
          local_730 = 0.0;
        }
        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dVar10 = ((1.0 - -local_728 / dVar10) + (1.0 - local_730 / dVar11)) * 0.5;
        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        local_50 = (double)(float)(int)(dVar11 * dVar10);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dStack_48 = (double)(float)(int)(dVar11 * dVar10);
        dVar10 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dStack_58 = dVar13 + (dVar10 - dStack_48);
        bVar2 = true;
        bVar1 = true;
      }
      bVar4 = true;
    }
    else if (lVar5 == 4) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar10 = dVar15 + local_728;
        local_690 = dVar17;
        if (dVar17 < dVar10) {
          local_690 = dVar10;
          dVar10 = dVar17;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_690) {
          local_50 = dVar15 + local_728;
        }
      }
      else {
        bVar1 = true;
        _CGRectGetMinX(dVar7,dVar13,dVar15,dVar17);
        dStack_58 = (double)_CGRectGetMidY(dVar7,dVar13,dVar15,dVar17);
        dStack_48 = in_d2 / dVar9;
        dStack_58 = dStack_58 - dStack_48 * 0.5;
        local_678 = dVar18 * dVar9;
        if (dVar15 + local_728 < local_678) {
          local_678 = dVar15 + local_728;
        }
        local_50 = local_678;
      }
    }
    else if (lVar5 == 5) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar10 = dVar15 + local_728;
        dVar11 = dVar17 + local_730;
        local_7d0 = dVar11;
        if (dVar11 < dVar10) {
          local_7d0 = dVar10;
          dVar10 = dVar11;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_7d0) {
          dStack_48 = dVar17 + local_730;
          local_50 = dVar15 + local_728;
        }
      }
      else {
        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dVar10 = ((1.0 - (local_728 * -1.0) / dVar10) + (1.0 - (local_730 * -1.0) / dVar11)) * 0.5;
        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        local_50 = (double)(float)(int)(dVar11 * dVar10);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dStack_48 = (double)(float)(int)(dVar11 * dVar10);
        bVar2 = true;
        bVar1 = true;
      }
    }
    else if (lVar5 == 6) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar11 = dVar17 + local_730;
        local_6b0 = dVar11;
        dVar10 = dVar15;
        if (dVar11 < dVar15) {
          local_6b0 = dVar15;
          dVar10 = dVar11;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_6b0) {
          dStack_48 = dVar17 + local_730;
        }
      }
      else {
        bVar2 = true;
        local_60 = (double)_CGRectGetMidX(dVar7,dVar13,dVar15,dVar17);
        _CGRectGetMinY(dVar7,dVar13,dVar15,dVar17);
        local_50 = in_d3 * dVar9;
        local_60 = local_60 - local_50 * 0.5;
        local_698 = dVar16 / dVar9;
        if (dVar17 + local_730 < local_698) {
          local_698 = dVar17 + local_730;
        }
        dStack_48 = local_698;
      }
    }
    else if (lVar5 == 7) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      if ((uVar6 & 1) == 0) {
        dVar10 = dVar15 - local_728;
        dVar11 = dVar17 + local_730;
        local_798 = dVar11;
        if (dVar11 < dVar10) {
          local_798 = dVar10;
          dVar10 = dVar11;
        }
        if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_798) {
          dStack_48 = dVar17 + local_730;
          local_60 = dVar7 + local_728;
          local_50 = dVar15 - local_728;
        }
      }
      else {
        dVar10 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dVar10 = ((1.0 - local_728 / dVar10) + (1.0 - -local_730 / dVar11)) * 0.5;
        dVar11 = (double)_CGRectGetWidth(dVar7,dVar13,dVar15,dVar17);
        local_50 = (double)(float)(int)(dVar11 * dVar10);
        dVar11 = (double)_CGRectGetHeight(dVar7,dVar13,dVar15,dVar17);
        dStack_48 = (double)(float)(int)(dVar11 * dVar10);
        local_60 = (double)_CGRectGetMaxX(dVar7,dVar13,dVar15,dVar17);
        local_60 = local_60 - local_50;
        bVar2 = true;
        bVar1 = true;
      }
      bVar3 = true;
    }
    else if (lVar5 == 8) {
      uVar6 = _objc_msgSend_aspectRatioLockEnabled(0,param_1,local_620);
      local_d8 = local_728;
      if ((uVar6 & 1) != 0) {
        bVar1 = true;
        local_658 = local_728;
        if (local_728 < 0.0) {
          local_658 = 0.0;
        }
        local_d8 = local_658;
        _CGRectGetMaxX(dVar7,dVar13,dVar15,dVar17);
        dStack_58 = (double)_CGRectGetMidY(dVar7,dVar13,dVar15,dVar17);
        dStack_48 = in_d2 / dVar9;
        dStack_58 = dStack_58 - dStack_48 * 0.5;
      }
      dVar10 = dVar15 - local_d8;
      local_670 = dVar17;
      if (dVar17 < dVar10) {
        local_670 = dVar10;
        dVar10 = dVar17;
      }
      if (*(double *)(param_1 + (long)_minimumAspectRatio) <= dVar10 / local_670) {
        local_60 = dVar7 + local_d8;
        local_50 = dVar15 - local_d8;
      }
      bVar3 = true;
    }
  }
  dStack_478 = 42.0;
  local_480 = 42.0;
  local_490 = (double)_CGRectGetWidth(dVar8,dVar14,dVar16,dVar18);
  dVar10 = dVar14;
  dVar11 = dVar16;
  dVar19 = dVar18;
  local_488 = (double)_CGRectGetHeight(dVar8);
  uVar6 = _objc_msgSend_aspectRatioLockEnabled(param_1,local_620);
  if (((uVar6 & 1) != 0) && (bVar1)) {
    local_488 = dVar16 / dVar9;
    local_480 = dVar9 * 42.0;
    dVar10 = dVar9;
  }
  uVar6 = _objc_msgSend_aspectRatioLockEnabled(param_1,local_620);
  if (((uVar6 & 1) != 0) && (bVar2)) {
    local_490 = dVar18 * dVar9;
    dStack_478 = 42.0 / dVar9;
    dVar10 = dVar9;
  }
  if (bVar3) {
    uVar12 = _objc_msgSend_cropOriginFrame(param_1,local_620);
    dVar10 = (double)_CGRectGetMaxX(uVar12,dVar10);
    dVar10 = dVar10 - dVar8;
    local_7d8 = dVar10;
    if (local_50 < dVar10) {
      local_7d8 = local_50;
    }
    local_50 = local_7d8;
  }
  if (bVar4) {
    uVar12 = _objc_msgSend_cropOriginFrame(param_1,local_620);
    local_7e0 = (double)_CGRectGetMaxY(uVar12,dVar10,dVar11,dVar19);
    local_7e0 = local_7e0 - dVar14;
    if (dStack_48 < local_7e0) {
      local_7e0 = dStack_48;
    }
    dStack_48 = local_7e0;
  }
  if (local_480 <= local_50) {
    local_7e8 = local_50;
  }
  else {
    local_7e8 = local_480;
  }
  if (dStack_478 <= dStack_48) {
    local_7f0 = dStack_48;
  }
  else {
    local_7f0 = dStack_478;
  }
  if (local_490 <= local_7e8) {
    local_7f8 = local_490;
  }
  else {
    local_7f8 = local_7e8;
  }
  if (local_488 <= local_7f0) {
    local_800 = local_488;
  }
  else {
    local_800 = local_7f0;
  }
  local_808 = (double)_CGRectGetMinX(dVar8,dVar14,dVar16,dVar18);
  if (local_808 <= local_60) {
    local_808 = local_60;
  }
  local_810 = (double)_CGRectGetMaxX(dVar8,dVar14,dVar16,dVar18);
  local_810 = local_810 - local_480;
  if (local_808 < local_810) {
    local_810 = local_808;
  }
  local_60 = local_810;
  local_818 = (double)_CGRectGetMinY(dVar8,dVar14,dVar16,dVar18);
  if (local_818 <= dStack_58) {
    local_818 = dStack_58;
  }
  local_820 = (double)_CGRectGetMaxY(dVar8,dVar14,dVar16,dVar18);
  local_820 = local_820 - dStack_478;
  if (local_818 < local_820) {
    local_820 = local_818;
  }
  dStack_58 = local_820;
  if ((bVar3) && (local_7f8 <= local_480 + 1.1920928955078125e-07)) {
    local_60 = (double)_CGRectGetMaxX(dVar7,dVar13,dVar15,dVar17);
    local_60 = local_60 - local_480;
  }
  if ((bVar4) && (local_800 <= dStack_478 + 1.1920928955078125e-07)) {
    dStack_58 = (double)_CGRectGetMaxY(dVar7,dVar13,dVar15,dVar17);
    dStack_58 = dStack_58 - dStack_478;
  }
  _objc_msgSend_setCropBoxFrame_(local_60,dStack_58,local_7f8,local_800,param_1,local_620);
  _objc_msgSend_checkForCanReset(param_1,local_620);
  return;
}

