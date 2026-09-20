// forceAvatarGeometryReapplyFrame: @ 01af2f28

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void __thiscall
WCRefineHomeAvatarStripCellView::forceAvatarGeometryReapplyFrame_
          (WCRefineHomeAvatarStripCellView *this,ID param_1,SEL param_2,bool param_3)

{
  ulong uVar1;
  byte bVar2;
  ID IVar3;
  ID IVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  double in_d0;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint local_4e4;
  ulong local_4b8;
  ulong local_4b0;
  double local_450;
  ulong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  double local_420;
  double dStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_368;
  double local_360;
  undefined1 auStack_348 [48];
  undefined1 auStack_318 [48];
  undefined1 auStack_2e8 [48];
  undefined1 auStack_2b8 [48];
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 auStack_248 [48];
  undefined1 auStack_218 [55];
  byte local_1e1;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  byte local_1a9;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  byte local_c9;
  double local_c8;
  byte local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = (byte)param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarSize_026b1090);
  if (in_d0 <= 1.0) {
    local_450 = 52.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarSize_026b1090);
    local_450 = in_d0;
  }
  local_c8 = local_450;
  dVar10 = local_450;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastGeometrySize_026be618);
  local_c9 = 0.5 < ABS(local_450 - dVar10);
  uVar13 = 0;
  uVar11 = 0;
  dVar10 = local_c8;
  dVar15 = local_c8;
  FUN_01af1c8c();
  IVar3 = local_b0;
  local_f0 = uVar11;
  uStack_e8 = uVar13;
  local_e0 = dVar10;
  dStack_d8 = dVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_e8;
  local_110 = local_f0;
  dStack_f8 = dStack_d8;
  local_100 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,uStack_e8,local_e0,dStack_d8);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_118 = 0;
  local_120 = 0;
  _memset(auStack_168,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_4b0 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
  if (local_4b0 != 0) {
    lVar8 = *local_158;
    local_4b8 = 0;
    do {
      do {
        if (*local_158 - lVar8 != 0) {
          _objc_enumerationMutation(*local_158 - lVar8,IVar4);
        }
        uVar9 = *(ulong *)(local_160 + local_4b8 * 8);
        local_128 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_tag_026cab98);
        if ((uVar9 == 0x24f6e4) ||
           (uVar9 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_tag_026cab98),
           uVar9 == 0x24f6e5)) {
          local_120 = local_120 + 1;
        }
        else {
          local_118 = local_118 + 1;
          dVar14 = 0.0;
          dVar12 = 0.0;
          dVar16 = local_c8;
          dVar17 = local_c8;
          FUN_01af1c8c();
          uVar13 = 0;
          uVar11 = uVar13;
          dVar10 = local_c8;
          dVar15 = local_c8;
          local_188 = dVar12;
          dStack_180 = dVar14;
          local_178 = dVar16;
          dStack_170 = dVar17;
          FUN_01af1c8c();
          uVar9 = local_128;
          local_1a8 = uVar13;
          uStack_1a0 = uVar11;
          local_198 = dVar10;
          dStack_190 = dVar15;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bounds_026ca548);
          bVar2 = (byte)uVar9;
          dVar16 = local_178;
          dVar17 = dStack_170;
          local_1e0 = uVar13;
          local_1d8 = uVar11;
          local_1d0 = dVar10;
          dStack_1c8 = dVar15;
          local_1c0 = dVar10;
          dStack_1b8 = dVar15;
          FUN_01af1cd8();
          local_1a9 = (bVar2 ^ 1) & 1;
          if (local_128 == 0) {
            _memset(auStack_218,0,0x30);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(auStack_218,local_128,PTR_s_transform_0269e178);
          }
          _memcpy(auStack_248,PTR__CGAffineTransformIdentity_025782d8,0x30);
          puVar5 = auStack_218;
          _CGAffineTransformEqualToTransform(puVar5,auStack_248);
          local_4e4 = 1;
          if (((ulong)puVar5 & 1) != 0) {
            uVar9 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bounds_026ca548);
            local_268 = dVar10;
            local_260 = dVar15;
            local_258 = dVar16;
            local_250 = dVar17;
            _CGRectEqualToRect();
            local_4e4 = 1;
            if ((uVar9 & 1) != 0) {
              uVar9 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_frame_026ca640);
              local_4e4 = (uint)uVar9;
              local_288 = dVar10;
              local_280 = dVar15;
              local_278 = dVar16;
              local_270 = dVar17;
              _CGRectEqualToRect();
              local_4e4 = local_4e4 ^ 1;
            }
          }
          local_1e1 = (byte)local_4e4 & 1;
          if ((local_4e4 & 1) != 0) {
            if (local_128 == 0) {
              _memset(auStack_2b8,0,0x30);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(auStack_2b8,local_128,PTR_s_transform_0269e178);
            }
            _memcpy(auStack_2e8,PTR__CGAffineTransformIdentity_025782d8,0x30);
            puVar5 = auStack_2b8;
            _CGAffineTransformEqualToTransform(puVar5,auStack_2e8);
            if (((ulong)puVar5 & 1) == 0) {
              _memcpy(auStack_318,PTR__CGAffineTransformIdentity_025782d8,0x30);
              uVar9 = local_128;
              _memcpy(auStack_348,auStack_318,0x30);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_setTransform__026caad0,auStack_348);
            }
            uVar9 = local_128;
            if ((local_1a9 & 1) != 0) {
              pcVar6 = &cf_setImageSize_;
              _NSSelectorFromString(&cf_setImageSize_);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_respondsToSelector__026ca818,pcVar6)
              ;
              uVar1 = local_128;
              if ((uVar9 & 1) != 0) {
                pcVar6 = &cf_setImageSize_;
                _NSSelectorFromString();
                dVar10 = local_c8;
                dVar15 = local_c8;
                FUN_01af1d30();
                local_368 = dVar10;
                local_360 = dVar15;
                (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar6);
              }
            }
            uVar9 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bounds_026ca548);
            local_390 = dVar10;
            local_388 = dVar15;
            local_380 = dVar16;
            local_378 = dVar17;
            _CGRectEqualToRect();
            if ((uVar9 & 1) == 0) {
              dStack_3c8 = dStack_180;
              local_3d0 = local_188;
              dStack_3b8 = dStack_170;
              local_3c0 = local_178;
              dVar10 = local_188;
              dVar15 = dStack_180;
              dVar16 = local_178;
              dVar17 = dStack_170;
              local_3b0 = local_3d0;
              dStack_3a8 = dStack_3c8;
              local_3a0 = local_3c0;
              dStack_398 = dStack_3b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setBounds__026ca8a0);
            }
            uVar9 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_frame_026ca640);
            local_3f0 = dVar10;
            local_3e8 = dVar15;
            local_3e0 = dVar16;
            local_3d8 = dVar17;
            _CGRectEqualToRect(dVar10,dVar15,dVar16,dVar17,local_1a8,uStack_1a0,local_198,dStack_190
                              );
            if ((uVar9 & 1) == 0) {
              uStack_428 = uStack_1a0;
              local_430 = local_1a8;
              dStack_418 = dStack_190;
              local_420 = local_198;
              local_410 = local_430;
              uStack_408 = uStack_428;
              local_400 = local_420;
              dStack_3f8 = dStack_418;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a8,uStack_1a0,local_198,dStack_190,local_128,
                         PTR_s_setFrame__026ca960);
            }
          }
          uVar9 = local_128;
          _objc_getAssociatedObject(local_128,&DAT_028e4570);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          local_438 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar7);
          if ((uVar9 & 1) != 0) {
            FUN_01af1d5c(local_128,local_438);
          }
          if ((local_1e1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setNeedsLayout_0269deb8);
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_layoutIfNeeded_026ca790);
          }
          if (((local_b9 & 1) != 0) || ((local_c9 & 1) != 0)) {
            pcVar6 = &cf_wcr_reapplyAvatarDecorationsAfterScale;
            _NSSelectorFromString();
            uVar9 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_respondsToSelector__026ca818,pcVar6);
            if ((uVar9 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_128,pcVar6);
            }
          }
          _objc_storeStrong(&local_438,0);
        }
        local_4b8 = local_4b8 + 1;
      } while (local_4b8 < local_4b0);
      local_4b0 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10);
      local_4b8 = 0;
    } while (local_4b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_b0,PTR_s_setLastGeometrySize__026be620);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarHost_026b1098);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

