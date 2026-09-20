// usernamesForHomeCustomGroupName: @ 014bcbe8

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::usernamesForHomeCustomGroupName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_160;
  undefined *local_158;
  undefined *local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar6 = local_c8;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    IVar1 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b0 = IVar1;
  }
  else {
    _memset(auStack_120,0,0x40);
    puVar2 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_140 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_158 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
              );
    if (local_158 != (undefined *)0x0) {
      lVar6 = *local_110;
      local_160 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,local_140);
          }
          uVar7 = *(ulong *)(local_118 + (long)local_160 * 8);
          local_e0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar7;
          FUN_014b5580();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar7);
          IVar1 = local_b8;
          if ((uVar5 & 1) != 0) {
            uVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_groupId_0269ea88);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_usernamesForHomeGroupID__026af4b8);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = IVar1;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_d4 = 1;
            goto LAB_014bcf2c;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_160 = (undefined *)0x0;
      } while (local_158 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_014bcf2c:
    (*(code *)PTR__objc_release_02578630)(local_140);
    if (local_d4 == 0) {
      IVar1 = *(ID *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_d4 = 1;
      local_b0 = IVar1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

