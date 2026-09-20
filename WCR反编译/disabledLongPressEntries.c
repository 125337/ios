// disabledLongPressEntries @ 01100e10

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::disabledLongPressEntries(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ID IVar4;
  long lVar5;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_2a8;
  ulong local_2a0;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ID local_188;
  undefined *local_180;
  undefined *local_178;
  ID local_170;
  undefined **local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_14c;
  ID local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_disabledLongPressItemIDSet_026aedd8);
  _objc_retainAutoreleasedReturnValue();
  local_148 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_14c = 1;
    local_130 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_158 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_148;
    ppuVar3 = &local_1a8;
    local_1a8 = PTR___NSConcreteStackBlock_02578660;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_01101324;
    local_190 = &DAT_02585760;
    local_160 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_160;
    local_188 = IVar4;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_158;
    local_180 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar2;
    local_170 = local_138;
    _objc_retainBlock();
    local_168 = ppuVar3;
    _memset(auStack_1f0,0,0x40);
    IVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allNativeAndDiscoveredLongPressE_026aed40)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a0 != 0) {
      lVar5 = *local_1e0;
      local_2a8 = 0;
      do {
        do {
          if (*local_1e0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar5,IVar4);
          }
          local_1b0 = *(undefined8 *)(local_1e8 + local_2a8 * 8);
          (*(code *)local_168[2])(local_168,local_1b0);
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,0x10
                  );
        local_2a8 = 0;
      } while (local_2a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _memset(auStack_238,0,0x40);
    IVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_displayEntriesForCategory__026aee10,0);
    _objc_retainAutoreleasedReturnValue();
    local_2e0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2e0 != 0) {
      lVar5 = *local_228;
      local_2e8 = 0;
      do {
        do {
          if (*local_228 - lVar5 != 0) {
            _objc_enumerationMutation(*local_228 - lVar5,IVar4);
          }
          local_1f8 = *(undefined8 *)(local_230 + local_2e8 * 8);
          (*(code *)local_168[2])(local_168,local_1f8);
          local_2e8 = local_2e8 + 1;
        } while (local_2e8 < local_2e0);
        local_2e0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,
                   0x10);
        local_2e8 = 0;
      } while (local_2e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar1 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_copy_0269d150);
    local_14c = 1;
    local_130 = puVar1;
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

