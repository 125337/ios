// FUN_000fd818 @ 000fd818

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_000fd818(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double local_5e8;
  double local_5e0;
  double local_568;
  undefined *local_498;
  undefined *local_490;
  double local_470;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  byte local_131;
  ulong local_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_f8;
  undefined4 local_ec;
  long local_e8;
  ulong local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_1;
  local_d0 = param_2;
  _objc_storeStrong(&local_e0,param_5);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_6);
  if (local_e8 == 0) {
    local_c8 = 0.0;
    local_ec = 1;
  }
  else {
    uVar2 = local_e0;
    FUN_000f9998();
    _objc_retainAutoreleasedReturnValue();
    local_131 = 0;
    local_f8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
      local_128 = param_1;
      dStack_120 = param_2;
      local_118 = param_3;
      uStack_110 = param_4;
    }
    else {
      uVar3 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_131 = 1;
      local_130 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
      local_158 = param_1;
      local_150 = param_2;
      local_148 = param_3;
      local_140 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8,local_e8);
      local_128 = param_1;
      dStack_120 = param_2;
      local_118 = param_3;
      uStack_110 = param_4;
    }
    if ((local_131 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    dStack_178 = dStack_120;
    local_180 = local_128;
    uStack_168 = uStack_110;
    local_170 = local_118;
    dVar11 = local_128;
    dVar9 = dStack_120;
    uVar12 = local_118;
    uVar13 = uStack_110;
    _CGRectGetMinY();
    dVar8 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_contentInset_0269dcc8);
    dVar7 = dVar11 + dVar8;
    local_1a0 = dVar8;
    local_198 = dVar9;
    local_190 = uVar12;
    local_188 = uVar13;
    FUN_000fed54(local_e0,"m_bannerHeight");
    dVar10 = 15.0;
    dVar8 = dVar11 + dVar8 + dVar7 + 15.0;
    local_160 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_safeAreaInsets_026ca828);
    dVar11 = local_160;
    local_1a8 = dVar8 + 8.0;
    local_1d0 = local_160;
    local_470 = local_1a8;
    if (local_1a8 < local_160) {
      local_470 = local_160;
    }
    local_1d8 = local_470;
    local_160 = local_470;
    local_1c8 = dVar8;
    local_1c0 = dVar10;
    local_1b8 = uVar12;
    local_1b0 = dVar9;
    _memset(auStack_220,0,0x40);
    local_c0 = &cf_jumpMsgEdgeTipsView;
    local_b8 = &cf_pendingTipsView;
    local_b0 = &cf_referTipsView;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_490 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_490 != (undefined *)0x0) {
      lVar6 = *local_210;
      local_498 = (undefined *)0x0;
      do {
        do {
          dVar8 = dVar10;
          if (*local_210 - lVar6 != 0) {
            _objc_enumerationMutation(*local_210 - lVar6,puVar4);
            dVar8 = dVar10;
          }
          local_1e0 = *(undefined8 *)(local_218 + (long)local_498 * 8);
          local_228 = 0;
          uVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_1e0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_228;
          local_228 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_228;
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
          bVar1 = true;
          if ((uVar2 & 1) != 0) {
            uVar2 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar2 == 0;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          if (bVar1) {
            local_ec = 3;
            local_568 = local_470;
            dVar10 = dVar8;
          }
          else {
            uVar2 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_isHidden_026ca768);
            bVar1 = false;
            dVar7 = dVar11;
            if ((uVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_alpha_026ca4d8);
              bVar1 = DAT_02323d38 < local_470;
              dVar7 = DAT_02323d38;
            }
            uVar2 = local_228;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_228,PTR_s_respondsToSelector__026ca818,PTR_s_isShowing_0269ec18);
            if ((uVar2 & 1) != 0) {
              uVar2 = local_228;
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_isShowing_0269ec18);
              bVar1 = bVar1 || (int)uVar2 != 0;
            }
            if (bVar1) {
              uVar2 = local_228;
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_frame_026ca640);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_convertRect_toView__0269ded8,local_e8);
              (*(code *)PTR__objc_release_02578630)(uVar2);
              local_568 = local_470;
              dVar10 = dVar8;
              _CGRectGetHeight(local_470,dVar7);
              dVar9 = local_160;
              dVar11 = 1.0;
              if (1.0 < local_568) {
                _CGRectGetMaxY(local_470,dVar7);
                dVar11 = local_470 + 8.0;
                local_568 = dVar11;
                if (dVar11 <= dVar9) {
                  local_568 = dVar9;
                }
                local_160 = local_568;
                dVar10 = dVar8;
              }
              local_ec = 0;
            }
            else {
              local_ec = 3;
              local_568 = local_470;
              dVar11 = dVar7;
              dVar10 = dVar8;
            }
          }
          _objc_storeStrong(&local_228,0);
          local_498 = local_498 + 1;
          local_470 = local_568;
        } while (local_498 < local_490);
        local_490 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,
                   0x10);
        local_498 = (undefined *)0x0;
        local_470 = local_568;
      } while (local_490 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_bounds_026ca548);
    _CGRectGetHeight();
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_safeAreaInsets_026ca828);
    local_5e0 = ((local_470 - dVar10) - local_d0) - 8.0;
    local_5e8 = local_5e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_safeAreaInsets_026ca828);
    local_5e8 = local_5e8 + 8.0;
    if (local_160 < local_5e0) {
      local_5e0 = local_160;
    }
    if (local_5e8 < local_5e0) {
      local_5e8 = local_5e0;
    }
    local_c8 = local_5e8;
    local_ec = 1;
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

