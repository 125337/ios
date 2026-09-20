// FUN_003cd094 @ 003cd094

byte FUN_003cd094(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint local_194;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  undefined1 *local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_c0 == 0) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_unreadCount_026a3080);
    if ((uVar1 == 0) &&
       (uVar1 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasRedDotUnread_026a3088),
       (uVar1 & 1) == 0)) {
      puVar2 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_groupForId__026a27e0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar1 = local_b8;
      FUN_003cd538(local_b8,local_c0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_d0;
      local_d8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_scope_0269ea90);
      if (((qword *)puVar3 == &segment_command_00000020.vmsize) &&
         (uVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
         uVar1 != 0)) {
        local_a9 = 1;
        local_c4 = 1;
      }
      else {
        _memset(auStack_120,0,0x40);
        uVar1 = local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        if (local_170 != 0) {
          lVar6 = *local_110;
          local_178 = 0;
          do {
            do {
              if (*local_110 - lVar6 != 0) {
                _objc_enumerationMutation(*local_110 - lVar6,uVar1);
              }
              uVar7 = *(ulong *)(local_118 + local_178 * 8);
              local_e0 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_session_0269d000);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              FUN_00366ae4();
              local_194 = 1;
              if ((uVar4 & 1) == 0) {
                uVar4 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_session_0269d000);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                FUN_00363c50();
                local_194 = (uint)uVar5;
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if ((local_194 & 1) != 0) {
                local_a9 = 1;
                local_c4 = 1;
                goto LAB_003cd480;
              }
              local_178 = local_178 + 1;
            } while (local_178 < local_170);
            local_170 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                       0x10);
            local_178 = 0;
          } while (local_170 != 0);
        }
        local_c4 = 0;
LAB_003cd480:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_c4 == 0) {
          local_a9 = 0;
          local_c4 = 1;
        }
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
    }
    else {
      local_a9 = 1;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

