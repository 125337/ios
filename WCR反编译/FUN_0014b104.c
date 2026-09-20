// FUN_0014b104 @ 0014b104

void FUN_0014b104(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
                 )

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double local_9e0;
  ulong local_908;
  undefined *local_8d8;
  undefined *local_8d0;
  ulong local_7b0;
  ulong local_7a8;
  undefined *local_770;
  undefined *local_768;
  ulong local_608;
  double local_498;
  double dStack_448;
  ulong local_3f0;
  undefined1 auStack_3e8 [8];
  long local_3e0;
  long *local_3d8;
  ulong local_3a8;
  double local_3a0;
  double local_398;
  undefined8 local_390;
  double local_388;
  undefined8 local_380;
  double local_378;
  undefined8 local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  ulong local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  ulong local_2a0;
  undefined *local_298;
  undefined *local_290;
  double local_288;
  double local_280;
  undefined8 local_278;
  double local_270;
  ulong local_268;
  double local_260;
  double local_258;
  undefined8 local_250;
  double local_248;
  ulong local_240;
  double local_238;
  double local_230;
  undefined8 local_228;
  double local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  byte local_1d9;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined4 local_1c0;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_5);
  uVar8 = local_1b0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar8 & 1) == 0) {
    local_1c0 = 1;
  }
  else {
    uVar8 = local_1b0;
    FUN_0014c98c();
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar8;
    _objc_getAssociatedObject(uVar8,&DAT_028c87e0);
    _objc_retainAutoreleasedReturnValue();
    local_1d9 = 0;
    bVar1 = true;
    local_1d0 = uVar8;
    if (uVar8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isHidden_026ca768);
      bVar1 = true;
      if ((uVar8 & 1) == 0) {
        uVar8 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_1d9 = 1;
        bVar1 = true;
        local_1d8 = uVar8;
        if (uVar8 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_bounds_026ca548);
          local_200 = param_1;
          local_1f8 = param_2;
          local_1f0 = param_3;
          local_1e8 = param_4;
          _CGRectGetHeight(param_1,param_2);
          param_2 = 1.0;
          bVar1 = param_1 < 1.0;
        }
      }
    }
    dStack_448 = param_4;
    if ((local_1d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
      dStack_448 = param_4;
    }
    uVar8 = local_1b0;
    if (bVar1) {
      local_1c0 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar8 & 1) == 0) {
        local_608 = local_1c8;
      }
      else {
        local_608 = local_1b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      uVar8 = local_1c8;
      local_208 = local_608;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar8 & 1) != 0) {
        _objc_storeStrong(&local_208,local_1c8);
      }
      local_210 = 0;
      uVar8 = local_1c8;
      FUN_0014cf54(local_1c8,PTR_s_fullScreenButton_0269f468,"_fullScreenButton");
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_218 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = local_218,
         (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_isHidden_026ca768), (uVar8 & 1) == 0)
         ) {
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_bounds_026ca548);
        local_238 = param_1;
        local_230 = param_2;
        local_228 = param_3;
        local_220 = dStack_448;
        _CGRectGetHeight(param_1,param_2);
        param_2 = 1.0;
        if (1.0 < param_1) {
          _objc_storeStrong(&local_210,local_218);
        }
      }
      if (local_210 == 0) {
        uVar8 = local_1c8;
        FUN_0014cf54(local_1c8,PTR_s_textView_0269d0f8,"_textView");
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_240 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar8 & 1) != 0) &&
           (uVar8 = local_240,
           (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_isHidden_026ca768),
           (uVar8 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_bounds_026ca548);
          local_260 = param_1;
          local_258 = param_2;
          local_250 = param_3;
          local_248 = dStack_448;
          _CGRectGetHeight(param_1,param_2);
          param_2 = 1.0;
          if (1.0 < param_1) {
            _objc_storeStrong(&local_210,local_240);
          }
        }
        _objc_storeStrong(&local_240,0);
      }
      if (local_210 == 0) {
        uVar8 = local_1c8;
        FUN_0014cf54(local_1c8,PTR_s_expressionButton_0269f470,"_expressionButton");
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_268 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar8 & 1) != 0) &&
           (uVar8 = local_268,
           (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_isHidden_026ca768),
           (uVar8 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_bounds_026ca548);
          local_288 = param_1;
          local_280 = param_2;
          local_278 = param_3;
          local_270 = dStack_448;
          _CGRectGetHeight(param_1,param_2);
          param_2 = 1.0;
          if (1.0 < param_1) {
            _objc_storeStrong(&local_210,local_268);
          }
        }
        _objc_storeStrong(&local_268,0);
      }
      if (local_210 == 0) {
        local_1c0 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_290 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_208);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = local_1b0;
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_298 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar8 & 1) != 0) && (local_1b0 != local_208)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addObject__0269d180,local_1b0);
        }
        uVar8 = local_1c8;
        FUN_0014cf54(local_1c8,PTR_s_toolView_0269d330,"_toolView");
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_2a0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar8 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addObject__0269d180,local_2a0);
        }
        _memset(auStack_2e8,0,0x40);
        puVar2 = local_298;
        (*(code *)PTR__objc_retain_02578638)();
        local_768 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_a8,
                   0x10);
        if (local_768 != (undefined *)0x0) {
          lVar5 = *local_2d8;
          local_770 = (undefined *)0x0;
          do {
            do {
              if (*local_2d8 - lVar5 != 0) {
                _objc_enumerationMutation(*local_2d8 - lVar5,puVar2);
              }
              local_2a8 = *(ulong *)(local_2e0 + (long)local_770 * 8);
              _memset(auStack_330,0,0x40);
              uVar8 = local_2a8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_7a8 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_7a8 != 0) {
                lVar6 = *local_320;
                local_7b0 = 0;
                do {
                  do {
                    if (*local_320 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_320 - lVar6,uVar8);
                    }
                    uVar7 = *(ulong *)(local_328 + local_7b0 * 8);
                    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
                    local_2f0 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                    if (((uVar7 & 1) != 0) &&
                       (uVar7 = local_2f0,
                       (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_isHidden_026ca768),
                       (uVar7 & 1) == 0)) {
                      uVar7 = local_2f0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2f0,PTR_s_accessibilityLabel_0269e1c8);
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = uVar7;
                      FUN_0014d134();
                      (*(code *)PTR__objc_release_02578630)(uVar7);
                      if (((uVar4 & 1) != 0) &&
                         (puVar3 = local_290,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_290,PTR_s_containsObject__0269cbb8,local_2f0),
                         ((ulong)puVar3 & 1) == 0)) {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_290,PTR_s_addObject__0269d180,local_2f0);
                      }
                    }
                    local_7b0 = local_7b0 + 1;
                  } while (local_7b0 < local_7a8);
                  local_7a8 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,
                             auStack_128,0x10);
                  local_7b0 = 0;
                } while (local_7a8 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar8);
              local_770 = local_770 + 1;
            } while (local_770 < local_768);
            local_768 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_a8
                       ,0x10);
            local_770 = (undefined *)0x0;
          } while (local_768 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_1c0 = 1;
        }
        else {
          uVar8 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_center_026ca560);
          local_358 = param_1;
          local_350 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_convertPoint_toView__0269e548,local_208)
          ;
          local_348 = param_1;
          local_340 = param_2;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          uVar8 = local_1d0;
          local_338 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_frame_026ca640);
          local_3a0 = param_2;
          local_398 = param_1;
          local_390 = param_3;
          local_388 = dStack_448;
          _CGRectGetMaxY(param_2,param_1);
          uVar9 = 0;
          FUN_0014d384();
          local_380 = uVar9;
          local_378 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_convertPoint_toView__0269e548,local_208)
          ;
          local_370 = uVar9;
          local_368 = param_2;
          (*(code *)PTR__objc_release_02578630)(uVar8);
          local_360 = param_2;
          _memset(auStack_3e8,0,0x40);
          puVar2 = local_290;
          (*(code *)PTR__objc_retain_02578638)();
          local_8d0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,auStack_1a8,
                     0x10);
          if (local_8d0 != (undefined *)0x0) {
            lVar5 = *local_3d8;
            local_8d8 = (undefined *)0x0;
            do {
              do {
                if (*local_3d8 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_3d8 - lVar5,puVar2);
                }
                uVar8 = *(ulong *)(local_3e0 + (long)local_8d8 * 8);
                local_3a8 = uVar8;
                if (uVar8 != local_210) {
                  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_superview_026cab50);
                  _objc_retainAutoreleasedReturnValue();
                  local_908 = uVar8;
                  if (uVar8 == 0) {
                    local_908 = local_208;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_3f0 = local_908;
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  uVar8 = local_208;
                  local_498 = local_338;
                  FUN_0014d384();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar8,PTR_s_convertPoint_toView__0269e548,local_3f0);
                  uVar8 = local_208;
                  dVar10 = 0.0;
                  local_9e0 = local_360;
                  FUN_0014d384();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar8,PTR_s_convertPoint_toView__0269e548,local_3f0);
                  dVar11 = local_9e0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_frame_026ca640);
                  dVar13 = dStack_448;
                  uVar9 = param_3;
                  dVar12 = dVar10;
                  dVar15 = dVar11;
                  (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_bounds_026ca548);
                  _CGRectGetHeight(dVar13,uVar9,dVar12,dVar15);
                  dVar12 = dVar13 - local_9e0;
                  if ((24.0 < dVar12) && (dVar12 + 0.5 < dStack_448)) {
                    dStack_448 = dVar12;
                  }
                  dVar12 = dVar11;
                  _CGRectGetHeight(dVar11,dVar10,param_3,dStack_448);
                  local_498 = local_498 - dVar12 * 0.5;
                  if (local_498 < local_9e0) {
                    local_498 = local_9e0;
                  }
                  dVar12 = dVar11;
                  uVar9 = param_3;
                  dVar15 = dStack_448;
                  _CGRectGetHeight(dVar11,dVar10);
                  if (dVar13 < local_498 + dVar12) {
                    dVar12 = dVar11;
                    uVar9 = param_3;
                    dVar15 = dStack_448;
                    _CGRectGetHeight(dVar11,dVar10);
                    if (local_9e0 < dVar13 - dVar12) {
                      local_9e0 = dVar13 - dVar12;
                    }
                    local_498 = local_9e0;
                  }
                  dVar13 = ABS(dVar10 - local_498);
                  uVar14 = 0x3fe0000000000000;
                  bVar1 = false;
                  if (dVar13 < 0.5) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_3a8,PTR_s_frame_026ca640);
                    bVar1 = ABS(dVar15 - dStack_448) < 0.5;
                    uVar9 = uVar14;
                    dVar15 = dVar13;
                  }
                  if (bVar1) {
                    local_1c0 = 7;
                    param_3 = uVar9;
                    dStack_448 = dVar15;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (dVar11,local_498,local_3a8,PTR_s_setFrame__026ca960);
                    local_1c0 = 0;
                  }
                  _objc_storeStrong(&local_3f0,0);
                }
                local_8d8 = local_8d8 + 1;
              } while (local_8d8 < local_8d0);
              local_8d0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3e8,
                         auStack_1a8,0x10);
              local_8d8 = (undefined *)0x0;
            } while (local_8d0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_1c0 = 0;
        }
        _objc_storeStrong(&local_2a0);
        _objc_storeStrong(&local_298,0);
        _objc_storeStrong(&local_290,0);
      }
      _objc_storeStrong(&local_218);
      _objc_storeStrong(&local_210,0);
      _objc_storeStrong(&local_208,0);
    }
    _objc_storeStrong(&local_1d0);
    _objc_storeStrong(&local_1c8,0);
  }
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

