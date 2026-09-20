// deleteGroupWithIdentifier: @ 01772ccc

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginHubManager::deleteGroupWithIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong local_1f8;
  ulong local_1f0;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined8 local_178;
  ID local_170;
  ID local_168;
  ID local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  ID local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  ID local_e0;
  undefined4 local_d4;
  ID local_d0;
  undefined8 local_c8;
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
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d0 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  uVar2 = local_c8;
  IVar3 = local_d0;
  if (IVar4 < 2) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    local_108 = PTR___NSConcreteGlobalBlock_02578658;
    local_100 = 0xd0800000;
    local_fc = 0;
    local_f8 = FUN_01773350;
    local_f0 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_indexOfObjectPassingTest__026a27f8,&local_108)
    ;
    local_e0 = IVar3;
    if (IVar3 == 0x7fffffffffffffff) {
      local_a9 = 0;
      local_d4 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeObjectAtIndex__0269d530,IVar3);
      IVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_110 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _memset(auStack_158,0,0x40);
      IVar3 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      if (local_1f0 != 0) {
        lVar7 = *local_148;
        local_1f8 = 0;
        do {
          do {
            if (*local_148 - lVar7 != 0) {
              _objc_enumerationMutation(*local_148 - lVar7,IVar3);
            }
            uVar8 = *(ulong *)(local_150 + local_1f8 * 8);
            local_118 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if ((uVar5 & 1) != 0) {
              _objc_storeStrong(&local_110,&cf_functions);
              local_d4 = 2;
              goto LAB_01773074;
            }
            local_1f8 = local_1f8 + 1;
          } while (local_1f8 < local_1f0);
          local_1f0 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_1f8 = 0;
        } while (local_1f0 != 0);
      }
      local_d4 = 0;
LAB_01773074:
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_customizationOverrides_026b4438);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_160 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      uVar2 = local_c8;
      IVar3 = local_160;
      local_198 = PTR___NSConcreteGlobalBlock_02578658;
      local_190 = 0xd0800000;
      local_18c = 0;
      local_188 = FUN_01773418;
      local_180 = &DAT_02588930;
      (*(code *)PTR__objc_retain_02578638)();
      IVar1 = local_110;
      local_178 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_160;
      local_170 = IVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_198);
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_WCRPluginHubGroups)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,
                 &cf_WCRPluginHubOverrides);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_1a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_notifyChanged_026b43a0);
      local_a9 = 1;
      local_d4 = 1;
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_160,0);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

