// FUN_017b2b64 @ 017b2b64

byte FUN_017b2b64(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_2a8;
  uint local_278;
  ulong local_248;
  ulong local_240;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  byte local_189;
  char *local_188;
  char *local_180;
  char *local_178;
  ulong local_168;
  bool local_159;
  ulong local_158;
  ulong local_150;
  byte local_141;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  undefined4 local_e4;
  undefined *local_e0 [3];
  undefined *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  FUN_017b3de4();
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    local_a9 = 0;
    local_e4 = 1;
  }
  else {
    local_f0 = 0;
    _memset(auStack_138,0,0x40);
    uVar8 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar8);
    local_240 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_240 != 0) {
      lVar7 = *local_128;
      local_248 = 0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,uVar3);
          }
          uVar8 = *(ulong *)(local_130 + local_248 * 8);
          local_141 = 0;
          puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_f8 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_278 = 1;
          if ((uVar8 & 1) == 0) {
            uVar8 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            local_141 = 1;
            local_140 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_278 = (uint)uVar8;
          }
          if ((local_141 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if ((local_278 & 1) != 0) {
            _objc_storeStrong(&local_f0,local_f8);
            local_e4 = 3;
            goto LAB_017b2fcc;
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    local_e4 = 0;
LAB_017b2fcc:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_159 = false;
    bVar1 = local_f0 == 0;
    if (bVar1) {
      local_2a8 = 0;
    }
    else {
      local_2a8 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_dataSource_0269e800);
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_2a8;
    }
    local_159 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_2a8;
    if ((local_159 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    local_168 = 0;
    uVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_valueForKey__0269d128,&cf_sections);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = local_168;
    local_168 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar8);
    uVar8 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
    if (uVar8 == 0) {
      local_a9 = 0;
    }
    else {
      pcVar4 = "getCellCount";
      _sel_getUid();
      pcVar5 = "getCellAt:";
      local_178 = pcVar4;
      _sel_getUid();
      pcVar4 = "removeCellAt:";
      local_180 = pcVar5;
      _sel_getUid();
      local_189 = 0;
      local_188 = pcVar4;
      for (local_198 = 0; uVar8 = local_198, uVar6 = local_168,
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0), uVar3 = local_f0,
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8, uVar8 < uVar6; local_198 = local_198 + 1) {
        uVar8 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_objectAtIndexedSubscript__0269cc78,local_198);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_respondsToSelector__026ca818,local_178);
        if ((((uVar8 & 1) == 0) ||
            (uVar8 = local_1a0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_respondsToSelector__026ca818,local_180), (uVar8 & 1) == 0))
           || (uVar8 = local_1a0,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a0,PTR_s_respondsToSelector__026ca818,local_188), (uVar8 & 1) == 0))
        {
          local_e4 = 8;
        }
        else {
          uVar8 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,local_178);
          local_1a8 = uVar8;
          local_1b0 = uVar8;
          while (local_1b0 = local_1b0 - 1, -1 < (long)local_1b0) {
            uVar8 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,local_180,local_1b0);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = uVar8;
            FUN_017b4270(uVar8,local_e0[0]);
            if ((uVar8 & 1) == 0) {
              local_e4 = 0xb;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_1a0,local_188,local_1b0);
              local_189 = 1;
              local_e4 = 0;
            }
            _objc_storeStrong(&local_1b8,0);
          }
          local_e4 = 0;
        }
        _objc_storeStrong(&local_1a0,0);
      }
      if ((local_189 & 1) == 0) {
        local_a9 = 0;
      }
      else {
        if (local_f0 == 0) {
          uVar8 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
          if ((uVar8 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_reloadTableView_0269dcb0);
          }
        }
        else {
          local_1e0 = PTR___NSConcreteGlobalBlock_02578658;
          local_1d8 = 0xd0800000;
          local_1d4 = 0;
          local_1d0 = FUN_017b4a44;
          local_1c8 = &DAT_0257a9d0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1c0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_performWithoutAnimation__0269e7e0,&local_1e0);
          _objc_storeStrong(&local_1c0,0);
        }
        local_a9 = 1;
      }
    }
    local_e4 = 1;
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

