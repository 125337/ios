// deleteGroupId: @ 00f2e834

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonGroupStore::deleteGroupId_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_170;
  ulong local_168;
  ID local_148;
  ID local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
  undefined *local_e8;
  ID local_e0;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  FUN_00f29cf4();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf___all__);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_d0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_d0,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__), (uVar1 & 1) == 0)) {
      IVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groups_026a1048);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_e0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 0;
      local_e8 = puVar3;
      _memset(auStack_138,0,0x40);
      IVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar6 = *local_128;
        local_170 = 0;
        do {
          do {
            if (*local_128 - lVar6 != 0) {
              _objc_enumerationMutation(*local_128 - lVar6,IVar2);
            }
            uVar7 = *(ulong *)(local_130 + local_170 * 8);
            local_f8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar7;
            FUN_00f29cf4();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f8);
            }
            else {
              local_e9 = 1;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((local_e9 & 1) == 0) {
        local_a9 = 0;
        local_d4 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setGroups__026abf30,local_e8);
        IVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_membership_026abf38);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_140 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_allKeysForObject__026abf68,local_d0);
        _objc_retainAutoreleasedReturnValue();
        local_148 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_removeObjectsForKeys__026a35f0,IVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setMembership__026abf70,local_140);
        IVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_selectedFilterGroupId_026a0fe8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((IVar5 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        FUN_00f2c2e0();
        local_a9 = 1;
        local_d4 = 1;
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_140,0);
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
    }
    else {
      local_a9 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

