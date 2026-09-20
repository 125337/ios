// loadPluginList @ 01ca8cb8

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginSortViewController::loadPluginList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong local_250;
  ulong local_248;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  ID local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_pluginSortOrder_026c2eb0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_130;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_getEnabledPlugins_026c2eb8);
  _objc_retainAutoreleasedReturnValue();
  local_150 = IVar2;
  if ((local_148 == (undefined *)0x0) ||
     (puVar1 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     puVar1 == (undefined *)0x0)) {
    IVar2 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_mutableCopy_0269d8a0);
    IVar3 = *(ID *)(local_130 + (long)_pluginList);
    *(ID *)(local_130 + (long)_pluginList) = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar1;
    _memset(auStack_1a0,0,0x40);
    puVar1 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar4 = *local_190;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar4 != 0) {
            _objc_enumerationMutation(*local_190 - lVar4,puVar1);
          }
          local_160 = *(undefined8 *)(local_198 + (long)local_210 * 8);
          IVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_160);
          if ((IVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_1e8,0,0x40);
    IVar2 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,0x10);
    if (local_248 != 0) {
      lVar4 = *local_1d8;
      local_250 = 0;
      do {
        do {
          if (*local_1d8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar4,IVar2);
          }
          local_1a8 = *(undefined8 *)(local_1e0 + local_250 * 8);
          puVar1 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_containsObject__0269cbb8,local_1a8);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8);
          }
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_250 = 0;
      } while (local_248 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(local_130 + (long)_pluginList,local_158);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

