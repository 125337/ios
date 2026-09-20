// FUN_0044812c @ 0044812c

void FUN_0044812c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  double dVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined *local_590;
  undefined *local_588;
  ulong local_518;
  ulong local_510;
  undefined1 auStack_390 [8];
  long local_388;
  long *local_380;
  long local_350;
  undefined *local_348;
  ulong local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  ulong local_2f8;
  undefined *local_2f0;
  undefined1 auStack_2e8 [48];
  undefined1 auStack_2b8 [55];
  byte local_281;
  double local_280;
  undefined8 uStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  undefined8 uStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  undefined8 uStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double local_210;
  undefined8 local_208;
  undefined1 auStack_200 [48];
  undefined1 auStack_1d0 [48];
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  ulong local_170;
  undefined4 local_164;
  ulong local_160 [3];
  ulong local_148;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar14 = DAT_02324188;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  dVar10 = DAT_02324188;
  local_138 = param_6;
  local_130 = param_5;
  _objc_storeStrong(&local_140,param_7);
  uVar3 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_accessibilityIdentifier_0269ec20);
  _objc_retainAutoreleasedReturnValue();
  local_160[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf___new__);
  if ((((uVar3 & 1) != 0) ||
      (uVar3 = local_160[0],
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160[0],PTR_s_isEqualToString__0269ccc8,&cf___manage__), (uVar3 & 1) != 0)) ||
     (uVar3 = local_160[0],
     (*(code *)PTR__objc_msgSend_02578628)
               (local_160[0],PTR_s_isEqualToString__0269ccc8,&cf___cancel__), (uVar3 & 1) != 0)) {
    local_164 = 1;
    goto LAB_0044906c;
  }
  uVar3 = local_160[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_160[0],PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId);
  if (((uVar3 & 1) != 0) ||
     (puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
                local_160[0]), ((ulong)puVar4 & 1) != 0)) {
    uVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
    uVar8 = local_130;
    uVar3 = local_160[0];
    if (uVar5 == 1) {
      uVar5 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_WCRLE_presentPackSheet_name__026a3be8,uVar3)
      ;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    local_164 = 1;
    goto LAB_0044906c;
  }
  uVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_viewWithTag__026cabe0,0x2c63f);
  _objc_retainAutoreleasedReturnValue();
  local_170 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_locationInView__026ca798,uVar3);
  uVar3 = local_140;
  local_180 = dVar10;
  local_178 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
  if (uVar3 == 1) {
    DAT_028caaf8 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
    DAT_028cab00 = param_2;
    local_1a0 = param_2;
    local_198 = dVar10;
    local_190 = param_3;
    local_188 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_bringSubviewToFront__026ca550,local_148);
    (*(code *)PTR__objc_msgSend_02578628)(0x3feb333333333333,local_148,PTR_s_setAlpha__026ca860);
    _CGAffineTransformMakeScale(dVar14);
    uVar3 = local_148;
    _memcpy(auStack_200,auStack_1d0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_200);
