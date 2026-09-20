// wcr_reflowActivityChips:width: @ 01da560c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_reflowActivityChips_width_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong local_3d8;
  ulong local_3d0;
  ulong local_398;
  ulong local_390;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  ulong local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  ulong local_190;
  double local_188;
  ulong local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  ulong local_150;
  double local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  uVar1 = local_140;
  local_148 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_158 = 16.0;
  local_160 = 8.0;
  local_168 = 8.0;
  dVar8 = 2.0;
  local_170 = ((local_148 - 32.0) - 8.0) / 2.0;
  local_178 = 34.0;
  local_180 = 0;
  local_188 = 0.0;
  local_150 = uVar1;
  _memset(auStack_1d0,0,0x40);
  uVar1 = local_150;
  (*(code *)PTR__objc_retain_02578638)();
  local_390 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
  if (local_390 != 0) {
    lVar4 = *local_1c0;
    local_398 = 0;
    do {
      do {
        if (*local_1c0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar4,uVar1);
        }
        local_190 = *(ulong *)(local_1c8 + local_398 * 8);
        local_1d8 = local_180 % 2;
        local_1e0 = local_180 / 2;
        dVar8 = (double)NEON_ucvtf(local_1d8);
        dVar7 = local_158 + (local_170 + local_160) * dVar8;
        dVar8 = (double)NEON_ucvtf(local_1e0);
        dVar8 = dVar8 * (local_178 + local_168);
        dVar9 = local_170;
        dVar10 = local_178;
        FUN_01d8ec14();
        local_220 = dVar7;
        dStack_218 = dVar8;
        local_210 = dVar9;
        dStack_208 = dVar10;
        local_200 = dVar7;
        dStack_1f8 = dVar8;
        local_1f0 = dVar9;
        dStack_1e8 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFrame__026ca960);
        _memset(auStack_268,0,0x40);
        uVar2 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_3d0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_3d0 != 0) {
          lVar5 = *local_258;
          local_3d8 = 0;
          do {
            do {
              if (*local_258 - lVar5 != 0) {
                _objc_enumerationMutation(*local_258 - lVar5,uVar2);
              }
              uVar6 = *(ulong *)(local_260 + local_3d8 * 8);
              puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
              local_228 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_frame_026ca640);
                dVar7 = 6.0;
                (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setFrame__026ca960);
              }
              local_3d8 = local_3d8 + 1;
            } while (local_3d8 < local_3d0);
            local_3d0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128
                       ,0x10);
            local_3d8 = 0;
          } while (local_3d0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_frame_026ca640);
        _CGRectGetMaxY();
        local_180 = local_180 + 1;
        local_398 = local_398 + 1;
        local_188 = dVar7;
      } while (local_398 < local_390);
      local_390 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
      local_398 = 0;
    } while (local_390 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,dVar8,local_148,local_188,local_140,PTR_s_setFrame__026ca960);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

