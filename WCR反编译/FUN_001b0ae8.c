// FUN_001b0ae8 @ 001b0ae8

void FUN_001b0ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_150 [2];
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  int local_e8;
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  if ((local_d0 == 0) ||
     (lVar7 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     lVar7 == 0)) {
    local_c8 = 0;
    local_e8 = 1;
  }
  else {
    local_f0 = 0;
    _memset(auStack_138,0,0x40);
    puVar1 = PTR_s_getContactByName__0269d178;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_getContactFromDic__0269fef0;
    local_c0 = puVar1;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_getContactForSearchByName__0269f828;
    local_b8 = puVar2;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_1b8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1b8 != (undefined *)0x0) {
      lVar7 = *local_128;
      local_1c0 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,puVar4);
          }
          uVar8 = *(undefined8 *)(local_130 + (long)local_1c0 * 8);
          local_f8 = uVar8;
          _NSSelectorFromString();
          uVar5 = local_d0;
          local_140 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,uVar8);
          if ((uVar5 & 1) != 0) {
            uVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_140,local_d8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_f0;
            local_f0 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar5 = local_f0;
            FUN_001a9e0c(local_f0,&cf_m_nsUsrName);
            _objc_retainAutoreleasedReturnValue();
            local_150[0] = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
            if ((uVar5 == 0) ||
               (puVar1 = PTR_WCRefinePrivateFriendManager_026ce160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (PTR_WCRefinePrivateFriendManager_026ce160,
                          PTR_s_shouldConcealUsername__0269fef8,local_150[0]),
               ((ulong)puVar1 & 1) == 0)) {
              uVar6 = local_150[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_length_0269cca0);
              uVar5 = 0;
              if ((uVar6 == 0) ||
                 (uVar5 = local_150[0],
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_150[0],PTR_s_caseInsensitiveCompare__0269db48,local_d8),
                 uVar6 = local_f0, uVar5 != 0)) {
                _objc_storeStrong(uVar5,&local_f0,0);
                local_e8 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_c8 = uVar6;
                local_e8 = 1;
              }
            }
            else {
              local_c8 = 0;
              local_e8 = 1;
            }
            _objc_storeStrong(local_150,0);
            if (local_e8 != 0) goto LAB_001b1094;
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1c0 = (undefined *)0x0;
      } while (local_1b8 != (undefined *)0x0);
    }
    local_e8 = 0;
LAB_001b1094:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_e8 == 0) {
      local_c8 = 0;
      local_e8 = 1;
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

