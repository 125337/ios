// FUN_0063572c @ 0063572c

void FUN_0063572c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_330;
  undefined *local_328;
  undefined *local_288;
  undefined *local_280;
  ulong local_230;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  byte local_1c1;
  ulong local_1c0;
  byte local_1b1;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined *local_160 [3];
  char *local_148;
  int local_13c;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  if (local_138 == 0) {
    local_130 = 0;
    local_13c = 1;
  }
  else {
    pcVar4 = "MMTitleView";
    _objc_getClass();
    local_148 = pcVar4;
    if ((pcVar4 == (char *)0x0) ||
       (uVar8 = local_138,
       (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isKindOfClass__0269cd68,pcVar4),
       (uVar8 & 1) == 0)) {
      local_130 = 0;
      local_13c = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_160[0] = puVar5;
      FUN_006362e8(local_138,puVar5);
      _memset(auStack_1a8,0,0x40);
      puVar5 = local_160[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10)
      ;
      if (local_280 != (undefined *)0x0) {
        lVar7 = *local_198;
        local_288 = (undefined *)0x0;
        do {
          do {
            if (*local_198 - lVar7 != 0) {
              _objc_enumerationMutation(*local_198 - lVar7,puVar5);
            }
            uVar8 = *(ulong *)(local_1a0 + (long)local_288 * 8);
            local_168 = uVar8;
            if ((((uVar8 != 0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_tag_026cab98), uVar8 != 0x767))
                && (uVar8 = local_168,
                   (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_tag_026cab98),
                   uVar8 != 0x769)) &&
               (uVar8 = local_168,
               (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_tag_026cab98), uVar8 != 0x3e2))
            {
              local_1b1 = 0;
              local_1c1 = 0;
              uVar8 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_isHidden_026ca768);
              bVar1 = false;
              if ((uVar8 & 1) == 0) {
                uVar8 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_text_0269ce68);
                _objc_retainAutoreleasedReturnValue();
                local_1b1 = 1;
                bVar1 = false;
                local_1b0 = uVar8;
                if (uVar8 != 0) {
                  uVar8 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_1c1 = 1;
                  local_1c0 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  bVar1 = uVar8 != 0;
                }
              }
              if ((local_1c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c0);
              }
              if ((local_1b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1b0);
              }
              if (bVar1) {
                uVar8 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_text_0269ce68);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar8);
                if ((uVar6 & 1) != 0) {
                  uVar8 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_13c = 1;
                  local_130 = uVar8;
                  goto LAB_00635cf8;
                }
              }
            }
            local_288 = local_288 + 1;
          } while (local_288 < local_280);
          local_280 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_288 = (undefined *)0x0;
        } while (local_280 != (undefined *)0x0);
      }
      local_13c = 0;
LAB_00635cf8:
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_13c == 0) {
        _memset(auStack_218,0,0x40);
        puVar5 = local_160[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_328 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                   0x10);
        if (local_328 != (undefined *)0x0) {
          lVar7 = *local_208;
          local_330 = (undefined *)0x0;
          do {
            do {
              if (*local_208 - lVar7 != 0) {
                _objc_enumerationMutation(*local_208 - lVar7,puVar5);
              }
              uVar8 = *(ulong *)(local_210 + (long)local_330 * 8);
              local_1d8 = uVar8;
              if (((uVar8 != 0) &&
                  ((*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_tag_026cab98), uVar8 != 0x767))
                 && ((uVar8 = local_1d8,
                     (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_tag_026cab98),
                     uVar8 != 0x769 &&
                     (uVar8 = local_1d8,
                     (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_tag_026cab98),
                     uVar8 != 0x3e2)))) {
                bVar3 = false;
                bVar2 = false;
                uVar8 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_isHidden_026ca768);
                bVar1 = false;
                if ((uVar8 & 1) == 0) {
                  local_220 = local_1d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  bVar3 = true;
                  bVar1 = false;
                  if (local_220 != 0) {
                    local_230 = local_1d8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_text_0269ce68);
                    _objc_retainAutoreleasedReturnValue();
                    bVar2 = true;
                    uVar8 = local_230;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    bVar1 = uVar8 != 0;
                  }
                }
                if (bVar2) {
                  (*(code *)PTR__objc_release_02578630)(local_230);
                }
                if (bVar3) {
                  (*(code *)PTR__objc_release_02578630)(local_220);
                }
                if (bVar1) {
                  uVar8 = local_1d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_13c = 1;
                  local_130 = uVar8;
                  goto LAB_00636184;
                }
              }
              local_330 = local_330 + 1;
            } while (local_330 < local_328);
            local_328 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,
                       auStack_128,0x10);
            local_330 = (undefined *)0x0;
          } while (local_328 != (undefined *)0x0);
        }
        local_13c = 0;
LAB_00636184:
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (local_13c == 0) {
          local_13c = 0;
        }
      }
      _objc_storeStrong(local_160,0);
      if (local_13c == 0) {
        local_130 = 0;
        local_13c = 1;
      }
    }
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

