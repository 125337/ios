// FUN_01f07f3c @ 01f07f3c

void FUN_01f07f3c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_180;
  undefined *local_178;
  long local_158;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if (local_b0 == 0) {
    local_158 = *(long *)PTR____NSDictionary0___02578288;
  }
  else {
    local_158 = local_b0;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionaryWithDictionary__026aadf0
             ,local_158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  _memset(auStack_108,0,0x40);
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != (undefined *)0x0) {
    lVar3 = *local_f8;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,puVar2);
        }
        uVar4 = *(ulong *)(local_100 + (long)local_180 * 8);
        local_c8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,&cf___localStorage___)
        ;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_removeObjectForKey__0269d700,local_c8);
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_b8;
  puVar2 = local_c0;
  if ((uVar4 & 1) != 0) {
    local_130 = PTR___NSConcreteGlobalBlock_02578658;
    local_128 = 0xd0800000;
    local_124 = 0;
    local_120 = FUN_01f10200;
    local_118 = &DAT_02579a30;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_130);
    _objc_storeStrong(&local_110,0);
  }
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

