// officialEntries @ 01f15f64

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoStore::officialEntries(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  undefined *local_1c8;
  ulong local_1a8;
  ulong local_1a0;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined *local_150;
  ID local_148;
  ID local_140;
  undefined4 local_138;
  bool local_131;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    _objc_storeStrong(&local_c0,*(undefined8 *)PTR____NSDictionary0___02578288);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_b0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rawOfficialItemsWithLimit__026c8258,200);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar3;
  _memset(auStack_118,0,0x40);
  IVar3 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1a0 != 0) {
    lVar5 = *local_108;
    local_1a8 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,IVar3);
        }
        lVar6 = *(long *)(local_110 + local_1a8 * 8);
        local_d8 = lVar6;
        FUN_01f15094();
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        local_131 = false;
        if (lVar6 == 0) {
          local_1c8 = (undefined *)0x0;
        }
        else {
          local_1c8 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,local_120);
          _objc_retainAutoreleasedReturnValue();
          local_130 = local_1c8;
        }
        local_131 = lVar6 != 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = local_1c8;
        if ((local_131 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        puVar1 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_completed);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (((ulong)puVar2 & 1) == 0) {
          IVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_entryFromOfficialItem_meta__026c8260,local_d8,local_128);
          _objc_retainAutoreleasedReturnValue();
          local_140 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,IVar4);
          _objc_storeStrong(&local_140,0);
          local_138 = 0;
        }
        else {
          local_138 = 3;
        }
        _objc_storeStrong(&local_128);
        _objc_storeStrong(&local_120,0);
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1a8 = 0;
    } while (local_1a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_c0;
  puVar1 = local_c8;
  local_170 = PTR___NSConcreteGlobalBlock_02578658;
  local_168 = 0xd0800000;
  local_164 = 0;
  local_160 = FUN_01f164b8;
  local_158 = &DAT_0258cb40;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = puVar1;
  local_148 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_170);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = 1;
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

