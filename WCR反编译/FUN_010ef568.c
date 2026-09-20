// FUN_010ef568 @ 010ef568

long FUN_010ef568(undefined8 param_1)

{
  bool bVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1b8;
  undefined *local_1b0;
  ulong local_180;
  ulong local_168;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  long local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  bool local_f1;
  ulong local_f0;
  ulong local_e8;
  bool local_d9;
  ulong local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(puVar2,param_1);
  if ((local_b8 == 0) || (FUN_010ee7b0(), ((ulong)puVar2 & 1) == 0)) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      local_b0 = 0;
      local_bc = 1;
    }
    else {
      uVar8 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_colorList_026aeb70);
      local_d9 = false;
      bVar1 = (uVar8 & 1) == 0;
      if (bVar1) {
        local_168 = 0;
      }
      else {
        local_168 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_colorList_026aeb70);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_168;
      }
      local_d9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = local_168;
      if ((local_d9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      uVar8 = local_b8;
      pcVar5 = &cf_ruleSetList;
      _NSSelectorFromString(&cf_ruleSetList);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_respondsToSelector__026ca818,pcVar5);
      local_180 = local_b8;
      local_f1 = false;
      bVar1 = (uVar8 & 1) == 0;
      if (bVar1) {
        local_180 = 0;
      }
      else {
        pcVar5 = &cf_ruleSetList;
        _NSSelectorFromString(&cf_ruleSetList);
        (*(code *)PTR__objc_msgSend_02578628)(local_180,pcVar5);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_180;
      }
      local_f1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_180;
      if ((local_f1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      pcVar5 = &cf_loadColorFromPath_;
      _NSSelectorFromString();
      pcVar6 = &cf_loadCSSFromPath_IntoRuleSetList_;
      local_100 = pcVar5;
      _NSSelectorFromString();
      local_110 = 0;
      local_108 = pcVar6;
      _memset(auStack_158,0,0x40);
      puVar3 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10)
      ;
      if (local_1b0 != (undefined *)0x0) {
        lVar7 = *local_148;
        local_1b8 = (undefined *)0x0;
        do {
          do {
            if (*local_148 - lVar7 != 0) {
              _objc_enumerationMutation(*local_148 - lVar7,puVar3);
            }
            uVar8 = *(ulong *)(local_150 + (long)local_1b8 * 8);
            local_118 = uVar8;
            FUN_010efac0();
            if ((uVar8 & 1) == 0) {
              if (((local_e8 != 0) &&
                  (uVar8 = local_b8,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_respondsToSelector__026ca818,local_108),
                  (uVar8 & 1) != 0)) &&
                 (uVar8 = local_b8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_108,local_118,local_e8),
                 (uVar8 & 1) != 0)) {
                local_110 = local_110 + 1;
              }
            }
            else if (((local_d0 != 0) &&
                     (uVar8 = local_d0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_d0,PTR_s_respondsToSelector__026ca818,local_100),
                     (uVar8 & 1) != 0)) &&
                    (uVar8 = local_d0,
                    (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_100,local_118),
                    (uVar8 & 1) != 0)) {
              local_110 = local_110 + 1;
            }
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_1b8 = (undefined *)0x0;
        } while (local_1b0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_b0 = local_110;
      local_bc = 1;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

