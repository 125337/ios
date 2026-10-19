// respondsToPan: @0x6e7fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageCell::respondsToPan_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ID IVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double in_d1;
  undefined8 in_d2;
  double dVar20;
  undefined8 in_d3;
  double dVar21;
  double local_498;
  double local_470;
  double local_460;
  uint local_414;
  double local_3f0;
  double local_3d0;
  double local_3a0;
  double local_390;
  undefined8 local_338;
  undefined8 local_1e8;
  long local_1d8;
  long local_1c8;
  long local_1b8;
  double local_1a0;
  undefined1 auStack_198 [48];
  undefined1 auStack_168 [48];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  byte local_f9;
  double local_f8;
  double local_f0;
  undefined1 local_e1;
  double local_e0;
  double local_d8;
  byte local_c9;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_91;
  long local_90;
  byte local_81;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_msgSend_wcm_yb_isRotating(local_28,local_338);
  lVar9 = _objc_retainAutoreleasedReturnValue();
  uVar8 = (**(code **)(lVar9 + 0x10))();
  (*(code *)PTR__objc_release_00110458)(lVar9);
  if ((uVar8 & 1) != 0) {
    local_3c = 1;
    goto LAB_0006f8f4;
  }
  _objc_msgSend_wcm_yb_cellData(local_28,local_338);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_interactionProfile(uVar10,local_338);
  local_48 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar10);
  uVar11 = _objc_msgSend_disable(local_48,local_338);
  if ((uVar11 & 1) == 0) {
    _objc_msgSend_imageScrollView(local_28,local_338);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_imageView(uVar10,local_338);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    local_68 = _objc_msgSend_frame(uVar12,local_338);
    uVar11 = _CGRectIsEmpty(local_68,in_d1,in_d2,in_d3);
    local_71 = 0;
    local_81 = 0;
    local_91 = 0;
    bVar7 = true;
    uVar1 = (uVar11 & 1) == 0;
    if ((bool)uVar1) {
      _objc_msgSend_imageScrollView(local_28,local_338);
      local_70 = _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      _objc_msgSend_imageView(local_70,local_338);
      local_80 = _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      _objc_msgSend_image(local_80,local_338);
      local_90 = _objc_retainAutoreleasedReturnValue();
      bVar7 = local_90 == 0;
      local_91 = uVar1;
      (*(code *)PTR__objc_release_00110458)(local_90);
      uVar1 = local_91;
    }
    local_91 = uVar1;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_70);
    }
    (*(code *)PTR__objc_release_00110458)(uVar12);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    if (bVar7) {
      local_3c = 1;
    }
    else {
      local_a8 = (double)_objc_msgSend_locationInView_(local_38,local_338,local_28);
      dStack_a0 = in_d1;
      _objc_msgSend_wcm_yb_containerSize(local_28,local_338);
      lVar9 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_currentOrientation(local_28,local_338);
      lVar13 = _objc_retainAutoreleasedReturnValue();
      uVar10 = (**(code **)(lVar13 + 0x10))();
      local_b8 = (**(code **)(lVar9 + 0x10))(lVar9,uVar10);
      local_b0 = in_d1;
      (*(code *)PTR__objc_release_00110458)(lVar13);
      (*(code *)PTR__objc_release_00110458)(lVar9);
      lVar9 = _objc_msgSend_state(local_38,local_338);
      if (lVar9 + -1 == 0) {
        lVar9 = (long)_interactStartPoint;
        ((double *)(local_28 + lVar9))[1] = dStack_a0;
        *(double *)(local_28 + lVar9) = local_a8;
        goto LAB_0006f8dc;
      }
      lVar9 = _objc_msgSend_state(lVar9 + -1,local_38,local_338);
      if (lVar9 + -4 == 0) {
LAB_0006ebc0:
        uVar10 = local_38;
        if ((*(byte *)(local_28 + (long)_interacting) & 1) != 0) {
          _objc_msgSend_imageScrollView(local_28,local_338);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          local_c8 = _objc_msgSend_velocityInView_(uVar10,local_338);
          local_c0 = in_d1;
          (*(code *)PTR__objc_release_00110458)(uVar12);
          local_d8 = local_c0;
          if (0.0 <= local_c0) {
            local_390 = local_c0;
          }
          else {
            local_390 = -local_c0;
          }
          local_e0 = local_390;
          dVar16 = (double)_objc_msgSend_dismissVelocityY(local_48,local_338);
          local_c9 = dVar16 < local_390;
          local_f0 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);
          local_3a0 = local_f0;
          if (local_f0 < 0.0) {
            local_3a0 = -local_f0;
          }
          local_f8 = local_3a0;
          dVar16 = (double)_objc_msgSend_dismissScale(local_48,local_338);
          IVar5 = local_28;
          local_e1 = local_b0 * dVar16 < local_3a0;
          bVar4 = 1;
          if (!(bool)local_e1) {
            bVar4 = local_c9;
          }
          local_f9 = bVar4 & 1;
          if ((bVar4 & 1) == 0) {
            _objc_msgSend_restoreDuration(local_48,local_338);
            _objc_msgSend_restoreInteractionWithDuration_(IVar5,local_338);
          }
          else {
            _objc_msgSend_hideBrowser(local_28,local_338);
          }
        }
      }
      else {
        lVar9 = _objc_msgSend_state(lVar9 + -4,local_38,local_338);
        if (lVar9 + -3 == 0) goto LAB_0006ebc0;
        lVar9 = _objc_msgSend_state(lVar9 + -3,local_38,local_338);
        if (lVar9 + -3 == 0) goto LAB_0006ebc0;
        lVar9 = _objc_msgSend_state(lVar9 + -3,local_38,local_338);
        if (lVar9 + -5 == 0) goto LAB_0006ebc0;
        lVar9 = _objc_msgSend_state(lVar9 + -5,local_38,local_338);
        if (lVar9 == 2) {
          if ((*(byte *)(local_28 + (long)_interacting) & 1) == 0) {
            dVar16 = (double)((undefined8 *)(local_28 + (long)_interactStartPoint))[1];
            dVar20 = *(double *)PTR__CGPointZero_00110850;
            dVar21 = *(double *)(PTR__CGPointZero_00110850 + 8);
            uVar11 = ___CGPointEqualToPoint(*(undefined8 *)(local_28 + (long)_interactStartPoint));
            bVar3 = false;
            bVar7 = false;
            bVar2 = false;
            bVar6 = false;
            local_414 = 1;
            if ((uVar11 & 1) == 0) {
              _objc_msgSend_wcm_yb_currentPage(local_28,local_338);
              local_1b8 = _objc_retainAutoreleasedReturnValue();
              bVar3 = true;
              lVar9 = (**(code **)(local_1b8 + 0x10))();
              _objc_msgSend_wcm_yb_selfPage(local_28,local_338);
              local_1c8 = _objc_retainAutoreleasedReturnValue();
              bVar7 = true;
              lVar13 = (**(code **)(local_1c8 + 0x10))();
              local_414 = 1;
              if (lVar9 == lVar13) {
                _objc_msgSend_wcm_yb_cellIsInCenter(0,local_28,local_338);
                local_1d8 = _objc_retainAutoreleasedReturnValue();
                bVar2 = true;
                uVar11 = (**(code **)(local_1d8 + 0x10))();
                local_414 = 1;
                if ((uVar11 & 1) != 0) {
                  _objc_msgSend_imageScrollView(local_28,local_338);
                  local_1e8 = _objc_retainAutoreleasedReturnValue();
                  bVar6 = true;
                  local_414 = _objc_msgSend_isZooming(local_1e8,local_338);
                }
              }
            }
            if (bVar6) {
              (*(code *)PTR__objc_release_00110458)(local_1e8);
            }
            if (bVar2) {
              (*(code *)PTR__objc_release_00110458)(local_1d8);
            }
            if (bVar7) {
              (*(code *)PTR__objc_release_00110458)(local_1c8);
            }
            if (bVar3) {
              (*(code *)PTR__objc_release_00110458)(local_1b8);
            }
            uVar10 = local_38;
            if ((local_414 & 1) == 0) {
              _objc_msgSend_imageScrollView(local_28,local_338);
              uVar12 = _objc_retainAutoreleasedReturnValue();
              local_470 = (double)_objc_msgSend_velocityInView_(uVar10,local_338);
              (*(code *)PTR__objc_release_00110458)(uVar12);
              dVar17 = (double)_objc_msgSend_triggerDistance(local_48,local_338);
              _objc_msgSend_imageScrollView(local_28,local_338);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_contentOffset(uVar10,local_338);
              (*(code *)PTR__objc_release_00110458)(uVar10);
              _objc_msgSend_imageScrollView(local_28,local_338);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_bounds(uVar10,local_338);
              dVar19 = dVar21;
              (*(code *)PTR__objc_release_00110458)(uVar10);
              local_460 = local_a8 - *(double *)(local_28 + (long)_interactStartPoint);
              if (local_460 < 0.0) {
                local_460 = -local_460;
              }
              bVar7 = false;
              if (local_460 < dVar17) {
                if (local_470 < 0.0) {
                  local_470 = -local_470;
                }
                bVar7 = local_470 < 500.0;
              }
              dVar18 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);
              bVar6 = false;
              if (dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8) < -dVar17) {
                local_498 = dVar21;
                _objc_msgSend_imageScrollView(local_28,local_338);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_contentSize(uVar10,local_338);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                if (local_498 < dVar21) {
                  local_498 = dVar21;
                }
                dVar20 = 1.0;
                bVar6 = local_498 - 1.0 <= dVar16 + dVar21;
              }
              if ((dVar17 < dVar18 && dVar16 <= 1.0) || (bVar2 = false, bVar6)) {
                bVar2 = bVar7;
              }
              if (bVar2) {
                lVar9 = (long)_interactStartPoint;
                ((double *)(local_28 + lVar9))[1] = dStack_a0;
                *(double *)(local_28 + lVar9) = local_a8;
                _objc_msgSend_imageScrollView(local_28,local_338);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_frame(uVar10,local_338);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                dVar19 = dStack_a0 / dVar19;
                uVar14 = _CGPointMake(local_a8 / dVar20);
                _objc_msgSend_imageScrollView(local_28,local_338);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_layer(uVar10,local_338);
                uVar12 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_setAnchorPoint_(uVar14,dVar19,uVar12,local_338);
                (*(code *)PTR__objc_release_00110458)(uVar12);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                _objc_msgSend_imageScrollView(local_28,local_338);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_setUserInteractionEnabled_(uVar10,local_338,0);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                _objc_msgSend_imageScrollView(local_28,local_338);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_setScrollEnabled_(uVar10,local_338,0);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                dVar16 = local_a8;
                _objc_msgSend_imageScrollView(local_28,local_338);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_setCenter_(dVar16,dStack_a0,uVar10,local_338);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                _objc_msgSend_wcm_yb_hideToolViews(local_28,local_338);
                lVar9 = _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar9 + 0x10))(lVar9,1);
                (*(code *)PTR__objc_release_00110458)(lVar9);
                _objc_msgSend_wcm_yb_hideStatusBar(local_28,local_338);
                lVar9 = _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar9 + 0x10))(lVar9,0);
                (*(code *)PTR__objc_release_00110458)(lVar9);
                _objc_msgSend_wcm_yb_collectionView(local_28,local_338);
                lVar9 = _objc_retainAutoreleasedReturnValue();
                (**(code **)(lVar9 + 0x10))();
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_setScrollEnabled_(uVar10,local_338,0);
                (*(code *)PTR__objc_release_00110458)(uVar10);
                (*(code *)PTR__objc_release_00110458)(lVar9);
                _objc_msgSend_hideTailoringImageView(local_28,local_338);
                *(undefined1 *)(local_28 + (long)_interacting) = 1;
                goto LAB_0006f8dc;
              }
              local_3c = 1;
            }
            else {
              local_3c = 1;
            }
            goto LAB_0006f8e4;
          }
          dStack_108 = dStack_a0;
          local_110 = local_a8;
          _objc_msgSend_imageScrollView(local_28,local_338);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          dStack_118 = dStack_108;
          local_120 = local_110;
          _objc_msgSend_setCenter_(local_110,dStack_108,uVar10,local_338);
          (*(code *)PTR__objc_release_00110458)(uVar10);
          local_130 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);
          local_3d0 = local_130;
          if (local_130 < 0.0) {
            local_3d0 = -local_130;
          }
          local_138 = local_3d0;
          local_128 = 1.0 - local_3d0 / (local_b0 * 1.2);
          if (1.0 < local_128) {
            local_128 = 1.0;
          }
          if (local_128 < 0.35) {
            local_128 = 0.35;
          }
          _CGAffineTransformMakeScale(local_128,local_128);
          _objc_msgSend_imageScrollView(local_28,local_338);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          _memcpy(auStack_198,auStack_168,0x30);
          _objc_msgSend_setTransform_(uVar10,local_338,auStack_198);
          (*(code *)PTR__objc_release_00110458)(uVar10);
          local_3f0 = dStack_a0 - *(double *)(local_28 + (long)_interactStartPoint + 8);
          if (local_3f0 < 0.0) {
            local_3f0 = -local_3f0;
          }
          local_1a0 = 1.0 - local_3f0 / (local_b0 * 0.7);
          if (1.0 < local_1a0) {
            local_1a0 = 1.0;
          }
          if (local_1a0 < 0.0) {
            local_1a0 = 0.0;
          }
          _objc_msgSend_wcm_yb_backView(local_28,local_338);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_backgroundColor(uVar10,local_338);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_colorWithAlphaComponent_(local_1a0,uVar12,local_338);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_wcm_yb_backView(local_28,local_338);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setBackgroundColor_(uVar15,local_338,uVar14);
          (*(code *)PTR__objc_release_00110458)(uVar15);
          (*(code *)PTR__objc_release_00110458)(uVar14);
          (*(code *)PTR__objc_release_00110458)(uVar12);
          (*(code *)PTR__objc_release_00110458)(uVar10);
        }
      }
LAB_0006f8dc:
      local_3c = 0;
    }
  }
  else {
    local_3c = 1;
  }
LAB_0006f8e4:
  _objc_storeStrong(&local_48,0);
LAB_0006f8f4:
  _objc_storeStrong(&local_38,0);
  return;
}

