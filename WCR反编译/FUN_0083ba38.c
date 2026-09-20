// FUN_0083ba38 @ 0083ba38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0083ba38(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong local_4a0;
  ulong local_498;
  double local_478;
  ulong local_370;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar3,param_5);
  uVar2 = (uint)puVar3;
  FUN_0083c638();
  uVar5 = local_b0;
  if ((uVar2 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if ((uVar6 & 1) == 0) {
        local_c0 = 1;
      }
      else {
        local_d1 = 0;
        uVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
        if ((uVar5 & 1) == 0) {
          local_370 = 0;
        }
        else {
          local_370 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewModel_0269d080);
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 1;
          local_d0 = local_370;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_370;
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        local_d2 = 1;
        local_d3 = 1;
        if ((local_c8 != 0) &&
           (uVar5 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_isHeadPart_0269f0b0),
           (uVar5 & 1) != 0)) {
          uVar5 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isHeadPart_0269f0b0);
          local_d2 = (byte)uVar5;
        }
        if ((local_c8 != 0) &&
           (uVar5 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_isTailPart_026a03c0),
           (uVar5 & 1) != 0)) {
          uVar5 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isTailPart_026a03c0);
          local_d3 = (byte)uVar5;
        }
        if (((local_d2 & 1) == 0) || ((local_d3 & 1) == 0)) {
          local_e0 = 0;
          uVar5 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_getBgImageView_0269f0e0);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_getBgImageView_0269f0e0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_e8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar5 & 1) != 0) {
              _objc_storeStrong(&local_e0,local_e8);
            }
            _objc_storeStrong(&local_e8,0);
          }
          local_f1 = 0;
          bVar1 = true;
          dVar9 = param_1;
          dVar10 = param_2;
          dVar12 = param_3;
          if (local_e0 != 0) {
            uVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_f1 = 1;
            bVar1 = true;
            dVar9 = param_1;
            dVar10 = param_2;
            dVar12 = param_3;
            local_f0 = uVar5;
            if (uVar5 != 0) {
              dVar9 = param_4;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
              dVar10 = 1.0;
              bVar1 = dVar9 <= 1.0;
              dVar12 = param_2;
              param_4 = param_1;
              local_118 = param_1;
              local_110 = param_2;
              local_108 = param_3;
              local_100 = dVar9;
            }
          }
          if ((local_f1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_f0);
          }
          uVar5 = local_e0;
          if (bVar1) {
            local_c0 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
            local_158 = dVar9;
            local_150 = dVar10;
            local_148 = dVar12;
            local_140 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_convertRect_toView__0269ded8,local_b0)
            ;
            local_180 = dVar9;
            dStack_178 = dVar10;
            local_170 = dVar12;
            dStack_168 = param_4;
            local_138 = dVar9;
            dStack_130 = dVar10;
            local_128 = dVar12;
            dStack_120 = param_4;
            _CGRectGetMaxY();
            dVar8 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
            dVar9 = dVar9 - param_4;
            dVar11 = 0.25;
            local_1a0 = dVar8;
            local_198 = dVar10;
            local_190 = dVar12;
            local_188 = param_4;
            local_160 = dVar9;
            if ((dVar9 <= 0.25) || ((local_d3 & 1) != 0)) {
              local_c0 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,
                         1);
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
              local_1c8 = 0x3ff0000000000000;
              local_1d0 = dVar10 - local_160;
              local_478 = local_1d0;
              if (local_1d0 <= 1.0) {
                local_478 = 1.0;
              }
              local_1d8 = local_478;
              dStack_1a8 = local_478;
              dStack_1e8 = local_478;
              dStack_208 = local_478;
              local_220 = dVar9;
              dStack_218 = dVar11;
              local_210 = dVar12;
              local_200 = dVar9;
              dStack_1f8 = dVar11;
              local_1f0 = dVar12;
              local_1c0 = dVar9;
              dStack_1b8 = dVar11;
              local_1b0 = dVar12;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setClipsToBounds__026ca8c8,1);
              _memset(auStack_268,0,0x40);
              uVar5 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_498 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_498 != 0) {
                lVar7 = *local_258;
                local_4a0 = 0;
                do {
                  do {
                    dVar10 = dVar9;
                    dVar8 = dVar11;
                    dVar13 = dVar12;
                    if (*local_258 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_258 - lVar7,uVar5);
                      dVar10 = dVar9;
                      dVar8 = dVar11;
                      dVar13 = dVar12;
                    }
                    local_228 = *(undefined8 *)(local_260 + local_4a0 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_frame_026ca640);
                    dVar9 = dVar10;
                    _CGRectGetMaxY(dVar10,dVar8,dVar13);
                    dVar11 = dStack_1a8 + 0.25;
                    dVar12 = 0.25;
                    if (dStack_1a8 + 0.25 < dVar9) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setFrame__026ca960);
                      dVar9 = dVar10;
                      dVar11 = dVar8;
                      dVar12 = dVar13;
                    }
                    local_4a0 = local_4a0 + 1;
                  } while (local_4a0 < local_498);
                  local_498 = uVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                             auStack_a8,0x10);
                  local_4a0 = 0;
                } while (local_498 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar5);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
              local_c0 = 0;
            }
          }
          _objc_storeStrong(&local_e0,0);
        }
        else {
          local_c0 = 1;
        }
        _objc_storeStrong(&local_c8,0);
      }
      goto LAB_0083c5c4;
    }
  }
  local_c0 = 1;
LAB_0083c5c4:
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

