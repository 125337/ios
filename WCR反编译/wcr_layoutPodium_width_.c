// wcr_layoutPodium:width: @ 01d9237c

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsBoardView::wcr_layoutPodium_width_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  double dVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  double in_d2;
  double local_320;
  double local_310;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2c8;
  ulong local_2a0;
  ulong local_298;
  double local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  double local_1a8;
  undefined4 local_19c;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  undefined1 *local_150;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  _memset(auStack_198,0,0x40);
  uVar3 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_298 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_298 != 0) {
    lVar6 = *local_188;
    local_2a0 = 0;
    do {
      do {
        if (*local_188 - lVar6 != 0) {
          _objc_enumerationMutation(*local_188 - lVar6,uVar3);
        }
        lVar7 = *(long *)(local_190 + local_2a0 * 8);
        local_158 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_tag_026cab98);
        if ((0 < lVar7) &&
           (lVar7 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_tag_026cab98),
           lVar7 < 4)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
        }
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_2a0 = 0;
    } while (local_298 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
  dVar1 = local_148;
  if (puVar4 == (undefined1 *)0x0) {
    local_19c = 1;
  }
  else {
    puVar4 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
    local_1b8 = 1;
    local_2c8 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_2c8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    local_1c0 = local_2c8;
    local_1a8 = (double)NEON_ucvtf(local_2c8);
    local_1a8 = dVar1 / local_1a8;
    puVar5 = local_150;
    local_1b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
    if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      local_1a8 = local_148 / 3.0;
    }
    _memset(auStack_208,0,0x40);
    puVar4 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_2e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_2e8 != (undefined1 *)0x0) {
      lVar6 = *local_1f8;
      local_2f0 = (undefined1 *)0x0;
      do {
        do {
          if (*local_1f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar6,puVar4);
          }
          local_1c8 = *(long *)(local_200 + (long)local_2f0 * 8);
          puVar5 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
          if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
            local_320 = 2.0;
            local_210 = local_148 / 2.0;
          }
          else {
            puVar5 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
            local_210 = local_1a8;
            if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
              lVar7 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_tag_026cab98);
              if (lVar7 == 1) {
                local_310 = local_148 * 0.35;
                local_320 = 0.35;
              }
              else {
                local_310 = local_148 * DAT_02323d70;
                local_320 = DAT_02323d70;
              }
              local_210 = local_310;
            }
            else {
              lVar7 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_tag_026cab98);
              if (lVar7 == 1) {
                local_320 = 1.5;
              }
              else {
                lVar7 = local_1c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_tag_026cab98);
                local_320 = 0.5;
                if (lVar7 != 2) {
                  local_320 = 2.5;
                }
              }
              local_210 = local_210 * local_320;
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_210 - in_d2 / 2.0,local_320,local_1c8,PTR_s_setFrame__026ca960);
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2f0 = (undefined1 *)0x0;
      } while (local_2e8 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_19c = 0;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

