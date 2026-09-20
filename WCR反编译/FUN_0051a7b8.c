// FUN_0051a7b8 @ 0051a7b8

void FUN_0051a7b8(undefined8 param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_270;
  ulong local_268;
  long local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  long local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  byte local_169;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  uint local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_130;
  local_130 = 0;
  _objc_storeStrong(puVar2,param_1);
  FUN_0051890c();
  if ((((ulong)puVar2 & 1) == 0) || (local_130 == 0)) {
    local_134 = 1;
  }
  else {
    uVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_timelineDataList_026a48a8);
    if ((uVar3 & 1) == 0) {
      local_134 = 1;
    }
    else {
      uVar9 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_timelineDataList_026a48a8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_140 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar3 = local_140;
      if ((uVar9 & 1) == 0) {
        local_134 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = uVar3;
        local_150 = 0;
        uVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_microMerchantFeedsMgr_026a4850
                  );
        if ((uVar3 & 1) != 0) {
          uVar9 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_microMerchantFeedsMgr_026a4850);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_150;
          local_150 = uVar9;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        uVar3 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_158 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        local_160 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_169 = 0;
        local_168 = puVar4;
        _memset(auStack_1b8,0,0x40);
        uVar3 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
        local_268 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_268 != 0) {
          lVar8 = *local_1a8;
          local_270 = 0;
          do {
            do {
              if (*local_1a8 - lVar8 != 0) {
                _objc_enumerationMutation(*local_1a8 - lVar8,uVar3);
              }
              uVar9 = *(ulong *)(local_1b0 + local_270 * 8);
              local_1c0 = 0;
              local_178 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar9,PTR_s_respondsToSelector__026ca818,PTR_s_wsGroup_026a4858);
              if ((uVar9 & 1) != 0) {
                uVar6 = local_178;
                (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_wsGroup_026a4858);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = local_1c0;
                local_1c0 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar9);
              }
              uVar9 = local_1c0;
              FUN_00519058();
              local_1c8 = uVar9;
              if (uVar9 < 2) {
                if (local_1c0 != 0) {
                  FUN_0051915c(local_178);
                  local_169 = 1;
                }
                FUN_00519224(local_158,local_168,local_178);
                local_134 = 3;
              }
              else {
                uVar6 = local_150;
                FUN_00519600(uVar9 - 2,local_150,local_1c0);
                _objc_retainAutoreleasedReturnValue();
                local_1d0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_count_0269cfe0);
                if (uVar6 < 2) {
                  uVar9 = local_178;
                  FUN_00519384(uVar6 - 2,local_178,local_1c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_1d8 = uVar9;
                  FUN_00519a64(local_150,uVar9);
                  FUN_00519cc8(local_150,local_1c0,local_178);
                  FUN_00519224(local_158,local_168,local_178);
                  local_134 = 3;
                  _objc_storeStrong(&local_1d8,0);
                }
                else {
                  local_169 = 1;
                  _memset(auStack_220,0,0x40);
                  uVar9 = local_1d0;
                  FUN_00519b64();
                  _objc_retainAutoreleasedReturnValue();
                  local_2b0 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  if (local_2b0 != 0) {
                    lVar10 = *local_210;
                    local_2b8 = 0;
                    do {
                      do {
                        if (*local_210 - lVar10 != 0) {
                          _objc_enumerationMutation(*local_210 - lVar10,uVar9);
                        }
                        local_1e0 = *(long *)(local_218 + local_2b8 * 8);
                        FUN_0051915c(local_1e0);
                        puVar4 = local_158;
                        FUN_00519224(local_158,local_168,local_1e0);
                        if (((ulong)puVar4 & 1) != 0) {
                          lVar7 = local_1e0;
                          FUN_0051af84();
                          _objc_retainAutoreleasedReturnValue();
                          local_228 = lVar7;
                          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
                          if (lVar7 != 0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_160,PTR_s_addObject__0269d180,local_228);
                          }
                          _objc_storeStrong(&local_228,0);
                        }
                        local_2b8 = local_2b8 + 1;
                      } while (local_2b8 < local_2b0);
                      local_2b0 = uVar9;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                                 auStack_128,0x10);
                      local_2b8 = 0;
                    } while (local_2b0 != 0);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                  local_134 = 0;
                }
                _objc_storeStrong(&local_1d0,0);
              }
              _objc_storeStrong(&local_1c0,0);
              local_270 = local_270 + 1;
            } while (local_270 < local_268);
            local_268 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                       0x10);
            local_270 = 0;
          } while (local_268 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        bVar1 = (local_169 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeAllObjects_0269d508);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_addObjectsFromArray__0269d540,local_158);
          FUN_0051b0e0(local_130,local_160);
        }
        local_134 = (uint)!bVar1;
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_160,0);
        _objc_storeStrong(&local_158,0);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_148,0);
      }
      _objc_storeStrong(&local_140,0);
    }
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

