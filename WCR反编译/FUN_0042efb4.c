// FUN_0042efb4 @ 0042efb4

void FUN_0042efb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_b8;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_b8;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      puVar3 = local_b8;
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        if (((ulong)puVar3 & 1) == 0) {
          local_b0 = (undefined *)0x0;
          local_c8 = 1;
        }
        else {
          puVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_dictionaryWithCapacity__026a1ad0,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_b8;
          local_150 = PTR___NSConcreteGlobalBlock_02578658;
          local_148 = 0xd0800000;
          local_144 = 0;
          local_140 = FUN_0042f624;
          local_138 = &DAT_02579a30;
          local_128 = puVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_150);
          puVar2 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
          local_c8 = 1;
          local_b0 = puVar2;
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
        }
      }
      else {
        puVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = puVar1;
        _memset(auStack_118,0,0x40);
        puVar2 = local_b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        if (local_1d8 != (undefined *)0x0) {
          lVar4 = *local_108;
          local_1e0 = (undefined *)0x0;
          do {
            do {
              if (*local_108 - lVar4 != 0) {
                _objc_enumerationMutation(*local_108 - lVar4,puVar2);
              }
              lVar5 = *(long *)(local_110 + (long)local_1e0 * 8);
              local_d8 = lVar5;
              FUN_0042efb4();
              _objc_retainAutoreleasedReturnValue();
              local_120 = lVar5;
              if (lVar5 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,lVar5);
              }
              _objc_storeStrong(&local_120,0);
              local_1e0 = local_1e0 + 1;
            } while (local_1e0 < local_1d8);
            local_1d8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8
                       ,0x10);
            local_1e0 = (undefined *)0x0;
          } while (local_1d8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
        local_c8 = 1;
        local_b0 = puVar2;
        _objc_storeStrong(&local_d0,0);
      }
      goto LAB_0042f5c4;
    }
  }
  puVar2 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar2;
  local_c8 = 1;
LAB_0042f5c4:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

