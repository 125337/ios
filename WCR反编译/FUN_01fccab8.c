// FUN_01fccab8 @ 01fccab8

void FUN_01fccab8(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_220;
  undefined *local_218;
  undefined *local_1c0;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined1 local_c1;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar4 = local_b8;
  local_c1 = 0;
  bVar2 = true;
  uVar1 = local_b8 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar4 == puVar3;
    local_c1 = uVar1;
    local_c0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_c1;
  }
  local_c1 = uVar1;
  puVar4 = local_b8;
  if (bVar2) {
    local_b0 = (undefined *)0x0;
    local_c8 = 1;
    goto LAB_01fcd3b4;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  puVar3 = local_b8;
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    puVar4 = local_b8;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      puVar3 = local_b8;
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        puVar4 = local_b8;
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          puVar3 = local_b8;
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
            puVar4 = local_b8;
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
              puVar3 = local_b8;
              if (((ulong)puVar4 & 1) == 0) {
                puVar4 = PTR__OBJC_CLASS___NSOrderedSet_026ce618;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSOrderedSet_026ce618,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                puVar4 = local_b8;
                if (((ulong)puVar3 & 1) == 0) {
                  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3)
                  ;
                  puVar3 = local_b8;
                  if (((ulong)puVar4 & 1) == 0) {
                    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                    if (((ulong)puVar3 & 1) == 0) {
                      local_b0 = (undefined *)0x0;
                      local_c8 = 1;
                    }
                    else {
                      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
                                 PTR_s_dictionary_0269d240);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = local_b8;
                      local_160 = PTR___NSConcreteGlobalBlock_02578658;
                      local_158 = 0xd0800000;
                      local_154 = 0;
                      local_150 = FUN_0219c998;
                      local_148 = &DAT_02579a30;
                      local_138 = puVar3;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_140 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_160);
                      puVar4 = local_138;
                      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_copy_0269d150);
                      local_c8 = 1;
                      local_b0 = puVar4;
                      _objc_storeStrong(&local_140);
                      _objc_storeStrong(&local_138,0);
                    }
                    goto LAB_01fcd3b4;
                  }
                }
              }
              puVar4 = local_b8;
              local_d8 = (undefined *)0x0;
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
              puVar3 = local_b8;
              if (((ulong)puVar4 & 1) == 0) {
                puVar4 = PTR__OBJC_CLASS___NSOrderedSet_026ce618;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSOrderedSet_026ce618,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
                if (((ulong)puVar3 & 1) == 0) {
                  puVar3 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allObjects_0269d228);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_d8;
                  local_d8 = puVar3;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                }
                else {
                  puVar3 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_d8;
                  local_d8 = puVar3;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                }
              }
              else {
                _objc_storeStrong(&local_d8,local_b8);
              }
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              puVar3 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar3)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_e0 = puVar4;
              _memset(auStack_128,0,0x40);
              puVar4 = local_d8;
              (*(code *)PTR__objc_retain_02578638)();
              local_218 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                         auStack_a8,0x10);
              if (local_218 != (undefined *)0x0) {
                lVar5 = *local_118;
                local_220 = (undefined *)0x0;
                do {
                  do {
                    if (*local_118 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_118 - lVar5,puVar4);
                    }
                    lVar6 = *(long *)(local_120 + (long)local_220 * 8);
                    local_e8 = lVar6;
                    FUN_01fccab8();
                    _objc_retainAutoreleasedReturnValue();
                    local_130 = lVar6;
                    if (lVar6 != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_addObject__0269d180,lVar6);
                    }
                    _objc_storeStrong(&local_130,0);
                    local_220 = local_220 + 1;
                  } while (local_220 < local_218);
                  local_218 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                             auStack_a8,0x10);
                  local_220 = (undefined *)0x0;
                } while (local_218 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
              local_c8 = 1;
              local_b0 = puVar4;
              _objc_storeStrong(&local_e0);
              _objc_storeStrong(&local_d8,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_absoluteString_026a1de0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar4;
              FUN_01fd868c();
              _objc_retainAutoreleasedReturnValue();
              local_d0 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
              if (puVar4 == (undefined *)0x0) {
                local_1c0 = (undefined *)0x0;
              }
              else {
                local_1c0 = local_d0;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = local_1c0;
              local_c8 = 1;
              _objc_storeStrong(&local_d0,0);
            }
          }
          else {
            puVar4 = local_b8;
            FUN_0206fe3c();
            _objc_retainAutoreleasedReturnValue();
            local_c8 = 1;
            local_b0 = puVar4;
          }
          goto LAB_01fcd3b4;
        }
      }
    }
  }
  puVar4 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar4;
  local_c8 = 1;
LAB_01fcd3b4:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

