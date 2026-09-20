// _WCRefineEnhancedAdBlockProcessObject @ 00f5331c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRefineEnhancedAdBlockProcessObject(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_210;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_b8;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar4 = local_b8;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_b0 = local_b8;
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_bc = 1;
      }
      else {
        puVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar3;
        _memset(auStack_140,0,0x40);
        puVar3 = local_b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        if (local_1d8 != (undefined *)0x0) {
          lVar5 = *local_130;
          local_1e0 = (undefined *)0x0;
          do {
            do {
              if (*local_130 - lVar5 != 0) {
                _objc_enumerationMutation(*local_130 - lVar5,puVar3);
              }
              local_210 = *(undefined **)(local_138 + (long)local_1e0 * 8);
              local_100 = local_210;
              _WCRefineEnhancedAdBlockProcessObject();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_f8;
              bVar1 = local_210 == (undefined *)0x0;
              local_148 = local_210;
              if (bVar1) {
                local_150 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                _objc_retainAutoreleasedReturnValue();
                local_210 = local_150;
              }
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_210);
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_150);
              }
              _objc_storeStrong(&local_148,0);
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_1e0 = (undefined *)0x0;
          } while (local_1d8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
        local_bc = 1;
        local_b0 = puVar3;
        _objc_storeStrong(&local_f8,0);
      }
    }
    else {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithCapacity__026a1ad0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_b8;
      local_f0 = PTR___NSConcreteGlobalBlock_02578658;
      local_e8 = 0xd0800000;
      local_e4 = 0;
      local_e0 = FUN_00f53988;
      local_d8 = &DAT_02579a30;
      local_c8 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_f0);
      puVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
      local_bc = 1;
      local_b0 = puVar3;
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
    }
  }
  else {
    puVar3 = local_b8;
    FUN_00f538a8();
    _objc_retainAutoreleasedReturnValue();
    local_bc = 1;
    local_b0 = puVar3;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

