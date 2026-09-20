// FUN_00657ae0 @ 00657ae0

double FUN_00657ae0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_7c8;
  double local_7c0;
  double local_788;
  ulong local_6b0;
  ulong local_6a8;
  double local_628;
  undefined *local_530;
  undefined *local_528;
  undefined1 auStack_3a0 [8];
  long local_398;
  long *local_390;
  ulong local_360;
  double local_350;
  double local_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  undefined8 local_318;
  double local_310;
  double local_308;
  ulong local_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  undefined8 local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double dStack_2b8;
  undefined8 local_2b0;
  double dStack_2a8;
  double local_2a0;
  double local_298;
  undefined8 local_290;
  double local_288;
  double local_280;
  double dStack_278;
  undefined8 local_270;
  double dStack_268;
  byte local_259;
  ulong local_258;
  byte local_241;
  ulong local_240;
  undefined4 local_234;
  undefined8 local_228;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  byte local_1c9;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  dVar11 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_5);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_6);
  dVar10 = 0.0;
  local_168 = 0.0;
  local_170 = 0.0;
  local_160 = param_7;
  local_158 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_safeAreaInsets_026ca828);
  dVar14 = dVar10;
  local_190 = dVar10;
  local_188 = param_2;
  local_180 = param_3;
  local_178 = param_4;
  local_168 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_safeAreaInsets_026ca828);
  dVar12 = 96.0;
  local_628 = local_168 + 96.0;
  local_1c9 = 0;
  local_1c8 = local_628;
  local_1c0 = dVar10;
  local_1b8 = param_3;
  local_1b0 = param_2;
  local_1a8 = dVar14;
  local_170 = param_2;
  _memset(auStack_218,0,0x40);
  local_c0 = &cf_jumpMsgEdgeTipsView;
  local_b8 = &cf_pendingTipsView;
  local_b0 = &cf_referTipsView;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_528 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_528 != (undefined *)0x0) {
    lVar7 = *local_208;
    local_530 = (undefined *)0x0;
    do {
      do {
        if (*local_208 - lVar7 != 0) {
          _objc_enumerationMutation(*local_208 - lVar7,puVar3);
        }
        uVar8 = *(undefined8 *)(local_210 + (long)local_530 * 8);
        local_220 = 0;
        local_1d8 = uVar8;
        _NSSelectorFromString();
        uVar4 = local_148;
        local_228 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_respondsToSelector__026ca818,uVar8);
        if ((uVar4 & 1) != 0) {
          uVar5 = local_148;
          FUN_00655fa0(local_148,local_228);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_220;
          local_220 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        if (local_220 == 0) {
          uVar5 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_valueForKey__0269d128,local_1d8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_220;
          local_220 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        uVar4 = local_220;
        puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
        uVar5 = local_220;
        if ((uVar4 & 1) == 0) {
          local_234 = 3;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_240 = uVar5;
          local_241 = 0;
          uVar4 = local_220;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_220,PTR_s_respondsToSelector__026ca818,PTR_s_isShowing_0269ec18);
          if ((uVar4 & 1) != 0) {
            uVar4 = local_220;
            (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_isShowing_0269ec18);
            local_241 = (byte)uVar4;
          }
          local_259 = 0;
          if ((local_241 & 1) == 0) {
            uVar4 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_isHidden_026ca768);
            bVar2 = false;
            if ((uVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_alpha_026ca4d8);
              bVar2 = false;
              dVar12 = dVar11;
              if (dVar11 < local_628) goto LAB_0065807c;
            }
          }
          else {
LAB_0065807c:
            uVar4 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_259 = 1;
            bVar2 = uVar4 != 0;
            local_258 = uVar4;
          }
          if ((local_259 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_258);
          }
          if (bVar2) {
            uVar4 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_frame_026ca640);
            local_2a0 = local_628;
            local_298 = dVar12;
            local_290 = param_3;
            local_288 = dVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_convertRect_toView__0269ded8,local_150);
            local_280 = local_628;
            dStack_278 = dVar12;
            local_270 = param_3;
            dStack_268 = dVar10;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            dStack_2b8 = dStack_278;
            local_2c0 = local_280;
            dStack_2a8 = dStack_268;
            local_2b0 = local_270;
            local_628 = local_280;
            param_3 = local_270;
            dVar10 = dStack_268;
            _CGRectGetHeight(local_280,dStack_278);
            dVar12 = 1.0;
            if (1.0 < local_628) {
              local_1c9 = 1;
              local_2c8 = local_1c8;
              dStack_2e8 = dStack_278;
              local_2f0 = local_280;
              dStack_2d8 = dStack_268;
              local_2e0 = local_270;
              dVar12 = local_280;
              param_3 = local_270;
              dVar10 = dStack_268;
              _CGRectGetMaxY(local_280,dStack_278);
              dVar12 = dVar12 + 8.0;
              local_628 = dVar12;
              if (dVar12 <= local_2c8) {
                local_628 = local_2c8;
              }
              local_2f8 = local_628;
              local_1c8 = local_628;
              local_2d0 = dVar12;
            }
          }
          _objc_storeStrong(&local_240,0);
          local_234 = 0;
        }
        _objc_storeStrong(&local_220,0);
        local_530 = local_530 + 1;
      } while (local_530 < local_528);
      local_528 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10)
      ;
      local_530 = (undefined *)0x0;
    } while (local_528 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_1c9 & 1) == 0) {
    uVar4 = local_148;
    FUN_00650304();
    _objc_retainAutoreleasedReturnValue();
    local_300 = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
      dVar14 = dVar12;
      local_328 = local_628;
      local_320 = dVar12;
      local_318 = param_3;
      local_310 = dVar10;
      local_308 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_contentInset_0269dcc8);
      local_350 = 0.0;
      uVar4 = local_148;
      dVar10 = dVar12;
      local_348 = dVar12;
      local_340 = param_3;
      local_338 = dVar14;
      local_330 = local_628;
      FUN_006564b8(local_148,"m_bannerHeight");
      local_350 = (double)uVar4;
      dVar12 = 15.0;
      local_628 = local_308 + local_348 + local_350 + 15.0;
      local_1c8 = local_628;
    }
    _objc_storeStrong(&local_300,0);
  }
  _memset(auStack_3a0,0,0x40);
  uVar4 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_6a8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_6a8 != 0) {
    lVar7 = *local_390;
    local_6b0 = 0;
    do {
      do {
        if (*local_390 - lVar7 != 0) {
          _objc_enumerationMutation(*local_390 - lVar7,uVar4);
        }
        uVar9 = *(ulong *)(local_398 + local_6b0 * 8);
        local_360 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_accessibilityIdentifier_0269ec20);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = true;
        if ((uVar5 & 1) != 0) {
          uVar5 = local_360;
          (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = uVar5 == 0;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        (*(code *)PTR__objc_release_02578630)(uVar9);
        if (!bVar2) {
          uVar5 = local_360;
          (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_accessibilityIdentifier_0269ec20);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar9 & 1) == 0) {
            uVar5 = local_360;
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_isHidden_026ca768);
            bVar2 = false;
            dVar14 = local_628;
            dVar13 = dVar12;
            dVar15 = dVar10;
            if ((uVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_alpha_026ca4d8);
              bVar2 = dVar11 < local_628;
              dVar14 = local_628;
              dVar13 = dVar11;
              dVar15 = dVar10;
            }
            uVar5 = local_360;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_360,PTR_s_respondsToSelector__026ca818,PTR_s_isShowing_0269ec18);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_360;
              (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_isShowing_0269ec18);
              bVar2 = bVar2 || (int)uVar5 != 0;
            }
            uVar5 = local_360;
            local_628 = dVar14;
            dVar12 = dVar13;
            dVar10 = dVar15;
            if (bVar2) {
              (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_bounds_026ca548);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_convertRect_toView__0269ded8,local_150);
              local_628 = dVar14;
              dVar10 = dVar15;
              _CGRectGetHeight(dVar14,dVar13);
              dVar1 = local_1c8;
              dVar12 = 1.0;
              if (1.0 < local_628) {
                _CGRectGetMaxY(dVar14,dVar13);
                dVar12 = dVar14 + 8.0;
                local_788 = dVar12;
                if (dVar12 <= dVar1) {
                  local_788 = dVar1;
                }
                local_1c8 = local_788;
                local_628 = local_788;
                dVar10 = dVar15;
              }
            }
          }
        }
        local_6b0 = local_6b0 + 1;
      } while (local_6b0 < local_6a8);
      local_6a8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,auStack_140,0x10)
      ;
      local_6b0 = 0;
    } while (local_6a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  dVar11 = (double)NEON_ucvtf(local_160);
  dVar14 = local_158 + 8.0;
  dVar12 = local_1c8 + dVar14 * dVar11;
  dVar11 = local_1c8;
  local_1c8 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_bounds_026ca548);
  _CGRectGetHeight(dVar12,dVar14,dVar11,dVar10);
  local_7c0 = ((dVar12 - local_170) - local_158) - 100.0;
  local_7c8 = local_168 + 72.0;
  if (local_1c8 < local_7c0) {
    local_7c0 = local_1c8;
  }
  if (local_7c8 < local_7c0) {
    local_7c8 = local_7c0;
  }
  local_234 = 1;
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_7c8;
}