LAB_00449054:
    local_164 = 0;
  }
  else {
    uVar3 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
    dVar2 = local_180;
    dVar14 = DAT_028cab00;
    if (uVar3 == 2) {
      dVar11 = DAT_028cab00;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
      dVar13 = 0.5;
      uVar12 = 0x4028000000000000;
      if (12.0 < ABS(dVar2 - (dVar14 + param_3 * 0.5))) {
        DAT_028caaf8 = 1;
      }
      local_220 = dVar11;
      local_218 = dVar10;
      local_210 = param_3;
      local_208 = param_4;
      if ((DAT_028caaf8 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_frame_026ca640);
        local_280 = local_180 - dVar13 * 0.5;
        uStack_278 = uVar12;
        local_270 = dVar13;
        dStack_268 = dVar14;
        local_260 = local_280;
        uStack_258 = uVar12;
        local_250 = dVar13;
        dStack_248 = dVar14;
        local_240 = local_280;
        uStack_238 = uVar12;
        local_230 = dVar13;
        dStack_228 = dVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_280,uVar12,dVar13,dVar14,local_148,PTR_s_setFrame__026ca960);
      }
      goto LAB_00449054;
    }
    uVar3 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20);
    if ((uVar3 != 3) &&
       (uVar3 = local_140, (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_state_026cab20),
       uVar3 != 4)) goto LAB_00449054;
    local_281 = DAT_028caaf8 & 1;
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_148,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_2b8,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar3 = local_148;
    _memcpy(auStack_2e8,auStack_2b8,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_2e8);
    uVar8 = local_130;
    uVar3 = local_160[0];
    if ((local_281 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_2f0 = puVar4;
      _memset(auStack_338,0,0x40);
      uVar3 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_510 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_510 != 0) {
        lVar7 = *local_328;
        local_518 = 0;
        do {
          do {
            if (*local_328 - lVar7 != 0) {
              _objc_enumerationMutation(*local_328 - lVar7,uVar3);
            }
            uVar8 = *(ulong *)(local_330 + local_518 * 8);
            local_2f8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_accessibilityIdentifier_0269ec20);
            _objc_retainAutoreleasedReturnValue();
            local_340 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
            if (((((uVar8 == 0) ||
                  (uVar8 = local_340,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_340,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId),
                  (uVar8 & 1) != 0)) ||
                 (uVar8 = local_340,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_340,PTR_s_isEqualToString__0269ccc8,&cf___new__), (uVar8 & 1) != 0
                 )) || ((uVar8 = local_340,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_340,PTR_s_isEqualToString__0269ccc8,&cf___sort__),
                        (uVar8 & 1) != 0 ||
                        (uVar8 = local_340,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_340,PTR_s_isEqualToString__0269ccc8,&cf___manage__),
                        (uVar8 & 1) != 0)))) ||
               ((uVar8 = local_340,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_340,PTR_s_isEqualToString__0269ccc8,&cf___cancel__),
                (uVar8 & 1) != 0 ||
                (puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440,
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineLocalEmoticonStore_026ce440,
                           PTR_s_isUngroupedPackRel__026a3aa8,local_340), ((ulong)puVar4 & 1) != 0))
               )) {
              local_164 = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_addObject__0269d180,local_2f8);
              local_164 = 0;
            }
            _objc_storeStrong(&local_340,0);
            local_518 = local_518 + 1;
          } while (local_518 < local_510);
          local_510 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_a8,
                     0x10);
          local_518 = 0;
        } while (local_510 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2f0,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_0257d428
                );
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_348 = puVar4;
      _memset(auStack_390,0,0x40);
      puVar4 = local_2f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_588 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,auStack_128,0x10
                );
      if (local_588 != (undefined *)0x0) {
        lVar7 = *local_380;
        local_590 = (undefined *)0x0;
        do {
          do {
            if (*local_380 - lVar7 != 0) {
              _objc_enumerationMutation(*local_380 - lVar7,puVar4);
            }
            lVar9 = *(long *)(local_388 + (long)local_590 * 8);
            local_350 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_accessibilityIdentifier_0269ec20);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar9);
            puVar1 = local_348;
            if (lVar6 != 0) {
              lVar6 = local_350;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_350,PTR_s_accessibilityIdentifier_0269ec20);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar6);
            }
            local_590 = local_590 + 1;
          } while (local_590 < local_588);
          local_588 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_390,auStack_128,
                     0x10);
          local_590 = (undefined *)0x0;
        } while (local_588 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_reorderPackRels__026a3e08,local_348);
      _objc_setAssociatedObject(local_130,DAT_026e0368,0,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_WCRLE_reloadLocalChips_026a3bb0);
      _objc_storeStrong(&local_348);
      _objc_storeStrong(&local_2f0,0);
      goto LAB_00449054;
    }
    uVar5 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_WCRLE_presentPackSheet_name__026a3be8,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_setAssociatedObject(local_130,DAT_026e0368,0,3);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_WCRLE_reloadLocalChips_026a3bb0);
    local_164 = 1;
  }
  _objc_storeStrong(&local_170,0);
LAB_0044906c:
  _objc_storeStrong(local_160);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

