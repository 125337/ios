// FUN_008802e8 @ 008802e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008802e8(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined *local_7a8;
  undefined *local_7a0;
  undefined *local_5c0;
  undefined *local_5b8;
  undefined1 auStack_508 [8];
  long local_500;
  long *local_4f8;
  undefined8 local_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  undefined8 uStack_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double local_418;
  double local_410;
  double local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  byte local_3d1;
  undefined *local_3d0;
  undefined *local_3c8 [6];
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_370;
  double dStack_368;
  double local_360;
  undefined8 uStack_358;
  double local_330;
  undefined *local_328;
  double local_2f8;
  double local_2c8;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  undefined *local_218;
  double local_210;
  undefined *local_208 [6];
  double local_1d8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined *local_168;
  int local_160;
  undefined1 local_159;
  undefined *local_158;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_5);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_6);
  local_159 = 0;
  bVar2 = true;
  uVar1 = local_138 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == (undefined *)0x0;
    local_159 = uVar1;
    local_158 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_159;
  }
  local_159 = uVar1;
  if (bVar2) {
    local_130 = (undefined *)0x0;
    local_160 = 1;
  }
  else {
    puVar6 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_138;
    local_168 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_bounds_026ca548);
    local_1a8 = param_1;
    local_1a0 = param_2;
    local_198 = param_3;
    local_190 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_convertRect_toView__0269ded8,local_168);
    local_188 = param_1;
    dStack_180 = param_2;
    local_178 = param_3;
    uStack_170 = param_4;
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    dVar8 = local_188;
    dVar9 = dStack_180;
    dVar10 = local_178;
    uVar11 = uStack_170;
    local_1b0 = param_1;
    _CGRectGetMaxX();
    local_208[0] = (undefined *)0x0;
    dVar7 = -1.7976931348623157e+308;
    local_210 = -1.7976931348623157e+308;
    local_1d8 = dVar8;
    _memset(auStack_258,0,0x40);
    puVar3 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_5b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_5b8 != (undefined *)0x0) {
      lVar5 = *local_248;
      local_5c0 = (undefined *)0x0;
      do {
        do {
          if (*local_248 - lVar5 != 0) {
            _objc_enumerationMutation(*local_248 - lVar5,puVar3);
          }
          puVar6 = *(undefined **)(local_250 + (long)local_5c0 * 8);
          local_218 = puVar6;
          if (puVar6 != local_138) {
            puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            puVar4 = local_218;
            if (((ulong)puVar6 & 1) == 0) {
              puVar6 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
              if (((ulong)puVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_frame_026ca640);
                local_278 = dVar7;
                dStack_270 = dVar9;
                local_268 = dVar10;
                uStack_260 = uVar11;
                _CGRectGetWidth(dVar7,dVar9);
                dVar9 = 20.0;
                if (20.0 <= dVar7) {
                  dVar7 = local_278;
                  dVar10 = local_268;
                  uVar11 = uStack_260;
                  _CGRectGetHeight(local_278,dStack_270);
                  dVar9 = 8.0;
                  if (8.0 <= dVar7) {
                    dVar8 = local_278;
                    _CGRectGetMinX(local_278,dStack_270,local_268,uStack_260);
                    local_2c8 = dVar8 - local_1d8;
                    dVar8 = local_278;
                    dVar10 = local_268;
                    uVar11 = uStack_260;
                    _CGRectGetMidY(local_278,dStack_270);
                    dVar8 = ABS(dVar8 - local_1b0);
                    dVar9 = 8.0;
                    dVar7 = local_2c8;
                    local_2f8 = dVar8;
                    if (((8.0 <= local_2c8) && (dVar9 = 16.0, dVar7 = dVar8, dVar8 <= 16.0)) &&
                       (puVar6 = local_218, FUN_008843c8(), dVar7 = dVar8, local_328 = puVar6,
                       puVar6 != (undefined *)0x0)) {
                      local_330 = 0.0 - local_2f8 * 20.0;
                      dVar8 = local_278;
                      _CGRectGetMinX(local_278,dStack_270,local_268);
                      dVar10 = local_330 - DAT_02323c68 * ABS(dVar8 - 96.0);
                      dVar8 = (double)NEON_ucvtf(local_328);
                      dVar7 = dVar10 + dVar8 * 50.0;
                      dVar9 = local_210;
                      uVar11 = uStack_260;
                      local_330 = dVar7;
                      if (local_210 < dVar7) {
                        local_210 = dVar7;
                        _objc_storeStrong(local_208,local_218);
                        uVar11 = uStack_260;
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c0 = local_5c0 + 1;
        } while (local_5c0 < local_5b8);
        local_5b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                   0x10);
        local_5c0 = (undefined *)0x0;
      } while (local_5b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar6 = local_138;
    puVar3 = local_208[0];
    if (local_208[0] == (undefined *)0x0) {
      if (local_140 == 0) {
        local_130 = (undefined *)0x0;
        local_160 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_bounds_026ca548);
        local_390 = dVar7;
        local_388 = dVar9;
        local_380 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_convertRect_toView__0269ded8,local_140);
        local_370 = dVar7;
        dStack_368 = dVar9;
        local_360 = dVar10;
        uStack_358 = uVar11;
        _CGRectGetMidY();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_398 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_140);
        _objc_retainAutoreleasedReturnValue();
        local_3c8[0] = puVar3;
        do {
          puVar3 = local_3c8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_3c8[0],PTR_s_count_0269cfe0);
          if (puVar3 == (undefined *)0x0) {
            local_130 = (undefined *)0x0;
            local_160 = 1;
            break;
          }
          puVar3 = local_3c8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_3c8[0],PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_3d0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_3c8[0],PTR_s_removeLastObject_0269e830);
          puVar3 = local_3d0;
          local_3d1 = 1;
          if (local_3d0 == local_138) {
LAB_00880d44:
            local_3d1 = 0;
          }
          else {
            puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
            puVar6 = local_3d0;
            if (((ulong)puVar3 & 1) != 0) goto LAB_00880d44;
            puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)puVar6 & 1) != 0) goto LAB_00880d44;
          }
          puVar3 = local_3d0;
          if ((local_3d1 & 1) == 0) {
LAB_00880ff0:
            _memset(auStack_508,0,0x40);
            puVar3 = local_3d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_7a0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_7a0 != (undefined *)0x0) {
              lVar5 = *local_4f8;
              local_7a8 = (undefined *)0x0;
              do {
                do {
                  if (*local_4f8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_4f8 - lVar5,puVar3);
                  }
                  local_4c8 = *(undefined8 *)(local_500 + (long)local_7a8 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_3c8[0],PTR_s_addObject__0269d180,local_4c8);
                  local_7a8 = local_7a8 + 1;
                } while (local_7a8 < local_7a0);
                local_7a0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_508,
                           auStack_128,0x10);
                local_7a8 = (undefined *)0x0;
              } while (local_7a0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_160 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_3d0,PTR_s_bounds_026ca548);
            local_418 = dVar7;
            local_410 = dVar9;
            local_408 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_convertRect_toView__0269ded8,local_140);
            local_3f8 = dVar7;
            dStack_3f0 = dVar9;
            local_3e8 = dVar10;
            uStack_3e0 = uVar11;
            _CGRectGetWidth(dVar7,dVar9);
            dVar9 = 20.0;
            if (dVar7 < 20.0) {
LAB_00880f98:
              local_3d1 = 0;
              goto LAB_00880ff0;
            }
            dVar7 = local_3f8;
            dVar10 = local_3e8;
            uVar11 = uStack_3e0;
            _CGRectGetHeight(local_3f8,dStack_3f0);
            dVar9 = 8.0;
            if (dVar7 < 8.0) goto LAB_00880f98;
            dVar7 = local_3f8;
            _CGRectGetMinX(local_3f8,dStack_3f0,local_3e8,uStack_3e0);
            dStack_498 = dStack_368;
            local_4a0 = local_370;
            local_490 = local_360;
            dVar9 = local_370;
            uVar11 = uStack_358;
            _CGRectGetMaxX(local_370,dStack_368,local_360);
            dVar10 = 8.0;
            dVar9 = dVar9 + 8.0;
            if (dVar7 < dVar9) goto LAB_00880f98;
            dStack_4b8 = dStack_3f0;
            local_4c0 = local_3f8;
            uStack_4a8 = uStack_3e0;
            local_4b0 = local_3e8;
            dVar8 = local_3f8;
            dVar10 = local_3e8;
            _CGRectGetMidY(local_3f8,dStack_3f0);
            dVar7 = ABS(dVar8 - local_398);
            dVar9 = 16.0;
            uVar11 = uStack_3e0;
            if (16.0 < dVar7) goto LAB_00880f98;
            puVar6 = local_3d0;
            FUN_008843c8();
            puVar3 = local_3d0;
            uVar11 = uStack_3e0;
            if (puVar6 == (undefined *)0x0) goto LAB_00880ff0;
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = puVar3;
            local_160 = 1;
            uVar11 = uStack_3e0;
          }
          _objc_storeStrong(&local_3d0,0);
        } while (local_160 == 0);
        _objc_storeStrong(local_3c8,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar3;
      local_160 = 1;
    }
    _objc_storeStrong(local_208);
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

