// compositeFloatingOverlaysOntoImage:cropViewRect: @ 0165f63c

/* Function Stack Size: 0x38 bytes */

ID WCRSuperFloatCropViewController::compositeFloatingOverlaysOntoImage_cropViewRect_
             (ID param_1,SEL param_2,ID param_3,CGRect param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_d1;
  double dVar12;
  double dVar13;
  double dVar14;
  double in_d2;
  double in_d3;
  undefined *local_448;
  undefined *local_3e0;
  undefined *local_3d8;
  uint local_36c;
  ulong local_350;
  ulong local_348;
  ID local_330;
  undefined *local_318;
  double local_310;
  double local_300;
  double local_2f0;
  double local_2e0;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  ulong local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  double local_218;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  byte local_1c9;
  ID local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  undefined *local_178;
  undefined4 local_16c;
  undefined *local_168;
  SEL local_160;
  ID local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar1 = &local_168;
  local_168 = (undefined *)0x0;
  local_160 = param_2;
  local_158 = param_1;
  local_150 = in_d0;
  local_148 = in_d1;
  local_140 = in_d2;
  local_138 = in_d3;
  _objc_storeStrong(ppuVar1,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8);
  if ((((local_168 == (undefined *)0x0) ||
       (_CGRectIsEmpty(local_150,local_148,local_140,local_138), ((ulong)ppuVar1 & 1) != 0)) ||
      (local_140 < 1.0)) || (dVar12 = 1.0, local_138 < 1.0)) {
    puVar2 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar2;
    local_16c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    dVar8 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar2;
    _memset(auStack_1c0,0,0x40);
    IVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_floatingOverlays_026b1e00);
    _objc_retainAutoreleasedReturnValue();
    local_330 = IVar3;
    if (IVar3 == 0) {
      local_330 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_348 = local_330;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
              );
    if (local_348 != 0) {
      lVar6 = *local_1b0;
      local_350 = 0;
      do {
        do {
          if (*local_1b0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar6,local_330);
          }
          uVar7 = *(ulong *)(local_1b8 + local_350 * 8);
          local_180 = uVar7;
          if ((uVar7 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768), (uVar7 & 1) == 0
             )) {
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addObject__0269d180,local_180);
          }
          local_350 = local_350 + 1;
        } while (local_350 < local_348);
        local_348 = local_330;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                   0x10);
        local_350 = 0;
      } while (local_348 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_330);
    IVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_translateStickerView_026b1df8);
    _objc_retainAutoreleasedReturnValue();
    local_1c9 = 0;
    local_36c = 0;
    if (IVar3 != 0) {
      IVar4 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_translateStickerView_026b1df8);
      _objc_retainAutoreleasedReturnValue();
      local_1c9 = 1;
      local_1c8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_36c = (uint)IVar4 ^ 1;
    }
    if ((local_1c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_178;
    if ((local_36c & 1) != 0) {
      IVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_translateStickerView_026b1df8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    puVar5 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0);
    puVar2 = local_168;
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar2;
      local_16c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
      local_1e0 = dVar8;
      local_1d8 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_scale_026ca830);
      dVar10 = local_1d8;
      _UIGraphicsBeginImageContextWithOptions(local_1e0,local_1d8,dVar8,0);
      puVar2 = local_168;
      dVar12 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
      local_208 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
      dVar13 = 0.0;
      dVar8 = 0.0;
      local_218 = dVar10;
      FUN_0163f5dc();
      local_200 = dVar8;
      local_1f8 = dVar13;
      local_1e8 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_drawInRect__026ca610);
      _memset(auStack_268,0,0x40);
      puVar2 = local_178;
      (*(code *)PTR__objc_retain_02578638)();
      local_3d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,0x10
                );
      if (local_3d8 != (undefined *)0x0) {
        lVar6 = *local_258;
        local_3e0 = (undefined *)0x0;
        do {
          do {
            if (*local_258 - lVar6 != 0) {
              _objc_enumerationMutation(*local_258 - lVar6,puVar2);
            }
            uVar7 = *(ulong *)(local_260 + (long)local_3e0 * 8);
            local_228 = uVar7;
            FUN_0165ffb4();
            _objc_retainAutoreleasedReturnValue();
            local_270 = uVar7;
            if (uVar7 == 0) {
              local_16c = 5;
            }
            else {
              uVar7 = local_228;
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_frame_026ca640);
              local_290 = dVar8;
              local_288 = dVar13;
              local_280 = dVar12;
              local_278 = dVar10;
              _CGRectIntersection();
              local_2b0 = dVar8;
              local_2a8 = dVar13;
              local_2a0 = dVar12;
              local_298 = dVar10;
              _CGRectIsEmpty();
              if ((uVar7 & 1) == 0) {
                dVar8 = (local_290 - local_150) / local_140;
                dVar12 = dVar8;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
                dVar8 = dVar8 * dVar12;
                dVar13 = (local_288 - local_148) / local_138;
                dVar10 = dVar13;
                dVar9 = local_138;
                local_2e0 = dVar12;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
                dVar13 = dVar13 * dVar9;
                dVar12 = local_280 / local_140;
                dVar9 = dVar12;
                local_2f0 = dVar10;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
                dVar12 = dVar12 * dVar9;
                dVar10 = local_278 / local_138;
                dVar11 = dVar10;
                dVar14 = local_138;
                local_300 = dVar9;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_size_026cab00);
                dVar10 = dVar10 * dVar14;
                local_310 = dVar11;
                FUN_0163f5dc();
                local_2d0 = dVar8;
                local_2c8 = dVar13;
                local_2c0 = dVar12;
                local_2b8 = dVar10;
                (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_drawInRect__026ca610);
                local_16c = 0;
              }
              else {
                local_16c = 5;
              }
            }
            _objc_storeStrong(&local_270,0);
            local_3e0 = local_3e0 + 1;
          } while (local_3e0 < local_3d8);
          local_3d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,
                     0x10);
          local_3e0 = (undefined *)0x0;
        } while (local_3d8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)();
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_318 = puVar2;
      _UIGraphicsEndImageContext();
      if (local_318 == (undefined *)0x0) {
        local_448 = local_168;
      }
      else {
        local_448 = local_318;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_448;
      local_16c = 1;
      _objc_storeStrong(&local_318,0);
    }
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

