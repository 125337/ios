// FUN_015fd124 @ 015fd124

void FUN_015fd124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_1f0;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_150;
  undefined1 local_141;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatSeparateSessions_026b13b8);
  puVar2 = local_b8;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_d4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    uVar1 = local_c0;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatRemovedUsernames_026b1608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_138,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar6 = *local_128;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,puVar2);
          }
          local_f8 = *(ulong *)(local_130 + (long)local_1c0 * 8);
          uVar1 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsObject__0269cbb8,local_f8);
          if (((uVar1 & 1) == 0) &&
             (puVar3 = local_f0,
             (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_containsObject__0269cbb8,local_f8)
             , ((ulong)puVar3 & 1) == 0)) {
            uVar1 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_quickChatDisplayMode_026b16c8);
            if ((uVar1 - 1 == 0) ||
               (uVar4 = local_c8, FUN_015fa900(uVar1 - 1,local_c8,local_f8), (uVar4 & 1) == 0)) {
              uVar4 = local_f8;
              FUN_015fab58();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_f8;
              uVar5 = uVar4;
              local_140 = uVar4;
              FUN_015fac64(uVar4);
              FUN_015fada0(uVar1,uVar4,uVar5,local_c0);
              if ((uVar1 & 1) == 0) {
                local_d4 = 3;
              }
              else {
                uVar1 = local_f8;
                FUN_01601090(local_f8,local_140);
                if (((uVar1 & 1) == 0) &&
                   (uVar1 = local_f8, FUN_016011dc(local_f8,local_140), (uVar1 & 1) == 0)) {
                  uVar1 = local_f8;
                  FUN_015fafb8(local_f8,local_140);
                  local_141 = (undefined1)uVar1;
                  if ((uVar1 & 1) == 0) {
                    local_1f0 = local_e0;
                  }
                  else {
                    local_1f0 = local_e8;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_addObject__0269d180,local_f8);
                  _objc_storeStrong(&local_150,0);
                  local_d4 = 0;
                }
                else {
                  local_d4 = 3;
                }
              }
              _objc_storeStrong(&local_140,0);
            }
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObjectsFromArray__0269d540,local_e8);
    puVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_d4 = 1;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

